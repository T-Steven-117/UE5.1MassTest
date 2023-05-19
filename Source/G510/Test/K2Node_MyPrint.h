// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "K2Node.h"
#include "K2Node_CallFunction.h"
#include "KismetCompiler.h"
#include "BlueprintActionDatabaseRegistrar.h"
#include "BlueprintNodeSpawner.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "KismetNodes/SGraphNodeK2Base.h"
#include "UObject/ObjectMacros.h"
#include "K2Node_MyPrint.generated.h"


/**
 * 
 */


UCLASS()
class G510_API UK2Node_MyPrint : public UK2Node
{
	GENERATED_BODY()
	
public:
	virtual FText GetTooltipText()const override
	{
		return FText::FromString("Printf");
	}

	virtual FText GetNodeTitle(ENodeTitleType::Type TitleType)const override
	{
		return FText::FromString(TEXT("Printf"));
	}
	virtual void GetMenuActions(FBlueprintActionDatabaseRegistrar& ActionRegister)const override
	{
		UClass* ActionKey = GetClass();
		if (ActionRegister.IsOpenForRegistration(ActionKey))
		{
			UBlueprintNodeSpawner* NodeSpawner = UBlueprintNodeSpawner::Create(GetClass());
			check(NodeSpawner);
			ActionRegister.AddBlueprintAction(ActionKey, NodeSpawner);
		}
	}

	virtual void GetNodeContextMenuActions(class UToolMenu* Menu, class UGraphNodeContextMenuContext* Context) const override;

	virtual FText GetMenuCategory()const {
		return FText::FromString(TEXT("BlueprintLibraryUtility|IO"));
	}
	UEdGraphPin* GetThenPin() const
	{
		UEdGraphPin* Pin = FindPin(UEdGraphSchema_K2::PN_Then);
		check(Pin == nullptr || Pin->Direction == EGPD_Output); // If pin exists, it must be output
		return Pin;
	}


	virtual void ExpandNode(FKismetCompilerContext& CompilerContext, UEdGraph* SourceGraph)override;
	virtual void AllocateDefaultPins()override;
	virtual void PinDefaultValueChanged(UEdGraphPin* ChangedPin)override;



	void AddPinToNode();
	void RemoveInputPin(UEdGraphPin* Pin);
#if WITH_EDITOR
	//UFUNCTION(BlueprintCallable, meta = (CallableWithoutWorldContext = true, WorldContext = "context"))
		virtual TSharedPtr<SGraphNode> CreateVisualWidget() override;
#endif
private:
	UPROPERTY()
		TArray<FName> ArgPinNames;

	static FName PN_PrintToSreen;
	static FName PN_PrintToLog;
	static FName PN_Color;
	static FName PN_Duration;
};
