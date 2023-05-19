// Fill out your copyright notice in the Description page of Project Settings.


#include "MassMoveTask.h"

#include "MassStateTreeExecutionContext.h"

bool FMassMoveTask::Link(FStateTreeLinker& Linker)
{
	return true;
}

EStateTreeRunStatus FMassMoveTask::Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const
{
	return EStateTreeRunStatus::Succeeded;
}


EStateTreeRunStatus FMassMoveTask::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const
{
	return EStateTreeRunStatus::Failed;
}
