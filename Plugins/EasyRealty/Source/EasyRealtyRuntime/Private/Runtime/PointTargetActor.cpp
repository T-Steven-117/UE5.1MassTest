// Fill out your copyright notice in the Description page of Project Settings.


#include "Runtime/PointTargetActor.h"
#include <LevelSequence/Public/LevelSequenceActor.h>
#include <LevelSequence/Public/LevelSequencePlayer.h>
#include <WorldPartition/DataLayer/DataLayerSubsystem.h>
#include "Runtime/RealtyPlayerController.h"
#include <Kismet/GameplayStatics.h>
#include <GameFramework/Pawn.h>
#include "UMG/RealtyUserWidgetBase.h"
#include "Runtime/RealtyRuntimeActor.h"

// Sets default values
APointTargetActor::APointTargetActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

}

// Called when the game starts or when spawned
void APointTargetActor::BeginPlay()
{
	Super::BeginPlay();


}

// Called every frame
void APointTargetActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

class URealtyUserWidgetBase* APointTargetActor::GetTopUIPtr()
{
	TArray<AActor*> OutActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARealtyRuntimeActor::StaticClass(), OutActors);
	if (OutActors.Num() > 0)
	{
		ARealtyRuntimeActor* RRA = Cast<ARealtyRuntimeActor>(OutActors[0]);
		if (RRA)
		{
			return RRA->GetTopUIPtr();
		}
	}

	return nullptr;
}


void APointTargetActor::OnControlLost()
{
	if(!bForSimpleUsage)
	{
		if (PawnSequence)
		{
			PawnSequence->Destroy();
			PawnSequence = nullptr;
		}

		ARealtyPlayerController* pc = Cast<ARealtyPlayerController>(UGameplayStatics::GetPlayerController(GetWorld(), 0));
		APawn* pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
		if (pawn && pc && !pc->InSwitchProcess)
		{
			pc->AddCacheMap(Name,pawn->GetActorTransform());
		}
	}


	//if (UDataLayerSubsystem* DataLayerSubsystem = GetWorld()->GetSubsystem<UDataLayerSubsystem>())
	//{
	//	DataLayerSubsystem->SetDataLayerState(DataLayer,EDataLayerState::Activated);
	//}
}

void APointTargetActor::OnControlPreGet()
{
	if (!bForSimpleUsage)
	{
		if (!TargetSequenceSoftPath.Equals("None") && !TargetSequenceSoftPath.IsEmpty())
		{
			PawnSequence = GetWorld()->SpawnActor<ALevelSequenceActor>();
			FSoftObjectPath sop = TargetSequenceSoftPath;
			PawnSequence->LevelSequenceAsset = Cast<ULevelSequence>(sop.ResolveObject());
			PawnSequence->PlaybackSettings.PlayRate = SequenceRate;
			PawnSequence->PlaybackSettings.bRestoreState = true;
			PawnSequence->PlaybackSettings.bPauseAtEnd = true;
			PawnSequence->SequencePlayer = NewObject<ULevelSequencePlayer>(PawnSequence);
			ULevelSequence *LS = LoadObject<ULevelSequence>(this, *TargetSequenceSoftPath);
			PawnSequence->SequencePlayer->Initialize(LS, PawnSequence->GetLevel(), PawnSequence->PlaybackSettings, PawnSequence->CameraSettings);

		}
	}
	

	//if (UDataLayerSubsystem* DataLayerSubsystem = GetWorld()->GetSubsystem<UDataLayerSubsystem>())
	//{
	//	DataLayerSubsystem->SetDataLayerState(DataLayer, EDataLayerState::Unloaded);
	//}
	
	OnPossessThisPoint();
}

void APointTargetActor::OnControlGet()
{
	
}
