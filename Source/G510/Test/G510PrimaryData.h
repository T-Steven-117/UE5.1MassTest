// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "G510PrimaryData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType, Blueprintable)
struct FG510STU
{
	GENERATED_USTRUCT_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		int32 ID;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
		FName ThisName;
 };

UCLASS()
class G510_API UG510PrimaryData : public UPrimaryDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FG510STU StuRef;
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite,Category=Item)
	FPrimaryAssetType ThisType;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override;
};
