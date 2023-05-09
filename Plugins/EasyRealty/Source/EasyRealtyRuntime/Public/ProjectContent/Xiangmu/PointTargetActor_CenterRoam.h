// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/PointTargetActor.h"
#include "PointTargetActor_CenterRoam.generated.h"

/**
 * 
 */
UCLASS()
class EASYREALTYRUNTIME_API APointTargetActor_CenterRoam : public APointTargetActor
{
	GENERATED_BODY()
	
public:

	APointTargetActor_CenterRoam();

	virtual void BeginPlay() override;

	virtual void OnControlLost() override;
	virtual void OnControlGet() override;


	virtual void Tick(float DeltaTime) override;


	virtual void OnLeftMouseButton_Pressed();
	virtual void OnLeftMouseButton_Released();


	UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<class UCenterRoamComponent> CenterRoamComponent;
 
};
