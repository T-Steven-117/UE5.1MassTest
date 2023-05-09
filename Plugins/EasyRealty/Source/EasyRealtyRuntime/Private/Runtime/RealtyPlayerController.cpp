// Fill out your copyright notice in the Description page of Project Settings.


#include "Runtime/RealtyPlayerController.h"
#include "Runtime/PointTargetActor.h"
#include <UObject/ConstructorHelpers.h>
#include <Curves/CurveFloat.h>
#include <Kismet/KismetMathLibrary.h>
#include <LevelSequence/Public/LevelSequenceActor.h>
#include <MovieSceneSequencePlayer.h>
#include <Kismet/GameplayStatics.h>

#include "UMG/RealtyUserWidgetBase.h"


ARealtyPlayerController::ARealtyPlayerController()
{
	ARealtyPlayerController::SetShowMouseCursor(true);
	static ConstructorHelpers::FObjectFinder<UCurveFloat> SwtichCurveObj(TEXT("CurveFloat'/EasyRealty/Core/Curve_SwitchPawn.Curve_SwitchPawn'"));
	if (SwtichCurveObj.Succeeded())
	{
		SwtichCurve = SwtichCurveObj.Object;
	}


}

void ARealtyPlayerController::BeginPlay()
{
	Super::BeginPlay();



}

void ARealtyPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (InBlendView)
	{
		BlendViewTime += DeltaTime;

		APawn* OrignPawn = GetPawn();

		if (OrignPawn && UsePawnTargetActor)
		{
			//FVector Loc =  UKismetMathLibrary::VInterpTo(tf1.GetLocation(), tf2.GetLocation(), DeltaTime, 10);
			//FRotator Rot = UKismetMathLibrary::RInterpTo(tf1.GetRotation().Rotator(), tf2.GetRotation().Rotator(), DeltaTime, 10);

			float alpha = BlendViewTime / MaxBlendViewTime;
			if (alpha > 1.0f)
			{
				alpha = 1.0f;
			}


			float Ralpha = alpha;
			if (SwtichCurve)
			{
				Ralpha = SwtichCurve->GetFloatValue(alpha);
			}

			FVector Loc = UKismetMathLibrary::VLerp(BlendTransform.GetLocation(), TargetTransform.GetLocation(), Ralpha);
			FRotator Rot = UKismetMathLibrary::RLerp(BlendTransform.GetRotation().Rotator(), TargetTransform.GetRotation().Rotator(), Ralpha, true);

			OrignPawn->SetActorLocationAndRotation(Loc, Rot);

		}

		if (BlendViewTime >= MaxBlendViewTime)
		{
			InBlendView = false;
			BlendViewTime = .0f;
			MaxBlendViewTime = .0f;
			OnBlendCompleteEvent.Broadcast();
		}
	}



}


void ARealtyPlayerController::PossessNextPointTransient(const FString& Name, TSubclassOf<class APointTargetActor> PawnTargetActorClass,const FString &TargetSequenceSoftPath, const FTransform& TF, float BlendSpeed, bool NoHoldTransform /*= false*/, bool NoTransfer)
{
	if (PawnTargetActorClass == nullptr /*|| (UsePawnTargetActor && UsePawnTargetActor->StaticClass() == PawnTargetActorClass)*/)
	{
		return;
	}

	//
	NoHoldTransform &= TargetSequenceSoftPath.Equals("None");
	NoTransfer &= (!NoHoldTransform && TargetSequenceSoftPath.Equals("None"));

	APawn* OrignPawn = GetPawn();

	BlendTransform = OrignPawn->GetActorTransform();

	//stop pre sequences
	if (UsePawnTargetActor != nullptr)
	{
		if (UsePawnTargetActor->PawnSequence)
		{
			UsePawnTargetActor->PawnSequence->SequencePlayer->OnFinished.RemoveAll(this);
			UsePawnTargetActor->PawnSequence->SequencePlayer->Stop();
		}
		UsePawnTargetActor->OnControlLost();
	}

	FActorSpawnParameters asp;
	asp.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
	APointTargetActor *PointTargetActor = GetWorld()->SpawnActor<APointTargetActor>(PawnTargetActorClass, TF, asp);
	PointTargetActor->IsTransient = true;
	PointTargetActor->Name = Name;
	PointTargetActor->TargetSequenceSoftPath = TargetSequenceSoftPath;
	if (NoHoldTransform)
	{
		AddCacheMap(Name, TF,true);
	}

	OnBlendCompleteEvent.RemoveAll(this);
	OnBlendCompleteEvent.AddUObject(this, &ARealtyPlayerController::OnBlendViewComplete, PointTargetActor, NoHoldTransform);

	OrignPawn->DisableInput(this);

	if (!NoTransfer)
	{
		InBlendView = true;

	}
	BlendViewTime = 0.0f;
	MaxBlendViewTime = BlendSpeed;

	if (UsePawnTargetActor)
	{
		if (UsePawnTargetActor->IsTransient)
		{
			UsePawnTargetActor->Destroy();
		}
		UsePawnTargetActor = nullptr;
	}

	UsePawnTargetActor = PointTargetActor;

	if (!NoHoldTransform)
	{
		TargetTransform = UsePawnTargetActor->GetActorTransform();
	}
	else
	{
		TargetTransform = GetCacheTransform(Name);
	}

	if (UsePawnTargetActor)
	{
		UsePawnTargetActor->OnControlPreGet();
	}



	InSwitchProcess = true;

	if (NoTransfer)
	{
		OnSwitchComplete();
		OrignPawn->SetActorTransform(BlendTransform);
	}

}

