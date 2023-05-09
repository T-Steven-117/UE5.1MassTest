// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Component/RoamComponent.h"
#include "Runtime/PointTargetActor.h"
#include "PointTarget_Niaokan.generated.h"

/**
 * 
 */



UCLASS()
class EASYREALTYRUNTIME_API APointTarget_Niaokan : public APointTargetActor
{
	GENERATED_BODY()

public:

	APointTarget_Niaokan();

	virtual void OnControlLost() override;
	virtual void OnControlGet() override;

	virtual void OnLeftMouseButton_Pressed() override;
	virtual void OnLeftMouseButton_Released() override;
	virtual void OnRightMouseButton_Pressed() override;
	virtual void OnRightMouseButton_Released() override;
	virtual void OnWheelChanged(float Value) override;

	virtual void CreateDefaultRoamComponent();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<URoamComponent> RoamComponentClass = URoamComponent::StaticClass();
public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<class URoamComponent> RoamComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bNoMoving = false;
	
};
