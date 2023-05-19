// Fill out your copyright notice in the Description page of Project Settings.


#include "GatherBD.h"
#include "MassSpawnerSubsystem.h"
#include "MassSmartObjectBehaviorDefinition.h"
#include "SmartObjectSubsystem.h"
#include "MassEntityConfigAsset.h"
#include "MassCommonFragments.h"
#include "ItemTrait.h"
#include "Kismet/GameplayStatics.h"
#include "SmartObjectComponent.h"
#include "MassSmartObjectFragments.h"

void UGatherBD::Activate(FMassCommandBuffer& CommandBuffer, const FMassBehaviorEntityContext& EntityContext) const
{
	Super::Activate(CommandBuffer,EntityContext);
	FAgentFragment&Agent=EntityContext.EntityView.GetFragmentData<FAgentFragment>();
	Agent.ResourceHandle.Invalidate();
}

void UGatherBD::Deactivate(FMassCommandBuffer& CommandBuffer, const FMassBehaviorEntityContext& EntityContext) const
{
	Super::Deactivate(CommandBuffer,EntityContext);
	UMassSpawnerSubsystem* SpawnerSubsystem=UWorld::GetSubsystem<UMassSpawnerSubsystem>(EntityContext.SmartObjectSubsystem.GetWorld());

	if (EntityContext.SmartObjectSubsystem.GetWorld()&&UGameplayStatics::GetPlayerPawn(EntityContext.SmartObjectSubsystem.GetWorld(),0))
	{
		//生成4个资源
		TArray<FMassEntityHandle>Items;
		const FMassEntityTemplate& EntityTemplate=ItemConfig->GetConfig().GetOrCreateEntityTemplate(*EntityContext.SmartObjectSubsystem.GetWorld(),*ItemConfig);
		SpawnerSubsystem->SpawnEntities(EntityTemplate,4,Items);

		for (const FMassEntityHandle& ItemHandle:Items)
		{
			const FVector& Spawnlocation=EntityContext.EntityView.GetFragmentDataPtr<FTransformFragment>()->GetTransform().GetLocation();

			FItemFragment ItemFragement;
			ItemFragement.ItemType=ResourceType;
			ItemFragement.OldLocation=Spawnlocation;		
			CommandBuffer.PushCommand<FMassCommandAddFragmentInstances>(ItemHandle, ItemFragement);
		}

		const FMassSmartObjectUserFragment& SoUser=EntityContext.EntityView.GetFragmentData<FMassSmartObjectUserFragment>();
		if (USmartObjectComponent* Comp = EntityContext.SmartObjectSubsystem.GetSmartObjectComponent(SoUser.InteractionHandle))
		{
			CommandBuffer.PushCommand<FMassDeferredSetCommand>([Comp, EntityContext](FMassEntityManager& System) 
			{
				EntityContext.SmartObjectSubsystem.UnregisterSmartObject(*Comp);
				//Comp->GetOwner()->Destroy();
				if (Comp)
				{
					Comp->GetOwner()->Destroy();
				}
			
			});
		}
	}

}
