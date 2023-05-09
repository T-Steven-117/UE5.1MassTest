// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ProjectContent/Xiangmu/PointTargetActor_PawnMoving.h"

#include "PointTarget_YiHuWatching.generated.h"

/**
 *
 */
UCLASS()
class EASYREALTYRUNTIME_API APointTarget_YiHuWatching : public APointTargetActor_PawnMoving
{
	GENERATED_BODY()

public:

	APointTarget_YiHuWatching();
	virtual void OnControlLost() override;
	virtual void OnControlGet() override;
	virtual void OnControlPreGet() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UIIndex;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) bool TobeDog;
};
