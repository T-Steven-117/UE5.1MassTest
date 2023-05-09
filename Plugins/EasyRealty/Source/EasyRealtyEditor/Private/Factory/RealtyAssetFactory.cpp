// Fill out your copyright notice in the Description page of Project Settings.


#include "Factory/RealtyAssetFactory.h"
#include "AssetTypeCategories.h"
#include "RealtyAsset/RealtyAsset.h"


URealtyAssetFactory::URealtyAssetFactory()
{
	SupportedClass = URealtyAsset::StaticClass();
	bEditAfterNew = true;
	bCreateNew = true;
}

UObject* URealtyAssetFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return
		NewObject<UObject>(InParent, SupportedClass, InName, Flags | RF_Transactional);

}

//uint32 URealtyAssetFactory::GetMenuCategories() const
//{
//	return EAssetTypeCategories::Misc;
//}
