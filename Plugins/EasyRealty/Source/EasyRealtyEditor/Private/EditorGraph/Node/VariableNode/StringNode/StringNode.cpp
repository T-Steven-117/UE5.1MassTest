// Fill out your copyright notice in the Description page of Project Settings.


#include "EditorGraph/Node/VariableNode/StringNode/StringNode.h"

UStringNode::UStringNode()
{
	VariableName = *FString::Printf(TEXT("%s"), *GetClass()->GetName());
}

void UStringNode::AllocateDefaultPins()
{
	CreatePin(EEdGraphPinDirection::EGPD_Output, TEXT("string"), FName(), VariableName);
}

#if WITH_EDITOR
void UStringNode::PostEditChangeChainProperty(struct FPropertyChangedChainEvent& PropertyChangedEvent)
{
	if (PropertyChangedEvent.GetPropertyName() == "VariableName")
	{
		Pins[0]->PinName = VariableName;
	}
	else if (PropertyChangedEvent.GetPropertyName() == "Value")
	{
		Pins[0]->DefaultValue = Value;
	}

	Super::PostEditChangeChainProperty(PropertyChangedEvent);
}
#endif
