// Fill out your copyright notice in the Description page of Project Settings.


#include "ProjectContent/Xiangmu/PointTargetActor_BuildingSystem.h"
#include <UObject/ConstructorHelpers.h>
#include <Components/SceneComponent.h>
#include <Components/StaticMeshComponent.h>
#include <Kismet/GameplayStatics.h>
#include <Kismet/KismetMathLibrary.h>
#include "ProjectContent/Xiangmu/BuildingActor.h"
#include "ProjectContent/Xiangmu/RealtyUserWidget_BuildSystem.h"
#include "Runtime/RealtyPlayerController.h"
#include "Component/CenterRoamComponent.h"
#include "../../../Public/Runtime/RealtyPawn.h"

APointTargetActor_BuildingSystem::APointTargetActor_BuildingSystem()
{
	ConstructorHelpers::FObjectFinder<UStaticMesh> BoundboxMeshObject(TEXT("StaticMesh'/EasyRealty/Building/Mesh_FS_Boundbox.Mesh_FS_Boundbox'"));

	BoundboxMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BoundboxMeshComponent"));
	BoundboxMeshComponent->SetupAttachment(RootComponent);
	if (BoundboxMeshObject.Succeeded())
	{
		BoundboxMeshComponent->SetStaticMesh(BoundboxMeshObject.Object);
	}
	BoundboxMeshComponent->SetHiddenInGame(true);

	CenterRoamComponent = CreateDefaultSubobject<UCenterRoamComponent>(TEXT("CenterRoamComponent"));
	CenterRoamComponent->SetupAttachment(RootComponent);

}


void APointTargetActor_BuildingSystem::BeginPlay()
{
	Super::BeginPlay();
	InUse = false;
	StepType = EStepType::EST_Normal;

	pc = UGameplayStatics::GetPlayerController(GetWorld(), 0);
	CachePawn = Cast<ARealtyPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}


void APointTargetActor_BuildingSystem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!InUse /*|| BuildingStep == EBuildingStep::EBS_Wait*/)
	{
		return;
	}


	switch (StepType)
	{
	case EStepType::EST_Normal:
	{

	}
	break;
	case EStepType::EST_Select:
	{
		if (InMoving)
		{
			APawn* pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

			float a = MovingTime / MaxMovingTime;
			if (a > 1.0f)
			{
				a = 1.0f;
				InMoving = false;
				CenterRoamComponent->OnControlGet(pawn->GetActorLocation(), pawn->GetActorRotation());
				StepType = EStepType::EST_SelectOver;
			}
			MovingTime += DeltaTime;

			FVector L = UKismetMathLibrary::VLerp(OrginLocation, TargetLocation, a);
			FRotator R = UKismetMathLibrary::RLerp(OrginRotation, TargetRotation, a, true);


			pawn->SetActorLocationAndRotation(L, R);
		}
	}
	break;
	case EStepType::EST_SelectOver:
	{

	}
	break;
	case EStepType::EST_Scenery:
	{
		if (InMoving)
		{
			APawn* pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);

			float a = MovingTime / MaxMovingTime;
			if (a > 1.0f)
			{
				a = 1.0f;
				InMoving = false;
				StepType = EStepType::EST_SceneryOver;

				EnableMoving(true);

			}
			MovingTime += DeltaTime;

			FVector L = UKismetMathLibrary::VLerp(OrginLocation, TargetLocation, a);
			FRotator R = UKismetMathLibrary::RLerp(OrginRotation, TargetRotation, a, true);


			pawn->SetActorLocationAndRotation(L, R);
		}
	}
	break;
	case EStepType::EST_SceneryOver:
	{

	}
	break;
	}

}