void ARealtyPlayerController::PossessNextPointPersistent(const FString& Name, const FString& PawnTargetActorTag, const FString& TargetSequenceSoftPath, float BlendSpeed, bool NoHoldTransform /*= false*/, bool NoTransfer, URealtyUserWidgetBase* RelatedWidget)
{
	APointTargetActor* PointTargetActor = nullptr;
	TArray<AActor*> OutActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), *PawnTargetActorTag, OutActors);
	if (OutActors.Num() > 0)
	{
		PointTargetActor = Cast<APointTargetActor>(OutActors[0]);
		RestoredTarget = PointTargetActor;
	}

	if (PointTargetActor == nullptr /*|| (UsePawnTargetActor && UsePawnTargetActor == PointTargetActor)*/)
	{
		{
			if (UsePawnTargetActor != nullptr)
			{
				if (UsePawnTargetActor->PawnSequence)
				{
					UsePawnTargetActor->PawnSequence->SequencePlayer->OnFinished.RemoveAll(this);
					UsePawnTargetActor->PawnSequence->SequencePlayer->Stop();

				}
				UsePawnTargetActor->OnControlLost();
				UsePawnTargetActor = nullptr;
			}
		}
		return;
	}
	if(RelatedWidget)
	{
		PointTargetActor->RelatedWidget = RelatedWidget;
	}
	//
	NoHoldTransform &= TargetSequenceSoftPath.Equals("None");
	NoTransfer &= (!NoHoldTransform && TargetSequenceSoftPath.Equals("None"));

	APawn* OrignPawn = GetPawn();

	BlendTransform = OrignPawn->GetActorTransform();

	//stop pre sequences
	if (UsePawnTargetActor != nullptr)
	{
		if (UsePawnTargetActor->PawnSequence)
		{
			UsePawnTargetActor->PawnSequence->SequencePlayer->OnFinished.RemoveAll(this);
			UsePawnTargetActor->PawnSequence->SequencePlayer->Stop();
		}
		UsePawnTargetActor->OnControlLost();
	}


	PointTargetActor->IsTransient = false;
	PointTargetActor->Name = Name;
	PointTargetActor->TargetSequenceSoftPath = TargetSequenceSoftPath;
	if (NoHoldTransform)
	{
		FTransform TF = PointTargetActor->GetActorTransform();
		AddCacheMap(Name, TF, true);
	}

	OnBlendCompleteEvent.RemoveAll(this);
	OnBlendCompleteEvent.AddUObject(this, &ARealtyPlayerController::OnBlendViewComplete, PointTargetActor, NoHoldTransform);

	OrignPawn->DisableInput(this);

	if (!NoTransfer)
	{
		InBlendView = true;

	}
	BlendViewTime = 0.0f;
	MaxBlendViewTime = BlendSpeed;

	if (UsePawnTargetActor)
	{
		if (UsePawnTargetActor->IsTransient)
		{
			UsePawnTargetActor->Destroy();
		}
		UsePawnTargetActor = nullptr;
	}

	UsePawnTargetActor = PointTargetActor;

	if (!NoHoldTransform)
	{
		TargetTransform = UsePawnTargetActor->GetActorTransform();
	}
	else
	{
		TargetTransform = GetCacheTransform(Name);
	}

	if (UsePawnTargetActor)
	{
		UsePawnTargetActor->OnControlPreGet();
	}


	InSwitchProcess = true;

	if (NoTransfer)
	{
		OnSwitchComplete();
		OrignPawn->SetActorTransform(BlendTransform);
	}
}


