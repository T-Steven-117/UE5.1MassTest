// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "CenterRoamComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EASYREALTYRUNTIME_API UCenterRoamComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UCenterRoamComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	
	void OnControlLost();
	void OnControlGet();
	void OnControlGet(FVector NewFocusLoc,FRotator NewFocusRot);


	void OnLeftMouseButton_Pressed();
	void OnLeftMouseButton_Released();
	void OnMouseMove();


	UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinPlaneZ = 50.0f;
	UPROPERTY() FVector CenterLocation;


private:

	bool LeftMouseButtonDown;
	FVector2D CacheMouseLocation;
	FVector2D TargetMouseLocation;
	FRotator CachePawnRotation;

	FRotator TargetPawnRotation;
	float TargetDistance;

	FVector2D GetMouseLocation();

	bool InUse;
	void CalcPawnTransform(float DT);

	FVector GetFocusPoint();
	FVector GetFocusPoint(FVector NewLoc,FRotator NewRot);

};
