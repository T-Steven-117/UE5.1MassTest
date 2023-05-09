// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UMG/RealtyUserWidgetBase.h"
#include "RealtyUserWidget_BuildSystem.generated.h"

/**
 * 
 */
UCLASS()
class EASYREALTYRUNTIME_API URealtyUserWidget_BuildSystem : public URealtyUserWidgetBase
{
	GENERATED_BODY()
	
public:


	UFUNCTION(BlueprintCallable) void OnSwitchBuild(int32 index);

	UFUNCTION(BlueprintCallable) void OnSwitchFloor(int32 buildindex,int32 floorindex);

	UFUNCTION(BlueprintCallable) void OnShowScenery();

	UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PreBuildIndex = -1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 PreFloorIndex = -1;

	DECLARE_DELEGATE_OneParam(FOnSwitchBuildingDelegate, int32);
	mutable FOnSwitchBuildingDelegate	OnSwitchBuildingEvent;

	DECLARE_DELEGATE_TwoParams(FOnSwitchFloorDelegate, int32,int32);
	mutable FOnSwitchFloorDelegate	OnSwitchFloorEvent;

	DECLARE_DELEGATE(FOnShowScenery);
	mutable FOnShowScenery	OnShowSceneryEvent;

};
