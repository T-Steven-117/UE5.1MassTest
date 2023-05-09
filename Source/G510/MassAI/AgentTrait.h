// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassEntityTraitBase.h"
#include <../Plugins/Runtime/MassEntity/Source/MassEntity/Public/MassEntityTypes.h>
#include "SmartObjectTypes.h"
#include "MassObserverProcessor.h"
#include "AgentTrait.generated.h"

/**
 */

 class UBuildingSubsystem;

UENUM()
enum EResourceType
{
	Tree,
	Stone
};

USTRUCT(BlueprintType)
struct G510_API FAgentFragment : public FMassFragment
{
	GENERATED_USTRUCT_BODY()
	//类型和数量
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "")
		TMap<TEnumAsByte<EResourceType>, int>Inventory;
	//建筑句柄
	UPROPERTY()
		FSmartObjectHandle BuildingHandle;
	//资源句柄
	UPROPERTY()
		FSmartObjectHandle ResourceHandle;
	//物品
	UPROPERTY()
		TArray<FMassEntityHandle> QueuedItems;;
};

USTRUCT()
struct G510_API FAgentParameters : public FMassSharedFragment
{
	GENERATED_USTRUCT_BODY()
	UPROPERTY(EditAnywhere)
		TMap<TEnumAsByte<EResourceType>, int>DefaultRequiredResources;
};

USTRUCT()
struct FAgent : public FMassTag
{
	GENERATED_BODY()

};

UCLASS()
class G510_API UAgentTrait : public UMassEntityTraitBase
{
	GENERATED_BODY()
		virtual void BuildTemplate(FMassEntityTemplateBuildContext& BuildContext, const UWorld& World) const override;
	UPROPERTY(EditAnywhere)
	FAgentParameters AgentParameters;

};

UCLASS()
class G510_API UAgentInitializer : public UMassObserverProcessor
{
	GENERATED_BODY()
public:
	UAgentInitializer();
protected:
	virtual void ConfigureQueries() override;
	virtual void Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context) override;
	TObjectPtr<UBuildingSubsystem>MovementSubsystem;
	TObjectPtr<class USmartObjectSubsystem>SmartObjectSubsystem;
	FMassEntityQuery EntityQuery;
};
