// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MovingUIWidget.generated.h"

/**
 * 
 */
UCLASS()
class EASYREALTYRUNTIME_API UMovingUIWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintImplementableEvent) void OnInit();

	UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector2D BoundCenter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float BoundHalfX;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) float BoundHalfY;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) class UTexture2D* MinimapTex;
};
