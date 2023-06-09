// Fill out your copyright notice in the Description page of Project Settings.


#include "RealtyAsset/RealtyAsset.h"
#include "UMG/RealtyUserWidgetBase.h"

void URealtyAsset::AddReferencedObjects(UObject* InThis, FReferenceCollector& Collector)
{
#if WITH_EDITORONLY_DATA
	Collector.AddReferencedObject(CastChecked<URealtyAsset>(InThis)->GraphObject, CastChecked<URealtyAsset>(InThis));
#endif

	Super::AddReferencedObjects(InThis, Collector);

}

bool URealtyAsset::IsValidNode(const FString& Name)
{     
	for (const auto& tmp : RealtyDataNodes)
	{
		if (tmp.SelfName == Name)
		{
			return true;
		}
	}

	return false;
}

FString URealtyAsset::GetFirstDataName()
{
	return EntryName;
}

FString URealtyAsset::FindParentName(const FString& Name)
{
	for (const auto &tmp : RealtyDataNodes)
	{
		if (tmp.SelfName == Name)
		{
			return tmp.ParentName;
		}
	}

	return "";
}

const FRealtyDataNode *URealtyAsset::GetDataNode(const FString& Name)
{
	for (const auto& tmp : RealtyDataNodes)
	{
		if (tmp.SelfName == Name)
		{
			return &tmp;
		}
	}

	return nullptr;
}
