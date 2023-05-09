#include "EditorGraph/Node/EntryNode/EntryNode.h"

FText UEntryNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	return FText::FromString(TEXT("EntryNode"));
}

void UEntryNode::AllocateDefaultPins()
{
	CreatePin(EEdGraphPinDirection::EGPD_Output, TEXT("exec"), TEXT(""), TEXT("Link"));
}
