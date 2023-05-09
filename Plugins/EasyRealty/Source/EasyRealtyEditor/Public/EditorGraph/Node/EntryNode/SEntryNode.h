#pragma once

#include "CoreMinimal.h"
#include "SGraphNode.h"


class SEntryNode : public SGraphNode
{

public:

	SLATE_BEGIN_ARGS(SEntryNode) {}

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, class UEntryNode* InNode);

	virtual void UpdateGraphNode() override;

	virtual void AddPin(const TSharedRef<SGraphPin>& PinToAdd);

	TSharedPtr<class SVerticalBox> RightWidget;

	const struct FRealtyEditorSlateStyle* slatestyle;
};