// Fill out your copyright notice in the Description page of Project Settings.


#include "InputConfig.h"

#include "GameplayTagContainer.h"
#include "EnhancedInput/Public/InputAction.h"

const UInputAction* UInputConfig::FindInputActionForTag(const FGameplayTag& InputTag) const
{
	for (const FTaggedInputAction& TaggedInputAction : TaggedInputActions)
	{
		if (TaggedInputAction.InputAction && TaggedInputAction.InputTag == InputTag)
		{
			return TaggedInputAction.InputAction;
		}
	}

	return nullptr;
}