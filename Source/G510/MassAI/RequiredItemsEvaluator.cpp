// Fill out your copyright notice in the Description page of Project Settings.


#include "RequiredItemsEvaluator.h"
#include "MassEntitySubsystem.h"
#include "ItemTrait.h"
#include "BuildingSubsystem.h"
#include "StateTreeExecutionContext.h"
#include "StateTreeLinker.h"
#include "MassSmartObjectBehaviorDefinition.h"
#include "MassSmartObjectFragments.h"
#include "MassNavigationFragments.h"
#include "MassNavigationTypes.h"
#include "MassMovementFragments.h"
#include "MassSignalSubsystem.h"
#include "MassStateTreeExecutionContext.h"
#include "MassSmartObjectHandler.h"
#include "SmartObjectSubsystem.h"
#include "SmartObjectComponent.h"
#include "GameplayTagContainer.h"


void FRequiredItemsEvaluator::TreeStart(FStateTreeExecutionContext& Context) const
{
	FAgentFragment& Agent = Context.GetExternalData(AgentHandle);
	USmartObjectSubsystem& SmartObjectSubsystem = Context.GetExternalData(SmartObjectSubsystemHandle);

	UMassEntitySubsystem& EntitySubsystem = Context.GetExternalData(EntitySubsystemHandle);
	const FVector& Location = Context.GetExternalData(TransformHandle).GetTransform().GetLocation();
	UBuildingSubsystem& BuildingSubsystem = Context.GetExternalData(BuildingSubsystemHandle);
	FInstanceDataType& InstanceData = Context.GetInstanceData(*this);

	InstanceData.bfoundSmartObject = false;
	InstanceData.bFoundItemHandle = false;

	InstanceData.Filter.BehaviorDefinitionClasses.Add(USmartObjectMassBehaviorDefinition::StaticClass());

	FSmartObjectRequest Request;
	Request.QueryBox = FBox::BuildAABB(Location, FVector(5000.f));

	FGameplayTagQueryExpression Query;
	Query.AllTagsMatch();
	const FMassEntityManager& EntityManager = EntitySubsystem.GetEntityManager();


	if (!EntityManager.IsEntityValid(InstanceData.ItemHandle) && Agent.QueuedItems.Num() > 0)
	{
		InstanceData.ItemHandle = Agent.QueuedItems.Pop();
		if (EntityManager.IsEntityValid(InstanceData.ItemHandle))
		{
			InstanceData.bFoundItemHandle = true;
			FItemFragment* ItemFragment = EntityManager.GetFragmentDataPtr<FItemFragment>(InstanceData.ItemHandle);
			if (ItemFragment)
			{
				ItemFragment->bClaimed = true;
			}
			return;
		}
	}
	//代理正在等待命令？
	if (Agent.QueuedItems.Num() <= 0 && !Agent.BuildingHandle.IsValid())
	{
		//是否有需要建造
		if (BuildingSubsystem.GetQueueBuildings() > 0)
		{
			TArray<FMassEntityHandle> ItemHandles;
			ItemHandles.AddUninitialized(2);
			if (BuildingSubsystem.FindItem(Location, 5000.f, Stone, ItemHandles[0]))
			{
				if (BuildingSubsystem.FindItem(Location, 5000.f, Tree, ItemHandles[1]))
				{
					InstanceData.bFoundItemHandle = true;
					BuildingSubsystem.ClaimFloor(Agent.BuildingHandle);


					Agent.QueuedItems.Append(ItemHandles);
					InstanceData.ItemHandle = Agent.QueuedItems.Pop();
					FItemFragment* ItemFragment = EntityManager.GetFragmentDataPtr<FItemFragment>(InstanceData.ItemHandle);
					if (ItemFragment)
					{
						ItemFragment->bClaimed = true;
					}
					return;
				}
			}
		}
	}
	//已经收集完成，去到楼层建造
	if (Agent.BuildingHandle.IsValid() && Agent.QueuedItems.Num() == 0)
	{
		InstanceData.bfoundSmartObject = true;
		InstanceData.SmartObjectHandle = Agent.BuildingHandle;
		InstanceData.ClaimHandle.SmartObjectHandle = Agent.BuildingHandle;
		return;
	}
	//没有资源没有需要建造，查看是否有排队的资源
	TArray<FSmartObjectHandle>QueueResources;
	BuildingSubsystem.GetQueueResources(QueueResources);
	if (QueueResources.Num() > 0 && !Agent.ResourceHandle.IsValid())
	{
		FSmartObjectHandle ResourceHandle;
		InstanceData.bfoundSmartObject = true;
		BuildingSubsystem.ClaimResource(ResourceHandle);
		Agent.ResourceHandle = ResourceHandle;
		InstanceData.SmartObjectHandle = ResourceHandle;

		InstanceData.ClaimHandle.SmartObjectHandle = ResourceHandle;
	}
}

