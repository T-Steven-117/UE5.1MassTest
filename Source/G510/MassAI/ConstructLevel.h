// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassSmartObjectBehaviorDefinition.h"
#include "ConstructLevel.generated.h"

/**
 * 
 */
UCLASS()
class G510_API UConstructLevel : public USmartObjectMassBehaviorDefinition
{
	GENERATED_BODY()
public:
	virtual void Activate(FMassCommandBuffer& CommandBuffer, const FMassBehaviorEntityContext& EntityContext) const override;

	virtual void Deactivate(FMassCommandBuffer& CommandBuffer, const FMassBehaviorEntityContext& EntityContext) const override;
};
