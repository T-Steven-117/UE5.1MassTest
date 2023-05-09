// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnhancedInputComponent.h"
#include "InputAction.h"
#include "InputConfig.h"
#include "GameplayTagContainer.h"
#include "MyEnhancedInputComponent.generated.h"

/**
 * 
 */
UCLASS()
class G510_API UMyEnhancedInputComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()
public:

	template<class UserClass, typename FuncType>
	void BindActionByTag(const UInputConfig* InputConfig, const FGameplayTag& InputTag, ETriggerEvent TriggerEvent, UserClass* Object, FuncType Func)
	{
		check(InputConfig);
		if (const UInputAction* IA = InputConfig->FindInputActionForTag(InputTag))
		{
			BindAction(IA, TriggerEvent, Object, Func);
		}
	}
};
