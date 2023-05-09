// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include <AssetTypeActions_Base.h>

/**
 * 
 */
class EASYREALTYEDITOR_API FRealtyAssetToolKitAction : public FAssetTypeActions_Base
{
	
public:

	FRealtyAssetToolKitAction();

	virtual void OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor = TSharedPtr<IToolkitHost>()) override;

	virtual FText GetName() const override;

	virtual UClass* GetSupportedClass() const override;

	virtual FColor GetTypeColor() const override;

	virtual uint32 GetCategories() override;


};
