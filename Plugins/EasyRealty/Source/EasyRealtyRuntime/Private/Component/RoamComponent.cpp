// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/RoamComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Runtime/RealtyPlayerController.h"
#include <UObject/ConstructorHelpers.h>
#include <Curves/CurveFloat.h>
#include "Runtime/RealtyFunctionLibrary.h"
#include "Runtime/PointTargetActor.h"
#include "Runtime/RealtyRuntimeActor.h"
//#include "../../../../Project_LBS/Source/Project_LBS/Public/CacheInstance.h"
#include <Kismet/KismetMathLibrary.h>


ARoamActor::ARoamActor()
{
	PrimaryActorTick.bCanEverTick = true;


	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

	SpringArmComp = CreateDefaultSubobject<UYWSpringArmComponent>(TEXT("SpringArmComp"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->bDoCollisionTest = false;
	SpringArmComp->CameraLagSpeed = 5;
	SpringArmComp->CameraRotationLagSpeed = 5;

}


void ARoamActor::BeginPlay()
{
	Super::BeginPlay();

}

void ARoamActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);




}




// Sets default values for this component's properties
URoamComponent::URoamComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;


	static ConstructorHelpers::FObjectFinder<UCurveFloat> MoveCurveObj(TEXT("CurveFloat'/EasyRealty/Core/MoveCurve.MoveCurve'"));
	if (MoveCurveObj.Succeeded())
	{
		MoveCurve = MoveCurveObj.Object;
	}

	static ConstructorHelpers::FObjectFinder<UCurveFloat> ScaleCurveObj(TEXT("CurveFloat'/EasyRealty/Core/ScaleCurve.ScaleCurve'"));
	if (ScaleCurveObj.Succeeded())
	{
		ScaleCurve = ScaleCurveObj.Object;
	}
	// ...
	Init(nullptr);
}
URoamComponent::~URoamComponent()
{
}


// Called when the game starts
void URoamComponent::BeginPlay()
{
	Super::BeginPlay();

	LeftDown = false;
	RightDown = false;

	// ...
	CachePC = Cast<ARealtyPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
	//OrginLocation = GetOwner()->GetActorLocation();

	DesiredArmLength = 0;

	RealtyActorRef = Cast<ARealtyRuntimeActor>(UGameplayStatics::GetActorOfClass(GetWorld(), ARealtyRuntimeActor::StaticClass()));


}




// Called every frame
void URoamComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
	ControlTick(DeltaTime);
	CursorTick(DeltaTime);



	//if (UsePawnActor)
	//{
	//	UsePawnActor->SetActorLocation(RA->SpringArmComp->GetUnfixedCameraPosition());
	//	UsePawnActor->SetActorRotation(RA->SpringArmComp->GetTargetRotation().Quaternion());
	//}


}


void URoamComponent::Init(class AActor* PawnActor)
{
	UsePawnActor = PawnActor;

	MoveFactor = 1.0f;
	ScaleFactor = 1.0f;
	clear_rightdoubleclick_state();
	if (UsePawnActor)
	{

		FActorSpawnParameters asp;
		asp.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
		RA = GetWorld()->SpawnActor<ARoamActor>(ARoamActor::StaticClass(), asp);

		OrginLocation = UsePawnActor->GetActorLocation();

		FVector p = URoamComponent::GetFocusPoint();

		RA->SpringArmComp->TargetArmLength = DesiredArmLength = (p - OrginLocation).Size();

		FTransform tf;
		tf.SetLocation(p);
		FRotator r = UKismetMathLibrary::FindLookAtRotation(OrginLocation, p);
		tf.SetRotation(r.Quaternion());
		RA->SetActorTransform(tf);

		RA->SpringArmComp->bEnableCameraRotationLag = false;
		RA->SpringArmComp->bEnableCameraLag = false;
		RA->SpringArmComp->OnUpdate();

		UsePawnActor->AttachToComponent(RA->SpringArmComp, FAttachmentTransformRules::KeepWorldTransform);

		RA->SpringArmComp->bEnableCameraRotationLag = true;
		RA->SpringArmComp->bEnableCameraLag = true;


		MoveFactor = 1.0f;




	}
	else
	{
		if (RA)
		{
			CachePC->GetPawn()->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
			if (RA)
				RA->Destroy();
			RA = nullptr;

		}


	}


}


