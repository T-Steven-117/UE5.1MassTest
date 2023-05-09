// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Simple360Widget.generated.h"

/**
 * 
 */
UCLASS()
class EASYREALTYRUNTIME_API USimple360Widget : public UUserWidget
{
	GENERATED_BODY()
	
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere) class ASimple360SkyActor* Simple360SkyActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) class UDataTable *Simple360DataAsset;

};
