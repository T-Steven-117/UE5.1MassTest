// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/PointTargetActor.h"
#include "RoundPointTargetActor.generated.h"

/**
 * 
 */
UCLASS()
class EASYREALTYRUNTIME_API ARoundPointTargetActor : public APointTargetActor
{
	GENERATED_BODY()

public:

	ARoundPointTargetActor();

	virtual void OnControlLost() override;
	virtual void OnControlGet() override;

	virtual void OnRightMouseButton_Pressed() override;
	virtual void OnRightMouseButton_Released() override;

public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<class URoundSelfRoamComponent> RoamComponent;
};
