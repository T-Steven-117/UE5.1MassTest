#include "EditorGraph/Factory/GraphFactory.h"
#include "EditorGraph/Node/TravelNode/TravelNode.h"
#include "EditorGraph/Node/TravelNode/STravelNode.h"
#include "EditorGraph/RealtyEdGraphSchema.h"
#include <NodeFactory.h>
#include "EditorGraph/Node/EntryNode/EntryNode.h"
#include "EditorGraph/Node/EntryNode/SEntryNode.h"
#include <SGraphPin.h>
#include "EditorGraph/Node/VariableNode/VariableNode.h"
#include "EditorGraph/Node/VariableNode/SVariableNode.h"
#include "EditorGraph/ConnectionDrawingPolicy/RealtyConnectionDrawingPolicy.h"


TSharedPtr<class SGraphNode> FRealtyGraphNodeFactory::CreateNode(class UEdGraphNode* Node) const
{
	if (UTravelNode* n0 = Cast<UTravelNode>(Node))
	{
		return SNew(STravelNode, n0);
	}
	else if (UEntryNode* n1 = Cast<UEntryNode>(Node))
	{
		return SNew(SEntryNode, n1);
	}
	else if (UVariableNode* MarkerNode = Cast<UVariableNode>(Node))
	{
		//µ•∂¿¥¶¿Ìobject
		return SNew(SVariableNode, MarkerNode);
	}

	return nullptr;
}

TSharedPtr<class SGraphPin> FRealtyGraphNodePinFactory::CreatePin(class UEdGraphPin* Pin) const
{
	TSharedPtr<class SGraphPin> NewPin;
	if (const URealtyEdGraphSchema* K2Schema = Cast<const URealtyEdGraphSchema>(Pin->GetSchema()))
	{
		NewPin = FNodeFactory::CreateK2PinWidget(Pin);
		/*if (NewPin.IsValid())
			NewPin->SetColorAndOpacity(FLinearColor(0.4,0.1,0.7,1));*/
	}

	return NewPin;
}




class FConnectionDrawingPolicy* FRealtyGraphConnectionFactory::CreateConnectionPolicy(const class UEdGraphSchema* Schema, int32 InBackLayerID, int32 InFrontLayerID, float ZoomFactor, const class FSlateRect& InClippingRect, class FSlateWindowElementList& InDrawElements, class UEdGraph* InGraphObj) const
{
	if (Schema->IsA(URealtyEdGraphSchema::StaticClass()))
	{
		return new FRealtyConnectionDrawingPolicy(InBackLayerID, InFrontLayerID, ZoomFactor, InClippingRect, InDrawElements, InGraphObj);
	}

	return nullptr;
}
