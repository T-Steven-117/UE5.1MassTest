// Fill out your copyright notice in the Description page of Project Settings.


#include "BuildingSubsystem.h"
#include "ItemTrait.h"

void UBuildingSubsystem::AddResourceQueue(FSmartObjectHandle& SourceHandle)
{
	if (QueuedResources.Find(SourceHandle)==INDEX_NONE)
	{
		QueuedResources.Emplace(SourceHandle);
	}
}

void UBuildingSubsystem::AddAgent(const FMassEntityHandle& Entity)
{
	Agents.Emplace(Entity);
}

void UBuildingSubsystem::AddBuilding(const FSmartObjectHandle& BuildingRequest, int floors/*=1*/)
{
	QueuedBuildings.Emplace(FBuild(BuildingRequest,floors));
}

bool UBuildingSubsystem::ClaimFloor(FSmartObjectHandle& OutBuilding)
{
	bool bSuccess=false;
	if (QueuedBuildings.Num())
	{
		FBuild& BuildStruct=QueuedBuildings[0];
		OutBuilding=BuildStruct.BuildingRequest;
		BuildStruct.FloorNeeded--;
		if (BuildStruct.FloorNeeded <= 0)
		{
			bSuccess=true;
		}
	}
	return bSuccess;
}

bool UBuildingSubsystem::FindItem(const FVector& Location, float Radius, EResourceType ResourceType, FMassEntityHandle& OutItemHandle) const
{
	
	FMassEntityManager& EntityManager = UE::Mass::Utils::GetEntityManagerChecked(*GetWorld());
	const TPair<FMassEntityHandle, float>ItemHandle = ItemHashGrid.FindNearestInRadius(Location, Radius,
		[this, &Location, &EntityManager](const FMassEntityHandle& Handle)
		{
			if (!EntityManager.IsEntityValid(Handle))
			{
				return 9999.0f;
			}
			FVector& OtherLocation = EntityManager.GetFragmentDataPtr<FItemFragment>(Handle)->OldLocation;
			return (float)FVector::Distance(OtherLocation,Location);
		},
		[this,&ResourceType,&EntityManager](const FMassEntityHandle&Handle)
		{
			if (!EntityManager.IsEntityValid(Handle))
			{
			return true;
			}
			FItemFragment* Item = EntityManager.GetFragmentDataPtr<FItemFragment>(Handle);
			return Item->bClaimed || Item->ItemType != ResourceType;
		}
		);
	OutItemHandle = ItemHandle.Key;
	return EntityManager.IsEntityValid(ItemHandle.Key);
	
}

bool UBuildingSubsystem::ClaimResource(FSmartObjectHandle& OutResourceHandle)
{
	bool bSuccess=0;
	if (QueuedResources.Num())
	{
		OutResourceHandle=QueuedResources[0];
		bSuccess=true;
	}
	return bSuccess;
}
