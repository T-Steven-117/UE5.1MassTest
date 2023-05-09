#pragma once

#include "CoreMinimal.h"
#include "EdGraphUtilities.h"


struct FRealtyGraphNodeFactory : public FGraphPanelNodeFactory
{
public:

	FRealtyGraphNodeFactory() {}


	virtual TSharedPtr<class SGraphNode> CreateNode(class UEdGraphNode* Node) const;
};







struct FRealtyGraphNodePinFactory : public FGraphPanelPinFactory
{
public:

	FRealtyGraphNodePinFactory() {}

	virtual TSharedPtr<class SGraphPin> CreatePin(class UEdGraphPin* Pin) const;


};

struct FRealtyGraphConnectionFactory : public FGraphPanelPinConnectionFactory
{
public:
	virtual class FConnectionDrawingPolicy* CreateConnectionPolicy(const class UEdGraphSchema* Schema, int32 InBackLayerID, int32 InFrontLayerID, float ZoomFactor, const class FSlateRect& InClippingRect, class FSlateWindowElementList& InDrawElements, class UEdGraph* InGraphObj) const override;
};