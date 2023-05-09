// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AgentTrait.h"
#include "MassSmartObjectBehaviorDefinition.h"
#include "GatherBD.generated.h"

class UMassEntityConfigAsset;
/**
 * 
 */
UCLASS()
class G510_API UGatherBD : public USmartObjectMassBehaviorDefinition
{
	GENERATED_BODY()
	
public:
	//资源数量
	UPROPERTY(EditDefaultsOnly,Category=SmartObject)
	int ResourceAmount=1;
	//类型
	UPROPERTY(EditDefaultsOnly, Category = SmartObject)
	TEnumAsByte<EResourceType>ResourceType=Tree;
	//资产
	UPROPERTY(EditDefaultsOnly, Category = SmartObject)
	UMassEntityConfigAsset* ItemConfig;

	virtual void Activate(FMassCommandBuffer& CommandBuffer, const FMassBehaviorEntityContext& EntityContext) const override;

	virtual void Deactivate(FMassCommandBuffer& CommandBuffer, const FMassBehaviorEntityContext& EntityContext) const override;

};