FVector2D URoamComponent::GetMouseLocation()
{

	FVector2D f;

	APlayerController* pc = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	pc->GetMousePosition(f.X, f.Y);

	return f;
}


void URoamComponent::ControlTick(float DeltaTime)
{
	if (!UsePawnActor)
		return;
	float tempfactor = 0.5f;
	if (RightDown || LeftDown)
	{
		MoveFactor = 1.0f;
		if (MoveCurve)
		{
			MoveFactor = MoveCurve->GetFloatValue(UsePawnActor->GetActorLocation().Z - RA->GetActorLocation().Z);
		}
	}
	if (right_doubleclick_time > 0.0f)
		right_doubleclick_time -= DeltaTime;
	if (right_doubleclick_sure && right_doubleclick_sure_time > 0.0f)
		right_doubleclick_sure_time -= DeltaTime;

	if (RightDown)
	{


		MoveFactor = FMath::Clamp<float>(MoveFactor, tempfactor, 1);
		FVector2D DirNext = (TargetMouseLocation - CacheMouseLocation) * RotationSpeed * MoveFactor;
		if (DirNext.Length() > 2.0f)
		{
			clear_rightdoubleclick_state();
		}

		FRotator R = RA->GetActorRotation();
		R.Yaw += DirNext.X;
		R.Pitch -= DirNext.Y;
		R.Pitch = FMath::Clamp<float>(R.Pitch, RotationClamp.X, RotationClamp.Y);

		RA->SetActorRotation(R);

		CacheMouseLocation = TargetMouseLocation;
	}
	else if (LeftDown)
	{
		FVector2D DirNext = (TargetMouseLocation - CacheMouseLocation) * MoveSpeed * MoveFactor;
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::SanitizeFloat(MoveFactor));
		FVector RightVec = UsePawnActor->GetActorRightVector();
		RightVec.Z = 0.0f;
		RightVec.Normalize();

		FVector ForwardVec = UsePawnActor->GetActorForwardVector();
		ForwardVec.Z = 0.0f;
		ForwardVec.Normalize();

		FVector Offset = (ForwardVec * DirNext.Y) - (RightVec * DirNext.X);


		FVector CorrLocation = CachePawnLocation + Offset;
		FVector C = FVector(BoundCenter.X, BoundCenter.Y, CorrLocation.Z);
		FVector Dir = (CorrLocation - C).GetSafeNormal();
		float dis = (CorrLocation - C).Size();
		if (dis > ExtentBound.X)
		{
			dis = ExtentBound.X;
		}
		CorrLocation = Dir * dis + C;

		RA->SetActorLocation(CorrLocation);
	}


	//DesiredArmLength
	RA->SpringArmComp->TargetArmLength = UKismetMathLibrary::FInterpTo(RA->SpringArmComp->TargetArmLength, DesiredArmLength, DeltaTime, 2);

	OnMouseMove();

}

void URoamComponent::CursorTick(float DeltaTime)
{
	if (!UsePawnActor)
		return;

}

void URoamComponent::clear_rightdoubleclick_state()
{
	right_doubleclick_time = -1;
	right_doubleclick_sure = false;
	right_doubleclick_sure_time = -1;
}

void URoamComponent::OnLeftMouseButton_Pressed()
{
	clear_rightdoubleclick_state();

	if (RightDown || !UsePawnActor || !RA)
	{
		return;
	}


	LeftDown = true;
	CacheMouseLocation = TargetMouseLocation = GetMouseLocation();

	CachePawnLocation = RA->GetActorLocation();

}

void URoamComponent::OnLeftMouseButton_Released()
{
	LeftDown = false;
}

