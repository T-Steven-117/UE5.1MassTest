// Fill out your copyright notice in the Description page of Project Settings.


#include "StrategyPageViewModel.h"

void UStrategyPageViewModel::SetCurrentHealth(int32 newCurrentHealth)
{
	if (CurrentHealth != newCurrentHealth)
		UE_MVVM_SET_PROPERTY_VALUE(CurrentHealth, newCurrentHealth);
}

int32 UStrategyPageViewModel::GetCurrentHealth() const{return CurrentHealth;}
