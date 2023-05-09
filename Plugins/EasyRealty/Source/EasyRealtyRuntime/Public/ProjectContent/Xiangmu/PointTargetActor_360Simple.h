// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../Runtime/PointTargetActor.h"
#include <Engine/DataTable.h>
#include "PointTargetActor_360Simple.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct EASYREALTYRUNTIME_API FSimple360Asset : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ThumbnailName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite) class UTexture2D* ThumbnailTexture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)class  UTexture2D* Texture360;

};


UCLASS()
class EASYREALTYRUNTIME_API APointTargetActor_360Simple : public APointTargetActor
{
	GENERATED_BODY()
	
public:

	APointTargetActor_360Simple();

	virtual void BeginPlay() override;

	virtual void OnControlLost() override;
	virtual void OnControlGet() override;

	virtual void InitComp()override;
	virtual void Tick(float DeltaTime) override;


	virtual void OnLeftMouseButton_Pressed();
	virtual void OnLeftMouseButton_Released();

	virtual void OnRotationStart(FVector2D v);
	virtual void OnRotationEnd();
	virtual void OnRotationUpdate(FVector2D v);

	UPROPERTY(EditAnywhere, BlueprintReadWrite) TObjectPtr<class URoundSelfRoamComponent> CenterRoamComponent;
 
	UPROPERTY() TSubclassOf<class USimple360Widget> UIClassPtr;
	UPROPERTY() class ASimple360SkyActor* Simple360SkyActor;
	UPROPERTY() class USimple360Widget* Simple360Widget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)  class UDataTable* Simple360DataAsset;
	UPROPERTY() class APostProcessVolume *a;
	bool AutoRotationContrl;
	float AutoRotationTime;
	float DelayAutoRotationTime;
};
