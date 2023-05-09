// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MVVMViewModelBase.h"
#include "FieldNotification\FieldId.h"
#include "VMCharacterHealth.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class G510_API UVMCharacterHealth : public UMVVMViewModelBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter)
		int32 CurrentHealth;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter)
		int32 MaxHealth;

	UPROPERTY(BlueprintReadWrite, FieldNotify, Setter, Getter)
		int32 SliderValue;

private:
	void SetSliderValue(int32 NewValue)
	{
		if (SliderValue!=NewValue)
		{
			UE_MVVM_SET_PROPERTY_VALUE(SliderValue,NewValue);
		}
	}
	void SetCurrentHealth(int32 newCurrentHealth)
	{
		if (CurrentHealth != newCurrentHealth)
		{
			UE_MVVM_SET_PROPERTY_VALUE(CurrentHealth, newCurrentHealth);
			UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetHealthPercent);
		}
	}

	void SetMaxHealth(int32 newMaxHealth)
	{
		if (MaxHealth != newMaxHealth)
		{
			UE_MVVM_SET_PROPERTY_VALUE(MaxHealth, newMaxHealth);
			UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(GetHealthPercent);
		}
	}

	int32 GetCurrentHealth() const
	{
		return CurrentHealth;
	}

	int32 GetMaxHealth() const
	{
		return MaxHealth;
	}
	int32 GetSliderValue() const 
	{
		return SliderValue;
	}
public:
	UFUNCTION(BlueprintPure, FieldNotify)
		float GetHealthPercent() const
	{
		if (MaxHealth != 0)
		{
			return (float)CurrentHealth / (float)MaxHealth;
		}

		else
			return 0;
	}
};
