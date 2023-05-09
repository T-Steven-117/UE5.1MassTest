#pragma once

#include "SGraphNode.h"
#include "../K3EdGraphNode.h"


class SVariableNode : public SGraphNode
{
public:
	SLATE_BEGIN_ARGS(SVariableNode)
	{}
	SLATE_END_ARGS()

		void Construct(const FArguments& InArgs, UK3EdGraphNode* MarkerNode);

	virtual void UpdateGraphNode() override;

	const struct FRealtyEditorSlateStyle* slatestyle;
};