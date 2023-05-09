// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "RoundSelfRoamComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class EASYREALTYRUNTIME_API URoundSelfRoamComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URoundSelfRoamComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	virtual void Init(class AActor* PawnActor);
	void OnLeftMouseButton_Pressed();
	void OnLeftMouseButton_Released();
	void OnMouseMove();

	UPROPERTY() TObjectPtr<class AActor> UsePawnActor;

	//360function
	void InitComp();
	void OnRotationStart(FVector2D v);
	void OnRotationEnd();
	void OnRotationUpdate(FVector2D v);
	void StartAutoRotation(float DeltaTime);
	void EndAutoRotation();
	bool Dir;
	FVector2D Cache_TargetMouseLocation;
private:

	bool LeftMouseButtonDown;
	FVector2D CacheMouseLocation;
	FVector2D TargetMouseLocation;
	FRotator CachePawnRotation;

	FRotator TargetPawnRotation;

	FVector2D GetMouseLocation();

};
