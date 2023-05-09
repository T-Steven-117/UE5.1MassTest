// Fill out your copyright notice in the Description page of Project Settings.


#include "Constuction.h"
#include "AgentTrait.h"
#include "MassSmartObjectFragments.h"
#include "SmartObjectComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "MassObserverRegistry.h"
UConstuction::UConstuction() :EntityQuery(*this)
{
    //bAutoRegisterWithProcessingPhases=true;
	EntityQuery.RegisterWithProcessor(*this);
	ObservedType=FConstructionFloor::StaticStruct();
	Operation=EMassObservedOperation::Add;
	
}

void UConstuction::ConfigureQueries()
{
	EntityQuery.AddRequirement<FAgentFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FMassSmartObjectUserFragment>(EMassFragmentAccess::ReadWrite);
}

void UConstuction::Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context)
{
	EntityQuery.ForEachEntityChunk(EntityManager, Context, [this](FMassExecutionContext& Context) {

		TArrayView<FAgentFragment>Agents = Context.GetMutableFragmentView<FAgentFragment>();
		TConstArrayView<FMassSmartObjectUserFragment>SoUsers = Context.GetFragmentView<FMassSmartObjectUserFragment>();
		for (int32 EntityIndex = 0; EntityIndex < Context.GetNumEntities(); ++EntityIndex)
		{
			FAgentFragment& Agent = Agents[EntityIndex];
			const FMassSmartObjectUserFragment& SoUser = SoUsers[EntityIndex];
			if (const USmartObjectComponent* SmartObjectComponent = SmartObjectSubsystem->GetSmartObjectComponent(SoUser.InteractionHandle))
			{
				const AActor* actor = SmartObjectComponent->GetOwner();
				UInstancedStaticMeshComponent* InstancedStaticMeshComponent = actor->FindComponentByClass<UInstancedStaticMeshComponent>();
				FTransform Transform;
				Transform.SetLocation(FVector(0, 0, InCrementHeight * InstancedStaticMeshComponent->GetInstanceCount()));
				InstancedStaticMeshComponent->AddInstance(Transform);
				Agent.BuildingHandle = FSmartObjectHandle::Invalid;
				Context.Defer().RemoveTag<FConstructionFloor>(Context.GetEntity(EntityIndex));

				int* ResourceAmount = Agent.Inventory.Find(EResourceType::Stone);
				if (ResourceAmount)
				{
					*ResourceAmount -= 1;
				}
				ResourceAmount = Agent.Inventory.Find(EResourceType::Tree);
				if (ResourceAmount)
				{
					*ResourceAmount -= 1;
				}
			}
		}
	});
	
}

void UConstuction::Initialize(UObject& Owner)
{
	SmartObjectSubsystem =UWorld::GetSubsystem<USmartObjectSubsystem>(Owner.GetWorld());
}

void UConstuction::Register()
{
	//UMassObserverRegistry::GetMutable().RegisterObserver(*ObservedType,Operation,GetClass());
}
