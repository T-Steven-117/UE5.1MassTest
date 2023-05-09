// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Runtime/PointTargetActor.h"
#include "PointTargetActor_PawnMoving.generated.h"

/**
 * 
 */
UCLASS()
class EASYREALTYRUNTIME_API APointTargetActor_PawnMoving : public APointTargetActor
{
	GENERATED_BODY()

public:

	APointTargetActor_PawnMoving();

	virtual void BeginPlay() override;

	virtual void OnControlLost() override;
	virtual void OnControlGet() override;

	void OnLeftMouseButton_Pressed();
	void OnLeftMouseButton_Released();

	virtual void OnForward(float Scale) override;
	virtual void OnRight(float Scale) override;
	virtual void OnTurn(float Scale) override;
	virtual void OnLookup(float Scale) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) class UBoxComponent* MiniMapBound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) class UTexture2D* MinimapTex;
protected:

	UPROPERTY(Transient) TObjectPtr<class ARealtyPawn> CachePawn;
	UPROPERTY(Transient) TObjectPtr<class APlayerController> pc;


	UPROPERTY() TSubclassOf<class UMovingUIWidget> MovingUIClass;
	UPROPERTY() TSubclassOf<class UMovingUIWidget> MovingUIClass2;
	UPROPERTY(Transient) class UMovingUIWidget* MovingUIPtr;

};
