// Fill out your copyright notice in the Description page of Project Settings.


#include "AgentTrait.h"
#include "MassEntityTemplateRegistry.h"
#include "MassEntitySubsystem.h"
#include "MassRepresentationFragments.h"
#include "SharedStruct.h"
#include "BuildingSubsystem.h"
#include "SmartObjectSubsystem.h"
void UAgentTrait::BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, const UWorld& World) const
{
	FMassEntityManager& EntityManager = UE::Mass::Utils::GetEntityManagerChecked(World);

	BuildContext.AddFragment<FAgentFragment>();
	BuildContext.AddTag<FAgent>();

	const FConstSharedStruct AgentFragment= EntityManager.GetOrCreateConstSharedFragment<FAgentParameters>(AgentParameters);
	BuildContext.AddConstSharedFragment(AgentFragment);
}

UAgentInitializer::UAgentInitializer():EntityQuery(*this)
{
	EntityQuery.RegisterWithProcessor(*this);
	ObservedType = FAgentFragment::StaticStruct();
	Operation = EMassObservedOperation::Add;
}

void UAgentInitializer::ConfigureQueries()
{
	EntityQuery.AddRequirement<FAgentFragment>(EMassFragmentAccess::ReadWrite);
	EntityQuery.AddConstSharedRequirement<FAgentParameters>(EMassFragmentPresence::All);
	EntityQuery.AddTagRequirement<FAgent>(EMassFragmentPresence::All);
	EntityQuery.AddRequirement<FMassRepresentationFragment>(EMassFragmentAccess::ReadWrite);
}

void UAgentInitializer::Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context)
{
	EntityQuery.ForEachEntityChunk(EntityManager, Context, ([this](FMassExecutionContext& Context)
	{
		UBuildingSubsystem* BuildingSubsystem=GetWorld()->GetSubsystem<UBuildingSubsystem>();

		for (int32 EntityIndex=0;EntityIndex<Context.GetNumEntities();++EntityIndex)
		{
			BuildingSubsystem->AddAgent(Context.GetEntity(EntityIndex));
		}
	}));
}