//void FRequiredItemsEvaluator::Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const
//{
//	
//}

bool FRequiredItemsEvaluator::Link(FStateTreeLinker& Linker)
{
	Linker.LinkExternalData(AgentHandle);
	Linker.LinkExternalData(TransformHandle);
	Linker.LinkExternalData(EntitySubsystemHandle);
	Linker.LinkExternalData(BuildingSubsystemHandle);
	Linker.LinkExternalData(SmartObjectSubsystemHandle);
	return true;
}

FMoveToEntityTask::FMoveToEntityTask()
{

}


bool FMoveToEntityTask::Link(FStateTreeLinker& Linker)
{
	Linker.LinkExternalData(MoveTargetHandle);
	Linker.LinkExternalData(TransformHandle);
	Linker.LinkExternalData(SOUserHandle);
	Linker.LinkExternalData(MassSignalSubsystemHandle);
	Linker.LinkExternalData(MovementParametersHandle);
	Linker.LinkExternalData(EntitySubsystemHandle);
	Linker.LinkExternalData(BuildingSubsystemHandle);
	return true;
}

EStateTreeRunStatus FMoveToEntityTask::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const
{
	FMassMoveTargetFragment&MoveTarget=Context.GetExternalData(MoveTargetHandle);
	const FMassMovementParameters& MoveParameters=Context.GetExternalData(MovementParametersHandle);
	const FMassEntityHandle& ItemHandle=Context.GetInstanceData(*this).ItemHandle;
	UMassEntitySubsystem&EntitySubsystem=Context.GetExternalData(EntitySubsystemHandle);
	const FMassEntityManager& EntityManager = EntitySubsystem.GetEntityManager();
	if (!EntityManager.IsEntityValid(ItemHandle))
	{
		return EStateTreeRunStatus::Failed;
	}

	GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("CurNode-->MoveToEntityTask::EnterState"));
	
	const FVector& Location=EntityManager.GetFragmentDataChecked<FTransformFragment>(ItemHandle).GetTransform().GetLocation();

	MoveTarget.Center=Location;
	MoveTarget.SlackRadius=25.f;
	MoveTarget.DesiredSpeed.Set(MoveParameters.DefaultDesiredSpeed);
	MoveTarget.CreateNewAction(EMassMovementAction::Move,*Context.GetWorld());
	MoveTarget.IntentAtGoal=EMassMovementAction::Stand;
	return EStateTreeRunStatus::Running;
}

EStateTreeRunStatus FMoveToEntityTask::Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const
{
	FInstanceDataType& InstanceData = Context.GetInstanceData(*this);
	const FMassEntityHandle&ItemHandle= InstanceData.ItemHandle;
	UMassEntitySubsystem&EntitySubsystem= Context.GetExternalData(EntitySubsystemHandle);
	const FMassEntityManager& EntityManager = EntitySubsystem.GetEntityManager();

	const FMassStateTreeExecutionContext&MassContext=static_cast<FMassStateTreeExecutionContext&>(Context);
	UMassSignalSubsystem& MassSignalSubsystem=Context.GetExternalData(MassSignalSubsystemHandle);
	UBuildingSubsystem& BuildingSubsystem = Context.GetExternalData(BuildingSubsystemHandle);
	MassSignalSubsystem.DelaySignalEntity(UE::Mass::Signals::FollowPointPathDone,MassContext.GetEntity(),1);

	FMassMoveTargetFragment& MoveTarget=Context.GetExternalData(MoveTargetHandle);
	const FTransform& Transform=Context.GetExternalData(TransformHandle).GetTransform();

	if (MoveTarget.DistanceToGoal<=MoveTarget.SlackRadius+100.f)
	{
		EntityManager.Defer().DestroyEntity(ItemHandle);
		BuildingSubsystem.ItemHashGrid.RemovePoint(ItemHandle,MoveTarget.Center);
		return EStateTreeRunStatus::Succeeded;
	}
	return EStateTreeRunStatus::Running;
}

bool FClaimSmartObjectTask::Link(FStateTreeLinker& Linker)
{
	/*Linker.LinkExternalData(SmartObjectHandle);
	Linker.LinkExternalData(ClaimResultHandle);*/
	Linker.LinkExternalData(SmartObjectUser);
	Linker.LinkExternalData(SmartObjectSubsystemHandle);
	Linker.LinkExternalData(MassSignalSubsystemHandle);
	return true;
}



