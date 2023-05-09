// Fill out your copyright notice in the Description page of Project Settings.


#include "UserTopPageViewModelBase.h"

void UUserTopPageViewModelBase::SetLowTemp(FString NewValue)
{
	if (LowTemp!=NewValue)
	{
		UE_MVVM_SET_PROPERTY_VALUE(LowTemp, NewValue);
	}
}

void UUserTopPageViewModelBase::SetHighTemp(FString NewValue)
{
	if (HighTemp!=NewValue)
	{
		UE_MVVM_SET_PROPERTY_VALUE(HighTemp, NewValue);
	}
}

void UUserTopPageViewModelBase::SetTimeData(FString NewValue)
{
	if (TimeData != NewValue)
	{
		UE_MVVM_SET_PROPERTY_VALUE(TimeData, NewValue);
	}
}

void UUserTopPageViewModelBase::SetCName(FString NewName)
{
	if (CName!=NewName)
	{
		UE_MVVM_SET_PROPERTY_VALUE(CName, NewName);
	}
}

void UUserTopPageViewModelBase::SetEName(FString NewEName)
{
	if (EName != NewEName)
	{
		UE_MVVM_SET_PROPERTY_VALUE(EName, NewEName);
	}
}

void UUserTopPageViewModelBase::CallOnDelegate()
{
	OnTrigger.Broadcast();
}

