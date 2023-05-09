// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RealtyFunctionLibrary.generated.h"

/**
 * 
 */

UCLASS()
class EASYREALTYRUNTIME_API URealtyFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void ReStart(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void Start(const UObject* WorldContextObject);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void GoNode(const UObject* WorldContextObject, const FString &Name, bool ForceRefreshWidget = false);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void GoBackNode(const UObject* WorldContextObject, bool ForceRefreshWidget);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void GoNodeFast(const UObject* WorldContextObject, const FString& Name, bool ForceRefreshWidget = false);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void GoNodeSimple(const UObject* WorldContextObject, const FString& Name, float SpeedTime,bool bRemainSequenceState = false);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void RealtyLoadMap(const UObject* WorldContextObject, const FString& url);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void SetSkyLightAngle(const UObject* WorldContextObject, class USkyLightComponent* SkyLightComp, const float& angle);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void SetAtmosphereSunDiskColorScale(const UObject* WorldContextObject, class UDirectionalLightComponent* DirectionalLightComponent, const FLinearColor& color);

	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static void LoadMainMap(const UObject* WorldContextObject,const FString &URL);
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject"))
		static bool IsInSeamlessTravel(const UObject* WorldContextObject);


	static UWorld* CreateTempWorld();
	static void DestroyWorld(UWorld*& w);

	static class UTextureRenderTarget2D* CreateRenderTarget2D(int32 width, int32 height);
	static void DestroyRenderTarget2D(class UTextureRenderTarget2D*& RT);

};
