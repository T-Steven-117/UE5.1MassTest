// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectContent/Niaokan/PointTarget_Niaokan.h"
#include "Component/RoamComponent.h"

#include "PointTarget_ZhouCe.generated.h"

/**
 * 
 */

UCLASS()
class EASYREALTYRUNTIME_API URoamComponent_ZhouCe : public URoamComponent
{
	GENERATED_BODY()
	
public:
	URoamComponent_ZhouCe();

	virtual void OnRightMouseButton_Pressed() override;
	// virtual void OnWheelChanged(float Value) override;

	virtual void Init(class AActor* PawnActor) override;

	FVector CenterFocusPoint;

	UFUNCTION(BlueprintCallable)
	void SetCenterPoint(FVector NewCenterLocation);
};

UCLASS()
class EASYREALTYRUNTIME_API APointTarget_ZhouCe : public APointTargetActor
{
	GENERATED_UCLASS_BODY()
	
public:
	// APointTarget_ZhouCe();
	
	virtual void OnControlLost() override;
	virtual void OnControlGet() override;

	virtual void OnRightMouseButton_Pressed();
	virtual void OnRightMouseButton_Released();
	virtual void OnWheelChanged(float Value);

	virtual void CreateDefaultRoamComponent();

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSubclassOf<URoamComponent> RoamComponentClass = URoamComponent::StaticClass();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (MakeEditWidget))
	FTransform CenterPoint;

	virtual void BeginPlay() override;
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<class URoamComponent> RoamComponent;
	
	UPROPERTY() class ARealtyPawn* RealtyPawn;

	UFUNCTION(BlueprintCallable)
	void SetCenterPoint(FVector NewCenterLocation);
};