void APointTargetActor_BuildingSystem::OnControlLost()
{
	Super::OnControlLost();

	BoundboxMeshComponent->SetHiddenInGame(true);

	InUse = false;
	InMoving = false;
	StepType = EStepType::EST_Normal;
	CenterRoamComponent->OnControlLost();
	EnableMoving(false);

	SelectionBuildingIndex = 0;
	SelectionFloorIndex = 0;
	BoundboxMeshComponent->SetHiddenInGame(true);

}


void APointTargetActor_BuildingSystem::OnControlGet()
{
	Super::OnControlGet();

	BoundboxMeshComponent->SetHiddenInGame(true);

	InUse = true;
	InMoving = false;
	StepType = EStepType::EST_Normal;
	EnableMoving(false);

	SelectionBuildingIndex = 0;

	APawn* pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	TargetLocation = pawn->GetActorLocation();
	TargetRotation = pawn->GetActorRotation();


	URealtyUserWidget_BuildSystem* RealUI = Cast<URealtyUserWidget_BuildSystem>(GetTopUIPtr());
	int32 PreBuildIndex = 0;

	if (RealUI)
	{
		RealUI->OnSwitchBuildingEvent.BindLambda([this](int32 index)
			{
				OnSelectBuilding(index);
			});

		RealUI->OnSwitchFloorEvent.BindLambda([this](int32 buildindex,int32 floorindex)
			{
				OnSelectFloor(buildindex, floorindex);
			});

		RealUI->OnShowSceneryEvent.BindLambda([this]()
			{
				OnShowScenery();
			});

		RealUI->PreBuildIndex = RealUI->PreBuildIndex = -1;
	}



	//OnSelectBuilding(PreBuildIndex);

}


void APointTargetActor_BuildingSystem::OnLeftMouseButton_Pressed()
{
	switch (StepType)
	{
	case EStepType::EST_SelectOver:
	{
		CenterRoamComponent->OnLeftMouseButton_Pressed();
	}
	break;
	case EStepType::EST_SceneryOver:
	{
		CachePawn->AddMovementInput(CachePawn->GetActorForwardVector(), 50);
	}
	break;
	}

}

void APointTargetActor_BuildingSystem::OnLeftMouseButton_Released()
{

	switch (StepType)
	{
	case EStepType::EST_SelectOver:
	{
		CenterRoamComponent->OnLeftMouseButton_Released();
	}
	break;
	case EStepType::EST_SceneryOver:
	{
		
	}
	break;
	}

}

void APointTargetActor_BuildingSystem::OnSelectBuilding(int32 index)
{
	BoundboxMeshComponent->SetHiddenInGame(false);

	SelectionBuildingIndex = index;

	ABuildingActor* BuildingActor = BuildingActorRefs[SelectionBuildingIndex];

	{
		FVector Boxmin, Boxmax;
		BuildingActor->Mesh->GetLocalBounds(Boxmin, Boxmax);
		FVector v = Boxmax - Boxmin;
		BoundExtent = v * 0.5f;
		FTransform tf = BuildingActor->Mesh->GetComponentTransform();
		BoundCenter = tf.TransformPosition(BoundExtent + Boxmin);
		BoundRotation = tf.GetRotation().Rotator();

		BoundboxMeshComponent->SetWorldLocation(BoundCenter);
		BoundboxMeshComponent->SetWorldRotation(BoundRotation);
		BoundboxMeshComponent->SetWorldScale3D(BoundExtent * 0.021f * BuildingActor->GetActorScale());//0.02[Mesh inv Scale] + 0.001[offset]
	}
	TransferTagetPoint();

	EnableMoving(false);
}


