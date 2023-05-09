// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MassObserverProcessor.h"
#include "Constuction.generated.h"


//class USmartObjectComponent;

USTRUCT()
struct FConstructionFloor : public FMassTag
{
	GENERATED_USTRUCT_BODY()

};

UCLASS()
class G510_API UConstuction : public UMassObserverProcessor
{
	GENERATED_BODY()
	
	UConstuction();
	virtual void ConfigureQueries() override;
	virtual void Execute(FMassEntityManager& EntityManager, FMassExecutionContext& Context) override;
	virtual void Initialize(UObject& Owner)override;
	virtual void Register() override;
	FMassEntityQuery EntityQuery;
	//建造高度
	float InCrementHeight=100.f;
	TObjectPtr<class USmartObjectSubsystem>SmartObjectSubsystem;


};