void URoamComponent::OnRightMouseButton_Pressed()
{
	if (LeftDown)
	{
		LeftDown = false;
	}

	if (!UsePawnActor || !RA)
	{
		return;
	}

	RightDown = true;


	CacheMouseLocation = TargetMouseLocation = GetMouseLocation();

	/*if (right_doubleclick_time > 0)
	{
		ARealtyPlayerController* RealtyPlayerController = Cast<ARealtyPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
		TArray<AActor*> OutActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARealtyRuntimeActor::StaticClass(), OutActors);
		if (OutActors.Num() > 0)
		{
			ARealtyRuntimeActor* RealtyRuntimeActor = Cast<ARealtyRuntimeActor>(OutActors[0]);
			GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("%s"), *RealtyPlayerController->UsePawnTargetActor->Name));
			if (RealtyPlayerController->UsePawnTargetActor)
			{
				RightDown = false;
				if (RealtyPlayerController->UsePawnTargetActor->Name == "In")
				{
					RealtyRuntimeActor->OnRightPressed.Broadcast(true);
					FString CacheName = RealtyRuntimeActor->UIMappingStack[RealtyRuntimeActor->UIMappingStack.Num() - 1].NodeName;
					URealtyFunctionLibrary::GoNode(GetWorld(), CacheName, true);
				}
				else if (RealtyPlayerController->UsePawnTargetActor->Name == "L" || RealtyPlayerController->UsePawnTargetActor->Name == "R"
					||RealtyPlayerController->UsePawnTargetActor->Name == "1" ||RealtyPlayerController->UsePawnTargetActor->Name == "2")
				{
					RealtyRuntimeActor->OnRightPressed.Broadcast(true);
					FString CacheName = RealtyRuntimeActor->UIMappingStack[RealtyRuntimeActor->UIMappingStack.Num() - 2].NodeName;
					URealtyFunctionLibrary::GoNode(GetWorld(), CacheName, true);
				}
			}
		}
		right_doubleclick_time = 0.0f;
	}
	right_doubleclick_time = Right_double_click_time;*/
	
}



void URoamComponent::OnRightMouseButton_Released()
{
	RightDown = false;


}


void URoamComponent::OnWheelChanged(float Value)
{
	if (RA && !UKismetMathLibrary::NearlyEqual_FloatFloat(Value, 0))
	{
		if (ScaleCurve)
		{
			ScaleFactor = ScaleCurve->GetFloatValue(FMath::Abs(DesiredArmLength));
		}
		float RestrictUint = 1;
		//float UintValue = GetMouseValue(DesiredArmLength);
		//float MouseValue=FMath::Clamp(UintValue,-RestrictUint, RestrictUint);
		//GEngine->AddOnScreenDebugMessage(0, 1.0f, FColor::Red, FString::Printf(TEXT("CurValue=%f,Value=%f"), UintValue, Value));
		DesiredArmLength = FMath::Clamp(DesiredArmLength - Value * ScaleSpeed * ScaleFactor, ScaleMinMaxLength.X, ScaleMinMaxLength.Y);
		RealtyActorRef->ArmLenght = DesiredArmLength;
		
		GEngine->AddOnScreenDebugMessage(-1, 5, FColor::Green, FString::Printf(TEXT("%f"), RealtyActorRef->ArmLenght));
			//ARealtyRuntimeActor* RealtyRuntimeActor = Cast<ARealtyRuntimeActor>(OutActors[0]);

		/*{
			FVector2D DirNext =  * 10 * MoveFactor;
			FVector RightVec = UsePawnActor->GetActorRightVector();
			RightVec.Z = 0.0f;
			RightVec.Normalize();

			FVector ForwardVec = UsePawnActor->GetActorForwardVector();
			ForwardVec.Z = 0.0f;
			ForwardVec.Normalize();

			FVector Offset = (ForwardVec * DirNext.Y) - (RightVec * DirNext.X);


			FVector CorrLocation = CachePawnLocation + Offset;
			FVector C = FVector(BoundCenter.X, BoundCenter.Y, CorrLocation.Z);
			FVector Dir = (CorrLocation - C).GetSafeNormal();
			float dis = (CorrLocation - C).Size();
			if (dis > ExtentBound.X)
			{
				dis = ExtentBound.X;
			}
			CorrLocation = Dir * dis + C;

			RA->SetActorLocation(CorrLocation);
		}*/





	}

}


void URoamComponent::OnMouseMove()
{
	if (LeftDown || RightDown)
		TargetMouseLocation = GetMouseLocation();
}

FVector URoamComponent::GetFocusPoint()
{

	AActor* owner = UsePawnActor;

	if (!owner)
	{
		return FVector::ZeroVector;
	}


	return GetForwardLineTraceHitLocation(owner, ECollisionChannel::ECC_WorldStatic);


}

FVector URoamComponent::GetForwardLineTraceHitLocation(AActor* Source, ECollisionChannel TraceChannel)
{
	FHitResult HitResult;
	FVector Start = Source->GetActorLocation();
	FVector End = Start + Source->GetActorForwardVector() * 999999999.f;
	GWorld->LineTraceSingleByChannel(HitResult, Start, End, TraceChannel);
	if (HitResult.GetActor())
		return HitResult.Location;
	return FVector::ZeroVector;
}
