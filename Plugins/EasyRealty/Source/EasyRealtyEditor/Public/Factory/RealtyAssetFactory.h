// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "RealtyAssetFactory.generated.h"

/**
 * 
 */
UCLASS()
class EASYREALTYEDITOR_API URealtyAssetFactory : public UFactory
{
	GENERATED_BODY()

public:

	URealtyAssetFactory();

	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;

	//virtual uint32 GetMenuCategories() const override;

};
