// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Kismet/KismetSystemLibrary.h"
#include "CacheInstanceSubsystem.generated.h"

class UUserTopPageViewModelBase;
class UStrategyPageViewModel;
class FTickableGameObject;
/**
 *
 */
UCLASS(Abstract, Blueprintable, hidedropdown, DisplayName = "Cache")
class PROJECTSUBSYSTEM_API UCacheInstanceSubsystem : public UGameInstanceSubsystem, public FTickableGameObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cache|View")
		TObjectPtr<UStrategyPageViewModel> CacheStrategyPage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Cache|View")
		TObjectPtr<UUserTopPageViewModelBase> CacheUserTopPage;
private:
	/** SubSystemInterface */
	virtual void Initialize(FSubsystemCollectionBase& Collection)override;

	virtual void Deinitialize() override;
	/** SubSystemInterface */
public:
	UFUNCTION(BlueprintImplementableEvent, Category = "GameInstance|CacheInstance ")
		void OnExcuteBeginPlay();
	UFUNCTION(BlueprintImplementableEvent, Category = "GameInstance|CacheInstance ")
		void OnExcuteDestruct();
	UFUNCTION(BlueprintImplementableEvent, Category = "GameInstance|CacheInstance ")
		void BP_Tick(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "GameInstance|CacheInstance ")
		void SpawnMApActor(TSubclassOf<AActor>staticclass, FTransform ts,AActor*& MapActorRef);
protected:
	/*TickableGameObjectInterface*/
	virtual bool IsTickableInEditor() const override { return false; }

	virtual void Tick(float DeltaTime) override { if (!IsUnreachable())BP_Tick(DeltaTime); }

	virtual bool IsTickable() const override { return true; }

	virtual TStatId GetStatId() const override { return TStatId(); }
	/*TickableGameObjectInterface*/
};
