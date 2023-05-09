// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassEntityTraitBase.h"
#include "AgentTrait.h"
#include "BuildingSubsystem.h"
#include "MassRepresentationSubsystem.h"
#include "MassProcessor.h"
#include "ItemTrait.generated.h"


USTRUCT()
struct G510_API FItemFragment : public FMassFragment
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY()
	TEnumAsByte<EResourceType>ItemType;
	UPROPERTY()
	FVector OldLocation;
	UPROPERTY()
	bool bClaimed=false;
};


USTRUCT()
struct FItemAddedToGrid : public FMassTag
{
	GENERATED_BODY()

};

UCLASS()
class G510_API UItemTrait : public UMassEntityTraitBase
{
	GENERATED_BODY()
	virtual void BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, const UWorld& World) const override;
};

UCLASS()
class G510_API UItemInitializerProcessor : public UMassObserverProcessor
{
	GENERATED_BODY()
public:
	UItemInitializerProcessor();
protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context) override;
	virtual void Initialize(UObject& Owner)override;
	FMassEntityQuery EntityQuery;
	UPROPERTY()
	UBuildingSubsystem* BuildingSubsystem;
	UPROPERTY()
	TObjectPtr<UMassRepresentationSubsystem> RepresentationSubsystem;
};

UCLASS()
class G510_API UItemProcessor : public UMassProcessor
{
	GENERATED_BODY()
public:
	UItemProcessor();

protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context) override;
	virtual void Initialize(UObject& Owner)override;

	FMassEntityQuery EntityQuery;
	UPROPERTY()
	UBuildingSubsystem* BuildingSubsystem;
	UPROPERTY()
	UMassRepresentationSubsystem* RepresentationSubsystem;
};