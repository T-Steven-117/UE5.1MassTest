// Fill out your copyright notice in the Description page of Project Settings.
#include "RealtyEditorSlateStyle/RealtyEditorSlateStyle.h"
#include "Runtime/Engine/Public/Slate/SlateGameResources.h"
#include "SlateBasics.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"

TSharedPtr<class FSlateStyleSet> FRealtyEditorSlateStyleHelper::inst = nullptr;

const FName FRealtyEditorSlateStyle::TypeName(TEXT("FRealtyEditorSlateStyle"));

void FRealtyEditorSlateStyleHelper::Initialized()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(FRealtyEditorSlateStyleHelper::GetStyleName());
	if (!inst.IsValid())
	{
		inst = FSlateGameResources::New(FRealtyEditorSlateStyleHelper::GetStyleName(), TEXT("/EasyRealty/Core"), TEXT("/EasyRealty/Core"));
	}
	FSlateStyleRegistry::RegisterSlateStyle(*FRealtyEditorSlateStyleHelper::inst);

}

void FRealtyEditorSlateStyleHelper::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(FRealtyEditorSlateStyleHelper::GetStyleName());
}

FName FRealtyEditorSlateStyleHelper::GetStyleName()
{
	static FName stylename(TEXT("RealtyEditorSlateStyle"));
	return stylename;
}

class ISlateStyle& FRealtyEditorSlateStyleHelper::GetStyle()
{
	return *inst;
}

FRealtyEditorSlateStyle::FRealtyEditorSlateStyle()
{
}

FRealtyEditorSlateStyle::~FRealtyEditorSlateStyle()
{
}

const FRealtyEditorSlateStyle& FRealtyEditorSlateStyle::GetDefault()
{
	static FRealtyEditorSlateStyle Default;
	return Default;
}

void FRealtyEditorSlateStyle::GetResources(TArray<const FSlateBrush*>& OutBrushes) const
{
	// Add any brush resources here so that Slate can correctly atlas and reference them
}

