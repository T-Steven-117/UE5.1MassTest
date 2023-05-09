// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <WorldPartition/DataLayer/ActorDataLayer.h>
#include "PointTargetActor.generated.h"

UCLASS()
class EASYREALTYRUNTIME_API APointTargetActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APointTargetActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	class URealtyUserWidgetBase* GetTopUIPtr();


	virtual void OnControlLost();
	virtual void OnControlPreGet();
	virtual void OnControlGet();

	virtual void InitComp() {}

	UPROPERTY(Transient) bool IsTransient = false;

	UPROPERTY(Transient) FString Name;

	UPROPERTY(Transient) FString TargetSequenceSoftPath;

	UPROPERTY(Transient) class ALevelSequenceActor* PawnSequence;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true, ClampMin = 0.0f, ClampMax = 1.0f)) float SequenceRate = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ExposeOnSpawn = true)) struct FActorDataLayer DataLayer;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bForSimpleUsage = false;

	UPROPERTY() TSoftObjectPtr<URealtyUserWidgetBase> RelatedWidget;

	UFUNCTION(BlueprintImplementableEvent)
	void OnPossessThisPoint();
	
	//Input
	virtual void OnLeftMouseButton_Pressed() {}
	virtual void OnLeftMouseButton_Released() {}
	virtual void OnRightMouseButton_Pressed() {}
	virtual void OnRightMouseButton_Released() {}
	virtual void OnWheelChanged(float Value) {}

	virtual void OnForward(float Scale) {}
	virtual void OnRight(float Scale) {}
	virtual void OnTurn(float Scale) {}
	virtual void OnLookup(float Scale) {}

};
