﻿// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StateTreeTypes.h"
#include "MassAIBehavior/Public/MassStateTreeTypes.h"
#include "MassMoveTask.generated.h"

struct FNavMeshPathFragment;
struct FStateTreeExecutionContext;

/**
 * Task to assign a LookAt target for mass processing
 */
USTRUCT()
struct G510_API FMassMoveTaskInstanceData
{
	GENERATED_BODY()

	/** Entity to set as the target for the LookAt behavior. */
	//UPROPERTY(EditAnywhere, Category = Input, meta = (Optional))
	//FMassEntityHandle TargetEntity;
 
	/** Delay before the task ends. Default (0 or any negative) will run indefinitely so it requires a transition in the state tree to stop it. */
	UPROPERTY(EditAnywhere, Category = Parameter)
	float Duration = 0.f;

	/** Accumulated time used to stop task if duration is set */
	UPROPERTY()
	float Time = 0.f;
};

/**
 * 
 */
USTRUCT(meta = (DisplayName = "Mass Task Move"))
struct G510_API FMassMoveTask : public FMassStateTreeTaskBase
{
	GENERATED_BODY()

	virtual bool Link(FStateTreeLinker& Linker) override;
	virtual const UStruct* GetInstanceDataType() const override { return FMassMoveTaskInstanceData::StaticStruct(); }

	virtual EStateTreeRunStatus EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition)const override;
	virtual EStateTreeRunStatus Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const override;

};
