// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

//#include "CoreMinimal.h"
#include "AgentTrait.h"
#include "StateTreeTypes.h"
#include "StateTreeLinker.h"
#include "StateTreeExecutionContext.h"
#include "MassCommonFragments.h"
#include "SmartObjectSubsystem.h"
#include "StateTreeNodeBase.h"
#include "MassStateTreeTypes.h"
#include "MassSmartObjectTypes.h"
#include "MassSmartObjectRequest.h"
#include "GameplayTagContainer.h"
#include "RequiredItemsEvaluator.generated.h"


struct FMassMoveTargetFragment;
class USmartObjectSubsystem;
class UMassEntitySubsystem;
class UMassSignalSubsystem;
//Item处理器数据
USTRUCT()
struct G510_API FEquiredItemsEvaluatorData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, Category = output)
		FSmartObjectRequestFilter Filter;
	UPROPERTY(EditAnywhere, Category = Output)
		FSmartObjectHandle SmartObjectHandle;
	UPROPERTY(EditAnywhere, category = Output)
		FMassEntityHandle ItemHandle;
	UPROPERTY(EditAnywhere, category = Output)
		FSmartObjectClaimHandle ClaimHandle;
	UPROPERTY(EditAnywhere, Category = Output)
		bool bfoundSmartObject = false;
	UPROPERTY(EditAnywhere, Category = Output)
		bool bFoundItemHandle = false;
	UPROPERTY()
		FMassSmartObjectRequestID SearchRequestID;
};

USTRUCT()
struct G510_API FRequiredItemsEvaluator : public FMassStateTreeEvaluatorBase
{
	GENERATED_BODY()

		using FInstanceDataType = FEquiredItemsEvaluatorData;
protected:
	virtual void TreeStart(FStateTreeExecutionContext& Context) const override;
	//virtual void Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const override;
	virtual bool Link(FStateTreeLinker& Linker) override;
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }

	TStateTreeExternalDataHandle<FAgentFragment> AgentHandle;
	TStateTreeExternalDataHandle <USmartObjectSubsystem> SmartObjectSubsystemHandle;
	TStateTreeExternalDataHandle <UMassEntitySubsystem> EntitySubsystemHandle;
	TStateTreeExternalDataHandle <FTransformFragment> TransformHandle;
	TStateTreeExternalDataHandle <UBuildingSubsystem> BuildingSubsystemHandle;
	TStateTreeExternalDataHandle<UMassSignalSubsystem> MassSignalSubsystemHandle;
	TStateTreeExternalDataHandle<struct FMassSmartObjectUserFragment> SmartObjectUserHandle;

};


USTRUCT()
struct G510_API FMoveToEntityTaskData
{
	GENERATED_BODY()
		UPROPERTY(VisibleAnywhere, Category = Input)
		FMassEntityHandle ItemHandle;
};

USTRUCT()
struct G510_API FMoveToEntityTask : public FMassStateTreeTaskBase
{
	GENERATED_BODY()

		using FInstanceDataType = FMoveToEntityTaskData;

	FMoveToEntityTask();
protected:
	virtual bool Link(FStateTreeLinker& Linker) override;
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }
	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const override;
	virtual EStateTreeRunStatus Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const override;

	TStateTreeExternalDataHandle<FMassEntityHandle>EntityHandle;
	TStateTreeExternalDataHandle<struct EMassSmartObjectClaimResult>ClaimResultHandle;

	TStateTreeExternalDataHandle<USmartObjectSubsystem> SmartObjectSubsystemHandle;
	TStateTreeExternalDataHandle<FMassMoveTargetFragment> MoveTargetHandle;
	TStateTreeExternalDataHandle<FTransformFragment> TransformHandle;
	TStateTreeExternalDataHandle<struct FMassSmartObjectUserFragment> SOUserHandle;
	TStateTreeExternalDataHandle<UMassSignalSubsystem> MassSignalSubsystemHandle;
	TStateTreeExternalDataHandle<struct FMassMovementParameters>MovementParametersHandle;
	TStateTreeExternalDataHandle<UMassEntitySubsystem>EntitySubsystemHandle;
	TStateTreeExternalDataHandle<UBuildingSubsystem>BuildingSubsystemHandle;


};


USTRUCT()
struct G510_API FClaimSmartObjectTaskData
{
	GENERATED_BODY()
public:
	UPROPERTY(VisibleAnywhere, Category = Input)
		FSmartObjectHandle SOHandle;
	UPROPERTY(VisibleAnywhere, Category = Output)
		FSmartObjectClaimHandle ClaimHandle;
	UPROPERTY(VisibleAnywhere, Category = Output)
		EMassSmartObjectInteractionStatus ClaimResult = EMassSmartObjectInteractionStatus::Unset;
};


USTRUCT()
struct G510_API FClaimSmartObjectTask : public FMassStateTreeTaskBase
{
	GENERATED_BODY()

		using FInstanceDataType = FClaimSmartObjectTaskData;
protected:
	virtual bool Link(FStateTreeLinker& Linker) override;
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }
	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const override;
	virtual EStateTreeRunStatus Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const override;
	TStateTreeExternalDataHandle<FMassSmartObjectUserFragment>SmartObjectUser;
	TStateTreeExternalDataHandle<USmartObjectSubsystem>SmartObjectSubsystemHandle;
	TStateTreeExternalDataHandle<UMassSignalSubsystem> MassSignalSubsystemHandle;
};


USTRUCT()
struct G510_API FMoveTargetData
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = Output)
	EMassSmartObjectInteractionStatus ClaimResult = EMassSmartObjectInteractionStatus::Unset;
};

USTRUCT()
struct G510_API FMoveTargetTask : public FMassStateTreeTaskBase
{
	GENERATED_BODY()
		using FInstanceDataType = FMoveTargetData;
	virtual bool Link(FStateTreeLinker& Linker) override;
	virtual const UStruct* GetInstanceDataType() const override { return FInstanceDataType::StaticStruct(); }
	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const override;
	//virtual EStateTreeRunStatus Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const override;
protected:
	TStateTreeExternalDataHandle<FMassMoveTargetFragment>MoveTargetHandle;
	TStateTreeExternalDataHandle<FTransformFragment> TransformHandle;
	TStateTreeExternalDataHandle<FMassSmartObjectUserFragment>SOUserHandle;
	TStateTreeExternalDataHandle<UMassSignalSubsystem>MassSignalSubsystemHandle;
	TStateTreeExternalDataHandle<FMassMovementParameters>MoveParametersHandle;
};