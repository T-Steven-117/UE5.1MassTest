// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemTrait.h"
#include "MassEntityTemplateRegistry.h"
#include "MassCommonFragments.h"
#include "MassRepresentationFragments.h"
void UItemTrait::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, const UWorld& World) const
{
	BuildContext.AddFragment<FItemFragment>();
}

UItemProcessor::UItemProcessor():EntityQuery(*this)
{

}

void UItemProcessor::ConfigureQueries()
{
	EntityQuery.AddRequirement<FItemFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadOnly);
	EntityQuery.AddTagRequirement<FItemAddedToGrid>(EMassFragmentPresence::All);
}

void UItemProcessor::Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context)
{
	EntityQuery.ForEachEntityChunk(EntityManager, Context, ([this](FMassExecutionContext& Context)
	{
		TArrayView<FTransformFragment>Transforms = Context.GetMutableFragmentView<FTransformFragment>();
		TArrayView<FItemFragment>ItemFragments = Context.GetMutableFragmentView<FItemFragment>();
		for (int32 EntityIndex = 0; EntityIndex < Context.GetNumEntities(); ++EntityIndex)
		{
			FItemFragment&Item=ItemFragments[EntityIndex];
			const FVector&Location=Transforms[EntityIndex].GetTransform().GetLocation();

			BuildingSubsystem->ItemHashGrid.UpdatePoint(Context.GetEntity(EntityIndex),Item.OldLocation,Location);
			Item.OldLocation=Location;
		}
	}));
}

void UItemProcessor::Initialize(UObject& Owner)
{
	BuildingSubsystem = UWorld::GetSubsystem<UBuildingSubsystem>(Owner.GetWorld());
}

UItemInitializerProcessor::UItemInitializerProcessor():EntityQuery(*this)
{
	bAutoRegisterWithProcessingPhases = true;
	ObservedType = FTransformFragment::StaticStruct();
	Operation = EMassObservedOperation::Add;
}

void UItemInitializerProcessor::ConfigureQueries()
{
	EntityQuery.AddRequirement<FItemFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FTransformFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FMassRepresentationFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddRequirement<FMassRepresentationLODFragment>(EMassFragmentAccess::ReadOnly);
}

void UItemInitializerProcessor::Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context)
{
	
	EntityQuery.ForEachEntityChunk(EntityManager, Context, ([this](FMassExecutionContext& Context)
	{
		TArrayView<FTransformFragment>Transforms=Context.GetMutableFragmentView<FTransformFragment>();
		TArrayView<FItemFragment>ItemFragments=Context.GetMutableFragmentView<FItemFragment>();
		if (Context.GetNumEntities())
		{
			for (int32 EntityIndex = 0; EntityIndex < Context.GetNumEntities(); ++EntityIndex)
			{
				FItemFragment& Item = ItemFragments[EntityIndex];
				FTransform& Transform = Transforms[EntityIndex].GetMutableTransform();
				if (Transform.GetLocation() == FVector::Zero())
				{
					Item.OldLocation.X += FMath::FRandRange(-150.f, 150.f);
					Item.OldLocation.Y += FMath::FRandRange(-150.f, 150.f);
					Transform.SetLocation(Item.OldLocation);
				}
				BuildingSubsystem->ItemHashGrid.InsertPoint(Context.GetEntity(EntityIndex), Item.OldLocation);
				Context.Defer().AddTag<FItemAddedToGrid>(Context.GetEntity(EntityIndex));
			}
		}
		
	})); 
}

void UItemInitializerProcessor::Initialize(UObject& Owner)
{
	BuildingSubsystem=UWorld::GetSubsystem<UBuildingSubsystem>(Owner.GetWorld());
}
