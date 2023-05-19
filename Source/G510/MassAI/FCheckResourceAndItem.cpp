// Fill out your copyright notice in the Description page of Project Settings.


#include "FCheckResourceAndItem.h"
#include "BuildingSubsystem.h"
#include <../Plugins/Runtime/StateTree/Source/StateTreeModule/Public/StateTreeExecutionContext.h>
#include "ItemTrait.h"
#include "MassSmartObjectBehaviorDefinition.h"

bool FCheckItemsEvaluator::Link(FStateTreeLinker& Linker)
{
	Linker.LinkExternalData(AgentHandle);
	Linker.LinkExternalData(TransformHandle);
	Linker.LinkExternalData(EntitySubsystemHandle);
	Linker.LinkExternalData(BuildingSubsystemHandle);
	Linker.LinkExternalData(SmartObjectSubsystemHandle);
	return true;
}






void FCheckItemsEvaluator::Tick(FStateTreeExecutionContext& Context, const float DeltaTime) const
{
	FAgentFragment& Agent = Context.GetExternalData(AgentHandle);
	USmartObjectSubsystem& SmartObjectSubsystem = Context.GetExternalData(SmartObjectSubsystemHandle);
	Agent.ResourceHandle.Invalidate();
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
		}
	}
	//�������ڵȴ����
	if (Agent.QueuedItems.Num() <= 0 && !Agent.BuildingHandle.IsValid())
	{
		//�Ƿ�����Ҫ����
		if (BuildingSubsystem.GetQueueBuildings() > 0)
		{
			TArray<FMassEntityHandle> ItemHandles;
			ItemHandles.AddUninitialized(2);
			if (BuildingSubsystem.FindItem(Location, 5000.f, Tree, ItemHandles[0]))
			{		
				if (BuildingSubsystem.FindItem(Location, 5000.f, Stone, ItemHandles[1]))
				{
					InstanceData.bFoundItemHandle = true;
					BuildingSubsystem.ClaimFloor(Agent.BuildingHandle);
					Agent.QueuedItems.Emplace(ItemHandles[1]);

					InstanceData.ItemHandle = Agent.QueuedItems.Pop();
					FItemFragment* ItemFragment = EntityManager.GetFragmentDataPtr<FItemFragment>(InstanceData.ItemHandle);
					if (ItemFragment)
					{
						ItemFragment->bClaimed = true;
					}
				}
						
			}
		}
	}
	//�Ѿ��ռ���ɣ�ȥ��¥�㽨��
	if (Agent.BuildingHandle.IsValid() && Agent.QueuedItems.Num() == 0)
	{
		InstanceData.bfoundSmartObject = true;
		InstanceData.SmartObjectHandle = Agent.BuildingHandle;
	}
	//û����Դû����Ҫ���죬�鿴�Ƿ����Ŷӵ���Դ
	TArray<FSmartObjectHandle>QueueResources;
	BuildingSubsystem.GetQueueResources(QueueResources);
	if (QueueResources.Num() > 0 && !Agent.ResourceHandle.IsValid())
	{
		FSmartObjectHandle ResourceHandle;
		InstanceData.bfoundSmartObject = true;
		BuildingSubsystem.ClaimResource(ResourceHandle);
		Agent.ResourceHandle = ResourceHandle;
		InstanceData.SmartObjectHandle = ResourceHandle;
	}
}