void APointTargetActor_BuildingSystem::OnSelectFloor(int32 buildindex, int32 floorindex)
{
	BoundboxMeshComponent->SetHiddenInGame(false);

	OnSelectBuilding(buildindex); 
	SelectionFloorIndex = floorindex;

	ABuildingActor* BuildingActor = BuildingActorRefs[SelectionBuildingIndex];

	{
		FVector Boxmin, Boxmax;
		UFloorBoundboxComponent* FloorComp = BuildingActor->Floors[SelectionFloorIndex];

		BoundExtent = FloorComp->BoxExtent;
		FTransform tf = FloorComp->GetComponentTransform();
		BoundCenter = tf.GetLocation();
		BoundRotation = tf.GetRotation().Rotator();

		BoundboxMeshComponent->SetWorldLocation(BoundCenter);
		BoundboxMeshComponent->SetWorldRotation(BoundRotation);
		BoundboxMeshComponent->SetWorldScale3D(BoundExtent * 0.021f * BuildingActor->GetActorScale());//0.02[Mesh inv Scale] + 0.001[offset]


	}

	TransferTagetPoint();

	EnableMoving(false);
}

void APointTargetActor_BuildingSystem::OnShowScenery()
{
	ABuildingActor* BuildingActor = BuildingActorRefs[SelectionBuildingIndex];
	if (!BuildingActor->CanScenery  || StepType == EStepType::EST_Scenery || StepType == EStepType::EST_SceneryOver)
	{
		return;
	}
	BoundboxMeshComponent->SetHiddenInGame(true);

	CenterRoamComponent->OnControlLost();
	MovingTime = 0;
	InMoving = true;

	APawn* pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	OrginLocation = pawn->GetActorLocation();
	OrginRotation = pawn->GetActorRotation();

	StepType = EStepType::EST_Scenery;


	FTransform tf = BuildingActor->SceneryPoint->GetComponentToWorld();
	FVector loc = tf.GetLocation();
	UFloorBoundboxComponent* FloorComp = BuildingActor->Floors[SelectionFloorIndex];

	loc.Z = FloorComp->K2_GetComponentLocation().Z;


	TargetLocation = loc;
	TargetRotation = tf.GetRotation().Rotator();


}

void APointTargetActor_BuildingSystem::TransferTagetPoint()
{
	InMoving = true;
	MovingTime = 0;
	APawn* pawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	OrginLocation = pawn->GetActorLocation();
	OrginRotation = pawn->GetActorRotation();

	ABuildingActor* BuildingActor = BuildingActorRefs[SelectionBuildingIndex];
	const FTransform& tf = BuildingActor->LookPoint->GetComponentToWorld();
	TargetLocation = tf.GetLocation();
	TargetRotation = tf.GetRotation().Rotator();

	CenterRoamComponent->OnControlLost();

	StepType = EStepType::EST_Select;
}

void APointTargetActor_BuildingSystem::EnableMoving(bool e)
{
	if (e)
	{
		pc->bShowMouseCursor = true;

		CachePawn->EnablePawn(true, TargetRotation);

		//UGameplayStatics::GetPlayerController(GetWorld(), 0)->SetInputMode(FInputModeGameAndUI());

	}
	else
	{

		pc->bShowMouseCursor = true;

		CachePawn->EnablePawn(false);
	}
}




void APointTargetActor_BuildingSystem::OnForward(float Scale)
{
	/*if (pc->bShowMouseCursor)
	{
		return;
	}*/
	if (Scale != 0.0f)
	{
		CachePawn->AddMovementInput(CachePawn->GetActorForwardVector(), Scale);
	}
}

void APointTargetActor_BuildingSystem::OnRight(float Scale)
{
	/*if (pc->bShowMouseCursor)
	{
		return;
	}*/
	if (Scale != 0.0f)
	{
		CachePawn->AddMovementInput(CachePawn->GetActorRightVector(), Scale);
	}
}

void APointTargetActor_BuildingSystem::OnTurn(float Scale)
{
	/*if (pc->bShowMouseCursor)
	{
		return;
	}*/
	CachePawn->AddControllerYawInput(Scale * 3.0f);
}

void APointTargetActor_BuildingSystem::OnLookup(float Scale)
{
	/*if (pc->bShowMouseCursor)
	{
		return;
	}*/
	CachePawn->AddControllerPitchInput(Scale * 3.0f);
}
