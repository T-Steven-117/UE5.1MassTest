// Fill out your copyright notice in the Description page of Project Settings.


#include "EditorGraph/Node/K3EdGraphNode.h"
#include <UObject/UnrealType.h>


UK3EdGraphNode::UK3EdGraphNode()
{

}



FText UK3EdGraphNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return FText::FromString(FString::FromInt(type));
}


void UK3EdGraphNode::AllocateDefaultPins()
{
	
}


UEdGraphPin* UK3EdGraphNode::CreatePinType(EEdGraphPinDirection dir, FProperty* p,UObject *PinSub)
{
	UEdGraphPin* R = nullptr;
	if (p->IsA(FBoolProperty::StaticClass()))
	{
		R = CreatePin(dir, TEXT("bool"), TEXT(""), p->GetFName());
	}
	else if (p->IsA(FIntProperty::StaticClass()))
	{
		R = CreatePin(dir, TEXT("int"), TEXT(""), p->GetFName());
	}
	else if (p->IsA(FStrProperty::StaticClass()))
	{
		R = CreatePin(dir, TEXT("string"), TEXT(""), p->GetFName());
	}
	else if (p->IsA(FClassProperty::StaticClass()))
	{
		R = CreatePin(dir, TEXT("class"), TEXT(""), PinSub, p->GetFName());
	}
	else if (p->IsA(FFloatProperty::StaticClass()))
	{
		R = CreatePin(dir, TEXT("float"), TEXT(""), PinSub, p->GetFName());
		R->GetSchema()->TrySetDefaultValue(*R, "1.0");
		R->GetOwningNode()->GetGraph()->NotifyGraphChanged();
	}
	else if (p->IsA(FStructProperty::StaticClass()))
	{
		R = CreatePin(dir, TEXT("struct"), TEXT(""), PinSub, p->GetFName());
	}

	return R;
}

void UK3EdGraphNode::ResetNodeOwner()
{
	UEdGraph* MyGraph = GetGraph();
	UObject* GraphOwner = MyGraph ? MyGraph : nullptr;

	this->Rename(NULL, GraphOwner, REN_DontCreateRedirectors | REN_DoNotDirty);
	this->ClearFlags(RF_Transient);
}

void UK3EdGraphNode::UpdateNodeClassData()
{
	this->PostEditChange();
}

void UK3EdGraphNode::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) //
{

}
