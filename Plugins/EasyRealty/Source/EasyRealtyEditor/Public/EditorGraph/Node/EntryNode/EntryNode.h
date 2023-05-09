#pragma once

#include "CoreMinimal.h"
#include "../K3EdGraphNode.h"
#include "RealtyAsset/RealtyAsset.h"

#include "EntryNode.generated.h"


UCLASS()
class UEntryNode : public UK3EdGraphNode
{
	GENERATED_BODY()

public:

	UEntryNode()
	{
		type = 1;

		RealtyDataNode.SelfName = TEXT("Entry");
	}

	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;

	virtual void AllocateDefaultPins() override;

};