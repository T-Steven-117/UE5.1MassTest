#pragma once

#include "CoreMinimal.h"
#include "../K3EdGraphNode.h"
#include "RealtyAsset/RealtyAsset.h"

#include "TravelNode.generated.h"


UCLASS()
class UTravelNode : public UK3EdGraphNode
{
	GENERATED_BODY()

public:

	UTravelNode() 
	{
		type = 2;
	}

	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType) const override;

	virtual void AllocateDefaultPins() override;

	virtual void PinDefaultValueChanged(UEdGraphPin* Pin) override;

	virtual void ReconstructNode() override;

	virtual void PinConnectionListChanged(UEdGraphPin* Pin) override;

	void RebuildNode();

	void RebuildSubNode();
	void SetPointTargetTransform(const FTransform &tf);


	virtual void PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent) override;

	bool IsDependPointTargetPin(const FName &PinName);
	void Rebuild_DependOnPointTargetClassNodes();



	bool IsDependTargetSequencePin(const FName& PinName);
	void Rebuild_DependOnTargetSequencNodes();

};