void ARealtyPlayerController::PossessNextPointPersistentFast(const FString& Name, const FString& PawnTargetActorTag, const FString& TargetSequenceSoftPath, float BlendSpeed, bool NoHoldTransform /*= false*/, bool NoTransfer /*= false*/, URealtyUserWidgetBase* RelatedWidget /*= nullptr*/)
{
	APointTargetActor* PointTargetActor = nullptr;
	TArray<AActor*> OutActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), *PawnTargetActorTag, OutActors);
	if (OutActors.Num() > 0)
	{
		PointTargetActor = Cast<APointTargetActor>(OutActors[0]);
		RestoredTarget = PointTargetActor;
	}

	if (PointTargetActor == nullptr /*|| (UsePawnTargetActor && UsePawnTargetActor == PointTargetActor)*/)
	{
		{
			if (UsePawnTargetActor != nullptr)
			{
				if (UsePawnTargetActor->PawnSequence)
				{
					UsePawnTargetActor->PawnSequence->SequencePlayer->OnFinished.RemoveAll(this);
					UsePawnTargetActor->PawnSequence->SequencePlayer->Stop();
				}
				UsePawnTargetActor->OnControlLost();
				UsePawnTargetActor = nullptr;
			}
		}
		return;
	}
	if (RelatedWidget)
	{
		PointTargetActor->RelatedWidget = RelatedWidget;
	}
	//

	APawn* OrignPawn = GetPawn();

	BlendTransform = OrignPawn->GetActorTransform();

	//stop pre sequences
	if (UsePawnTargetActor != nullptr)
	{
		if (UsePawnTargetActor->PawnSequence)
		{
			UsePawnTargetActor->PawnSequence->SequencePlayer->OnFinished.RemoveAll(this);
			UsePawnTargetActor->PawnSequence->SequencePlayer->Stop();
		}
		UsePawnTargetActor->OnControlLost();
	}

	PointTargetActor->IsTransient = false;
	PointTargetActor->Name = Name;


	OnBlendCompleteEvent.RemoveAll(this);

	UsePawnTargetActor = PointTargetActor;


	TargetTransform = UsePawnTargetActor->GetActorTransform();
	OrignPawn->SetActorTransform(TargetTransform);

	if (UsePawnTargetActor)
	{
		UsePawnTargetActor->OnControlPreGet();
	}


	OnSwitchComplete();

	InBlendView = true;
	BlendViewTime = MaxBlendViewTime = 0;

}


void ARealtyPlayerController::PossessNextPointTransient(
	class APointTargetActor* PawnTargetActor)
{

	if (PawnTargetActor == nullptr)
	{
		return;
	}

	APawn* OrignPawn = GetPawn();

	BlendTransform = OrignPawn->GetActorTransform();

	PawnTargetActor->IsTransient = true;
	PawnTargetActor->TargetSequenceSoftPath = "None";;

	OnBlendCompleteEvent.RemoveAll(this);
	OnBlendCompleteEvent.AddUObject(this, &ARealtyPlayerController::OnBlendViewComplete, PawnTargetActor, false);

	OrignPawn->DisableInput(this);

	InBlendView = true;

	BlendViewTime = 0.0f;
	MaxBlendViewTime = 0.8f;

	if (UsePawnTargetActor)
	{
		if (UsePawnTargetActor->IsTransient)
		{
			UsePawnTargetActor->Destroy();
		}
		UsePawnTargetActor = nullptr;
	}

	UsePawnTargetActor = PawnTargetActor;


	TargetTransform = UsePawnTargetActor->GetActorTransform();


	if (UsePawnTargetActor)
	{
		UsePawnTargetActor->OnControlPreGet();
	}


	InSwitchProcess = true;

}

void ARealtyPlayerController::ClearPoint()
{
	//stop pre sequences
	APawn* OrignPawn = GetPawn();
	if (UsePawnTargetActor != nullptr)
	{
		if (UsePawnTargetActor->PawnSequence)
		{
			BlendTransform = OrignPawn->GetActorTransform();
			UsePawnTargetActor->PawnSequence->SequencePlayer->OnFinished.RemoveAll(this);
			UsePawnTargetActor->PawnSequence->SequencePlayer->Stop();
			OrignPawn->SetActorTransform(BlendTransform);
		}
		UsePawnTargetActor->OnControlLost();

		if (UsePawnTargetActor->IsTransient)
		{
			UsePawnTargetActor->Destroy();
		}
		UsePawnTargetActor = nullptr;
		
	}
	
	OrignPawn->EnableInput(this);

	OnBlendCompleteEvent.RemoveAll(this);
	InSwitchProcess = false;
}

