// Fill out your copyright notice in the Description page of Project Settings.


#include "ToolKit/RealtyAssetToolKitAction.h"
#include "RealtyAsset/RealtyAsset.h"
#include "EditorGraph/RealtyEdGraph.h"
#include "EditorGraph/Node/EntryNode/EntryNode.h"
#include "ToolKit/RealtyAssetToolKitEditor.h"


FRealtyAssetToolKitAction::FRealtyAssetToolKitAction()
{

}


void FRealtyAssetToolKitAction::OpenAssetEditor(const TArray<UObject*>& InObjects, TSharedPtr<class IToolkitHost> EditWithinLevelEditor)
{
	EToolkitMode::Type Mode = EditWithinLevelEditor.IsValid() ? EToolkitMode::WorldCentric : EToolkitMode::Standalone;

	for (auto ObjIt = InObjects.CreateConstIterator(); ObjIt; ++ObjIt)
	{
		if (URealtyAsset* a = Cast<URealtyAsset>(*ObjIt))
		{
			TSharedRef<FRealtyAssetToolKitEditor> NewEditor(MakeShareable(new FRealtyAssetToolKitEditor()));
			NewEditor->InitEditor(Mode, EditWithinLevelEditor, a);
			
		}
	}
}

FText FRealtyAssetToolKitAction::GetName() const
{
	return FText::FromString(URealtyAsset::StaticClass()->GetFName().ToString());
}

UClass* FRealtyAssetToolKitAction::GetSupportedClass() const
{
	return URealtyAsset::StaticClass();
}

FColor FRealtyAssetToolKitAction::GetTypeColor() const
{
	return FColor::Red;
}

uint32 FRealtyAssetToolKitAction::GetCategories()
{
	IAssetTools& AssetTools = FModuleManager::Get().LoadModuleChecked<FAssetToolsModule>("AssetTools").Get();
	EAssetTypeCategories::Type NewCategory = AssetTools.RegisterAdvancedAssetCategory(FName(TEXT("RealtyAssetCategory")), NSLOCTEXT("AssetTypeActions_RealtyAsset", "RealtyAssetCategory", "DZ Realty"));
	return NewCategory;
}

