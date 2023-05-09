// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "FieldNotification\FieldId.h"
#include "StrategyPageViewModel.generated.h"

/**
 * 
 */
UCLASS()
class PROJECTSUBSYSTEM_API UStrategyPageViewModel : public UMVVMViewModelBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter)
		int32 CurrentHealth;
	void SetCurrentHealth(int32 newCurrentHealth);
	int32 GetCurrentHealth() const;
};