void ARealtyPlayerController::ProcessNextPointSimple(const FString& Name, const FString& TargetActorTag, float BlendSpeed, bool bRemainSequenceState)
{
	
	APointTargetActor* PointTargetActor = nullptr;
	TArray<AActor*> OutActors;
	UGameplayStatics::GetAllActorsWithTag(GetWorld(), *TargetActorTag, OutActors);
	if (OutActors.Num() > 0)
	{
		PointTargetActor = Cast<APointTargetActor>(OutActors[0]);
	}

	if (PointTargetActor == nullptr /*|| (UsePawnTargetActor && UsePawnTargetActor == PointTargetActor)*/)
	{
		return;
	}

	//
	// NoHoldTransform &= TargetSequenceSoftPath.Equals("None");
	// NoTransfer &= (!NoHoldTransform && TargetSequenceSoftPath.Equals("None"));

	APawn* OrignPawn = GetPawn();

	BlendTransform = OrignPawn->GetActorTransform();

	//stop pre sequences
	if (UsePawnTargetActor != nullptr)
	{
		if (UsePawnTargetActor->PawnSequence && !bRemainSequenceState)
		{
			UsePawnTargetActor->PawnSequence->SequencePlayer->OnFinished.RemoveAll(this);
			UsePawnTargetActor->PawnSequence->SequencePlayer->Stop();
		}
		UsePawnTargetActor->OnControlLost();
	}


	PointTargetActor->IsTransient = false;
	PointTargetActor->Name = Name;
	// PointTargetActor->TargetSequenceSoftPath = TargetSequenceSoftPath;
	// if (true)
	// {
	// 	FTransform TF = PointTargetActor->GetActorTransform();
	// 	AddCacheMap(Name, TF, true);
	// }

	OnBlendCompleteEvent.RemoveAll(this);
	OnBlendCompleteEvent.AddUObject(this, &ARealtyPlayerController::OnBlendViewComplete, PointTargetActor, true);

	OrignPawn->DisableInput(this);

	// if (true)
	// {
		InBlendView = true;

	// }
	BlendViewTime = 0.0f;
	MaxBlendViewTime = BlendSpeed;

	// if (UsePawnTargetActor)
	// {
	// 	if (UsePawnTargetActor->IsTransient)
	// 	{
	// 		UsePawnTargetActor->Destroy();
	// 	}
	// 	UsePawnTargetActor = nullptr;
	// }

	UsePawnTargetActor = PointTargetActor;

	
	TargetTransform = UsePawnTargetActor->GetActorTransform();
	

	if (UsePawnTargetActor)
	{
		UsePawnTargetActor->OnControlPreGet();
	}


	InSwitchProcess = true;
}

void ARealtyPlayerController::StopSequence()
{
	if (UsePawnTargetActor->PawnSequence)
	{
		UsePawnTargetActor->PawnSequence->SequencePlayer->OnFinished.RemoveAll(this);
		UsePawnTargetActor->PawnSequence->SequencePlayer->Stop();
	}
}

void ARealtyPlayerController::OnBlendViewComplete(class APointTargetActor* PointTargetActor, bool NoHoldTransform)
{
	OnBlendCompleteEvent.RemoveAll(this);

	//Sequences
	if (PointTargetActor->PawnSequence && !NoHoldTransform)
	{
		ALevelSequenceActor* EnterSequence = PointTargetActor->PawnSequence;
		UMovieSceneSequencePlayer* MSSPlayer = EnterSequence->SequencePlayer;
		if (EnterSequence != nullptr && MSSPlayer != nullptr)
		{
			FScriptDelegate d;
			d.BindUFunction(this, TEXT("OnSwitchComplete"));
			MSSPlayer->OnFinished.Add(d);
			MSSPlayer->Play();

		}
		else
		{
			OnSwitchComplete();
		}
	}
	else
	{
		OnSwitchComplete();
	}

	//Widgets
	if(PointTargetActor->RelatedWidget.IsValid())
	{
		PointTargetActor->RelatedWidget->PostProcess();
	}
}

void ARealtyPlayerController::OnSwitchComplete()
{
	if (UsePawnTargetActor)
	{
		UsePawnTargetActor->OnControlGet();

		ALevelSequenceActor* EnterSequence = UsePawnTargetActor->PawnSequence;
		if (EnterSequence)
		{
			UMovieSceneSequencePlayer* MSSPlayer = EnterSequence->SequencePlayer;
			MSSPlayer->OnFinished.RemoveAll(this);
		}
	}
	OnBlendViewCompleteDelegate.Broadcast();
	APawn* OrignPawn = GetPawn();

	OrignPawn->EnableInput(this);

	InSwitchProcess = false;
}

void ARealtyPlayerController::AddCacheMap(const FString& Name, const FTransform& tf, bool OnlyAdd)
{

	FTransform *f = CacheMap.Find(Name);
	if (f)
	{
		if(!OnlyAdd)
			*f = tf;
	}
	else
	{
		CacheMap.Add(Name, tf);
	}
}

FTransform ARealtyPlayerController::GetCacheTransform(const FString& Name)
{
	FTransform* f = CacheMap.Find(Name);
	if (f)
	{
		return *f;
	}

	return FTransform();
}
