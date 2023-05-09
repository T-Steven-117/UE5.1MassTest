// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/PointTargetActor.h"
#include "PointTargetActor_BuildingSystem.generated.h"


enum class EStepType
{
	EST_Normal,
	EST_Select,
	EST_SelectOver,
	EST_Scenery,
	EST_SceneryOver
};

/**
 * 
 */
UCLASS()
class EASYREALTYRUNTIME_API APointTargetActor_BuildingSystem : public APointTargetActor
{
	GENERATED_BODY()

public:

	APointTargetActor_BuildingSystem();


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	virtual void Tick(float DeltaTime) override;


public:

	virtual void OnControlLost() override;
	virtual void OnControlGet() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<class UCenterRoamComponent> CenterRoamComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) class UStaticMeshComponent* BoundboxMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<class ABuildingActor*> BuildingActorRefs;


public:

	virtual void OnLeftMouseButton_Pressed() override;
	virtual void OnLeftMouseButton_Released() override;


	virtual void OnForward(float Scale) override;
	virtual void OnRight(float Scale) override;
	virtual void OnTurn(float Scale) override;
	virtual void OnLookup(float Scale) override;

public:

	void OnSelectBuilding(int32 index);

	void OnSelectFloor(int32 buildindex,int32 floorindex);

	void OnShowScenery();

private:

	void TransferTagetPoint();
	FVector OrginLocation;
	FRotator OrginRotation;
	bool InMoving;
	float MovingTime;
	const float MaxMovingTime = 0.4f;
	bool InUse;
	

	void EnterStep(int32 s);

	FVector TargetLocation;
	FRotator TargetRotation;

	FVector BoundCenter;
	FVector BoundExtent;
	FRotator BoundRotation;


	int32 SelectionBuildingIndex;
	int32 SelectionFloorIndex;


	EStepType StepType;
	
	void EnableMoving(bool e);


	UPROPERTY(Transient) TObjectPtr<class ARealtyPawn> CachePawn;
	UPROPERTY(Transient) TObjectPtr<class APlayerController> pc;
};
