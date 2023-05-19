// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "MassStateTreeTypes.h"
#include "SmartObjectSubsystem.h"
#include "SmartObjectTypes.h"
#include "AgentTrait.h"
#include "StateTreeLinker.h"
#include "MassSignalSubsystem.h"
#include "MassEntitySubsystem.h"
#include "MassCommonFragments.h"
#include "FCheckResourceAndItem.generated.h"

/**
 *
 */
USTRUCT()
struct G510_API FCheakTaskData
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, Category = output)
		FSmartObjectRequestFilter Filter;
	UPROPERTY(EditAnywhere, Category = Output)
		FSmartObjectHandle SmartObjectHandle;
	UPROPERTY(EditAnywhere, category = Output)
		FMassEntityHandle ItemHandle;
	UPROPERTY(EditAnywhere, Category = Output)
		bool bfoundSmartObject = false;
	UPROPERTY(EditAnywhere, Category = Output)
		bool bFoundItemHandle = false;
};

USTRUCT()
struct G510_API FCheckItemsEvaluator : public FMassStateTreeEvaluatorBase
{
	GENERATED_BODY()
		using FInstanceDataType = FCheakTaskData;
protected:
	virtual bool Link(FStateTreeLinker& Linker) override;
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }
	//virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const override;
	virtual void Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const override;


	TStateTreeExternalDataHandle<FAgentFragment> AgentHandle;
	TStateTreeExternalDataHandle <USmartObjectSubsystem> SmartObjectSubsystemHandle;
	TStateTreeExternalDataHandle <UMassEntitySubsystem> EntitySubsystemHandle;
	TStateTreeExternalDataHandle <FTransformFragment> TransformHandle;
	TStateTreeExternalDataHandle <UBuildingSubsystem> BuildingSubsystemHandle;
	TStateTreeExternalDataHandle<UMassSignalSubsystem> MassSignalSubsystemHandle;
	TStateTreeExternalDataHandle<struct FMassSmartObjectUserFragment> SmartObjectUserHandle;
};
