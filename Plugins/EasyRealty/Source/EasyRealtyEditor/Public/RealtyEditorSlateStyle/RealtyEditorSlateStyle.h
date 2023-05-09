// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyle.h"
#include "SlateBasics.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "RealtyEditorSlateStyle.generated.h"

class FRealtyEditorSlateStyleHelper
{
public:

	static void Initialized();

	static void Shutdown();

	static FName GetStyleName();

	static class ISlateStyle& GetStyle();


	static TSharedPtr<class FSlateStyleSet> inst;

};

/**
 *
 */
USTRUCT()
struct FRealtyEditorSlateStyle : public FSlateWidgetStyle
{
	GENERATED_USTRUCT_BODY()

public:

	FRealtyEditorSlateStyle();
	virtual ~FRealtyEditorSlateStyle();

	// FSlateWidgetStyle
	virtual void GetResources(TArray<const FSlateBrush*>& OutBrushes) const override;
	static const FName TypeName;
	virtual const FName GetTypeName() const override { return TypeName; };
	static const FRealtyEditorSlateStyle& GetDefault();


	UPROPERTY(EditAnywhere, Category = "RealtyGraphEditor") FSlateBrush EntryNodeImage;
	UPROPERTY(EditAnywhere, Category = "RealtyGraphEditor | Travel") FSlateBrush TravelNodeImage_Header;
	UPROPERTY(EditAnywhere, Category = "RealtyGraphEditor | Travel") FSlateBrush TravelNodeImage_Body;
	UPROPERTY(EditAnywhere, Category = "RealtyGraphEditor") FSlateBrush VariableNodeImage;
	UPROPERTY(EditAnywhere, Category = "RealtyGraphEditor") FSlateBrush GraphImage;



};

/**
 */
UCLASS(hidecategories = Object, MinimalAPI)
class URealtyEditorSlateStyleStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()

public:
	/** The actual data describing the widget appearance. */
	UPROPERTY(Category = Appearance, EditAnywhere, meta = (ShowOnlyInnerProperties))
		FRealtyEditorSlateStyle WidgetStyle;

	virtual const struct FSlateWidgetStyle* const GetStyle() const override
	{
		return static_cast<const struct FSlateWidgetStyle*>(&WidgetStyle);
	}
};
