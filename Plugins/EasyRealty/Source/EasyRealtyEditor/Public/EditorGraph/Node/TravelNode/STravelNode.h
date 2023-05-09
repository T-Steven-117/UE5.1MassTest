#pragma once

#include "CoreMinimal.h"
#include "SGraphNode.h"


class STravelNode : public SGraphNode
{

public:

	SLATE_BEGIN_ARGS(STravelNode) {}

	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs, class UTravelNode* InNode);

	virtual void UpdateGraphNode() override;

	virtual void AddPin(const TSharedRef<SGraphPin>& PinToAdd);

	virtual void CreateContent();

	TSharedPtr<class SVerticalBox> LeftWidget;

	TSharedPtr<class SVerticalBox> RightWidget;

	TSharedPtr<SBox> ContentWidget;

	const struct FRealtyEditorSlateStyle* slatestyle;

};