EStateTreeRunStatus FClaimSmartObjectTask::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const
{
	FInstanceDataType& InstanceDataType = Context.GetInstanceData(*this);
	const FSmartObjectHandle&SOHandle=InstanceDataType.SOHandle;
	EMassSmartObjectInteractionStatus ClaimResult=InstanceDataType.ClaimResult;

	FSmartObjectRequestFilter Filter;
	Filter.BehaviorDefinitionClasses.Add(USmartObjectMassBehaviorDefinition::StaticClass());

	UMassSignalSubsystem& SignalSubsystem = Context.GetExternalData(MassSignalSubsystemHandle);
	USmartObjectSubsystem& SmartObjectSubsystem=Context.GetExternalData(SmartObjectSubsystemHandle);
	FMassSmartObjectUserFragment&SOUser=Context.GetExternalData(SmartObjectUser);

	InstanceDataType.ClaimHandle =SmartObjectSubsystem.Claim(SOHandle,Filter);
	GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("CurNode-->ClaimSmartObjectTask "));
	if (!InstanceDataType.ClaimHandle.IsValid())
	{
		return EStateTreeRunStatus::Failed;
	}

	SOUser.InteractionHandle= InstanceDataType.ClaimHandle;
	SOUser.InteractionStatus= EMassSmartObjectInteractionStatus::Unset;
	const FTransform Transform=SmartObjectSubsystem.GetSlotTransform(SOUser.InteractionHandle).Get(FTransform::Identity);
	SmartObjectSubsystem.GetSmartObjectComponent(SOUser.InteractionHandle)->SetWorldLocation(Transform.GetLocation());

	ClaimResult = EMassSmartObjectInteractionStatus::TaskCompleted; 
	return EStateTreeRunStatus::Succeeded;
}

EStateTreeRunStatus FClaimSmartObjectTask::Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const
{
	return EStateTreeRunStatus::Running;
}

bool FMoveTargetTask::Link(FStateTreeLinker& Linker)
{
	Linker.LinkExternalData(MoveTargetHandle);
	Linker.LinkExternalData(TransformHandle);
	Linker.LinkExternalData(SOUserHandle);
	Linker.LinkExternalData(MassSignalSubsystemHandle);
	Linker.LinkExternalData(MoveParametersHandle);
	return true;
}



EStateTreeRunStatus FMoveTargetTask::EnterState(FStateTreeExecutionContext& Context, const FStateTreeTransitionResult& Transition) const
{

	FMassMoveTargetFragment& MoveTarget = Context.GetExternalData(MoveTargetHandle);
	const FMassSmartObjectUserFragment& SOuserFragment = Context.GetExternalData(SOUserHandle);
	const FMassMovementParameters& MoveParameters = Context.GetExternalData(MoveParametersHandle);
	USmartObjectSubsystem* SmartObjectSubsystem = Context.GetWorld()->GetSubsystem<USmartObjectSubsystem>();
	UMassSignalSubsystem& SignalSubsystem = Context.GetExternalData(MassSignalSubsystemHandle);

	if (SOuserFragment.InteractionHandle.SmartObjectHandle.IsValid())
	{
		GEngine->AddOnScreenDebugMessage(1, 5.f, FColor::Red, TEXT("FMoveTargetTask::EnterState"));

		MoveTarget.Center = SmartObjectSubsystem->GetSmartObjectComponent(SOuserFragment.InteractionHandle)->GetComponentTransform().GetLocation();
		MoveTarget.Forward = SmartObjectSubsystem->GetSmartObjectComponent(SOuserFragment.InteractionHandle)->GetOwner()->GetActorForwardVector();
		MoveTarget.SlackRadius = 25.f;
		MoveTarget.DesiredSpeed.Set(MoveParameters.DefaultDesiredSpeed);
		MoveTarget.CreateNewAction(EMassMovementAction::Move, *Context.GetWorld());
		MoveTarget.IntentAtGoal = EMassMovementAction::Stand;

		const FTransform& Transform = Context.GetExternalData(TransformHandle).GetTransform();
		MoveTarget.DistanceToGoal = (MoveTarget.Center - Transform.GetLocation()).Length();
		MoveTarget.Forward = (MoveTarget.Center - Transform.GetLocation()).GetSafeNormal();

		if (MoveTarget.DistanceToGoal <= MoveTarget.SlackRadius + 100.f)
		{

			return EStateTreeRunStatus::Succeeded;
		}
	}
	return EStateTreeRunStatus::Running;
}

