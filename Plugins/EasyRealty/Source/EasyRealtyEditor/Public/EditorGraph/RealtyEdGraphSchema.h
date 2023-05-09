// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EdGraph/EdGraphSchema.h"
#include "RealtyEdGraphSchema.generated.h"

/**
 * 
 */

 /** Action to add a comment to the graph */
USTRUCT()
struct FSchemaAction_AddComment : public FEdGraphSchemaAction
{
	GENERATED_BODY()

		FSchemaAction_AddComment() : FEdGraphSchemaAction() {}
	FSchemaAction_AddComment(FText InDescription, FText InToolTip)
		: FEdGraphSchemaAction(FText(), MoveTemp(InDescription), MoveTemp(InToolTip), 0)
	{
	}

	// FEdGraphSchemaAction interface
	virtual UEdGraphNode* PerformAction(class UEdGraph* ParentGraph, UEdGraphPin* FromPin, const FVector2D Location, bool bSelectNewNode = true) override final;
	// End of FEdGraphSchemaAction interface
};


UCLASS()
class EASYREALTYEDITOR_API URealtyEdGraphSchema : public UEdGraphSchema
{
	GENERATED_BODY()

public:
	virtual FLinearColor GetPinTypeColor(const FEdGraphPinType& PinType) const ;
	
	virtual class FConnectionDrawingPolicy* CreateConnectionDrawingPolicy(int32 InBackLayerID, int32 InFrontLayerID, float InZoomFactor, const FSlateRect& InClippingRect, class FSlateWindowElementList& InDrawElements, class UEdGraph* InGraphObj) const override;

	virtual void GetGraphContextActions(FGraphContextMenuBuilder& ContextMenuBuilder) const;

	virtual const FPinConnectionResponse CanCreateConnection(const UEdGraphPin* A, const UEdGraphPin* B) const
	{
		if (A != B &&  A->PinType.PinCategory == B->PinType.PinCategory && A->Direction != B->Direction)
		{
			return FPinConnectionResponse(CONNECT_RESPONSE_BREAK_OTHERS_B, TEXT("Connect by type A"));
		}
		else
		{
			return FPinConnectionResponse(CONNECT_RESPONSE_DISALLOW, TEXT("Not implemented by this schema"));
		}
	}

	virtual bool ShouldAlwaysPurgeOnModification() const { return false; }
	virtual void GetContextMenuActions(class UToolMenu* Menu, class UGraphNodeContextMenuContext* Context) const override;

	virtual void CreateDefaultNodesForGraph(UEdGraph& Graph) const override;

	virtual TSharedPtr<FEdGraphSchemaAction> GetCreateCommentAction() const override;
};

