#include "EditorGraph/Node/TravelNode/TravelNode.h"
#include "UMG/RealtyUserWidgetBase.h"
#include "Runtime/PointTargetActor.h"
#include <LevelSequence/Public/LevelSequence.h>

#pragma optimize("",off)

FText UTravelNode::GetNodeTitle(ENodeTitleType::Type TitleType) const
{
	if (RealtyDataNode.SelfName.IsEmpty())
	{
		return FText::FromString(TEXT("UnAssigned"));
	}

	return FText::FromString(RealtyDataNode.SelfName);
}

void UTravelNode::AllocateDefaultPins()
{
	CreatePin(EEdGraphPinDirection::EGPD_Input, TEXT("exec"), TEXT("")/*, TEXT("From")*/);

	/*for (TFieldIterator<FProperty> PropertyIt(FRealtyDataNode::StaticStruct(), EFieldIteratorFlags::IncludeSuper, EFieldIteratorFlags::ExcludeDeprecated, EFieldIteratorFlags::IncludeInterfaces); PropertyIt; ++PropertyIt)
	{
		FProperty* Prop = *PropertyIt;

		if (Prop->GetMetaData(TEXT("ExportNode")) == TEXT("true"))
		{
			if (Prop->GetFName() == TEXT("UIClassPtr"))
			{
				CreatePinType(EGPD_Input, Prop, URealtyUserWidgetBase::StaticClass());
			}
			else if (Prop->GetFName() == TEXT("PointTargetClassPtr"))
			{
				CreatePinType(EGPD_Input, Prop, APointTargetActor::StaticClass());
			}
			else if (Prop->GetFName() == TEXT("PointTargetTag"))
			{
				CreatePinType(EGPD_Input, Prop);
			}
			else if (IsDependPointTargetPin(Prop->GetFName()))
			{
			}
			else if (IsDependTargetSequencePin(Prop->GetFName()))
			{
			}
			else
			{
				CreatePinType(EGPD_Input, Prop);
			}
		}
		
	}*/

	RebuildNode();
	//Rebuild_DependOnPointTargetClassNodes();
	//Rebuild_DependOnTargetSequencNodes();
}


void UTravelNode::PinDefaultValueChanged(UEdGraphPin* Pin)
{
	if (Pin)
	{
		for (TFieldIterator<FProperty> PropertyIt(FRealtyDataNode::StaticStruct(), EFieldIteratorFlags::IncludeSuper, EFieldIteratorFlags::ExcludeDeprecated, EFieldIteratorFlags::IncludeInterfaces); PropertyIt; ++PropertyIt)
		{
			FProperty* Prop = *PropertyIt;
			if (Prop->GetMetaData(TEXT("ExportNode")) == TEXT("true"))
			{
				if (Pin->PinName == Prop->GetFName())
				{
					if (Pin->PinName == TEXT("UIClassPtr"))
					{
						/*TSubclassOf<URealtyUserWidgetBase> c1 =  LoadClass<URealtyUserWidgetBase>(nullptr, TEXT("WidgetBlueprint'/Game/NewFolder/xxxxxxxxxxx.xxxxxxxxxxx_C'"));
						c1 = nullptr;*/

						UObject* dobj = Pin->DefaultObject;
						RealtyDataNode.UIClassPtr = Cast<UClass>(dobj);

						RebuildNode();
					}
					else if (Pin->PinName == TEXT("SelfHidden"))
					{
						RealtyDataNode.SelfHidden = Pin->DefaultValue.Equals("true");
					}
					else if (Pin->PinName == TEXT("PointTargetClassPtr"))
					{
						UObject* dobj = Pin->DefaultObject;
						RealtyDataNode.PointTargetClassPtr = Cast<UClass>(dobj);
				
						Rebuild_DependOnPointTargetClassNodes();
						Rebuild_DependOnTargetSequencNodes();
					}
					else if (Pin->PinName == TEXT("PointTargetTag"))
					{
						RealtyDataNode.PointTargetTag = Pin->DefaultValue;

						Rebuild_DependOnPointTargetClassNodes();
						Rebuild_DependOnTargetSequencNodes();
					}
					else if (Pin->PinName == TEXT("TargetSequenceSoftPath"))
					{
						RealtyDataNode.TargetSequenceSoftPath = Pin->DefaultValue;

						Rebuild_DependOnTargetSequencNodes();
					}
					else if (Pin->PinName == TEXT("PointTargetLocation"))
					{
						FString S1, S2, S3;
						Pin->DefaultValue.Split(TEXT(","), &S1, &S2);
						S2.Split(TEXT(","), &S2, &S3);
						RealtyDataNode.PointTargetLocation.X = FCString::Atof(*S1);
						RealtyDataNode.PointTargetLocation.Y = FCString::Atof(*S2);
						RealtyDataNode.PointTargetLocation.Z = FCString::Atof(*S3);
					}
					else if (Pin->PinName == TEXT("PointTargetRotation"))
					{
						FString S1, S2, S3;
						Pin->DefaultValue.Split(TEXT(","), &S1, &S2);
						S2.Split(TEXT(","), &S2, &S3);
						RealtyDataNode.PointTargetRotation.Pitch = FCString::Atof(*S1);
						RealtyDataNode.PointTargetRotation.Yaw = FCString::Atof(*S2);
						RealtyDataNode.PointTargetRotation.Roll = FCString::Atof(*S3);
					}
					else if (Pin->PinName == TEXT("BlendTime"))
					{
						RealtyDataNode.BlendTime = FCString::Atof(*Pin->DefaultValue);
					}
					else if (Pin->PinName == TEXT("NoHoldTransform"))
					{
						RealtyDataNode.NoHoldTransform = Pin->DefaultValue.Equals("true");
					}
					else if (Pin->PinName == TEXT("NoTransfer"))
					{
						RealtyDataNode.NoTransfer = Pin->DefaultValue.Equals("true");
					}
				
				}
			}
		}
	}

	Super::PinDefaultValueChanged(Pin);
}

void UTravelNode::RebuildNode()
{
	//清除节点
	TArray<UEdGraphPin*> PinPendRemove;
	for (TArray<UEdGraphPin*>::TIterator it(Pins); it; ++it)
	{
		UEdGraphPin* curpin = *it;
		if (curpin->Direction == EEdGraphPinDirection::EGPD_Output)
		{
			PinPendRemove.Add(curpin);
		}
	}
	for (auto& tmp : PinPendRemove)
	{
		RemovePin(tmp);
	}
	//获取节点
	/*if (RealtyDataNode.UIClassPtr)
	{	
		for (TArray<UEdGraphPin*>::TIterator it(Pins); it; ++it)
		{
			UEdGraphPin* curpin = *it;
			if (curpin->PinName == "SelfHidden")
			{
				RemovePin(curpin);
			}
		}
		for (TFieldIterator<FProperty> PropertyIt(FRealtyDataNode::StaticStruct(), EFieldIteratorFlags::IncludeSuper, EFieldIteratorFlags::ExcludeDeprecated, EFieldIteratorFlags::IncludeInterfaces); PropertyIt; ++PropertyIt)
		{
			FProperty* Prop = *PropertyIt;
			if (Prop->GetMetaData(TEXT("ExportNode")) == TEXT("true"))
			{
				if (Prop->GetFName() == TEXT("SelfHidden"))
				{
					UEdGraphPin* pin = CreatePinType(EGPD_Input, Prop);
					PinDefaultValueChanged(pin);
				}
			}
		}
		URealtyUserWidgetBase* NB = Cast<URealtyUserWidgetBase>(RealtyDataNode.UIClassPtr->GetDefaultObject());
		if (NB)
		{
			for (int32 i = 0; i < NB->NextStringArray.Num(); ++i)
			{
				CreatePin(EEdGraphPinDirection::EGPD_Output, TEXT("exec"), TEXT(""), *NB->NextStringArray[i]);
			}
		}
		NB->ConditionalBeginDestroy();
	}
	else
	{
		for (TArray<UEdGraphPin*>::TIterator it(Pins); it; ++it)
		{
			UEdGraphPin* curpin = *it;
			if (curpin->PinName == "SelfHidden")
			{
				RemovePin(curpin);
			}
		}
	}*/
	if (RealtyDataNode.SubNodes.Num() != 0)
	{
		for (int32 i = 0; i < RealtyDataNode.SubNodes.Num(); ++i)
		{
			CreatePin(EEdGraphPinDirection::EGPD_Output, TEXT("exec"), TEXT(""), *RealtyDataNode.SubNodes[i]);
		}
	}
	GetGraph()->NotifyGraphChanged();
}

void UTravelNode::RebuildSubNode()
{
	//清除节点
	TArray<UEdGraphPin*> PinPendRemove;
	for (TArray<UEdGraphPin*>::TIterator it(Pins); it; ++it)
	{
		UEdGraphPin* curpin = *it;
		if (curpin->Direction == EEdGraphPinDirection::EGPD_Output)
		{
			PinPendRemove.Add(curpin);
		}
	}
	for (auto& tmp : PinPendRemove)
	{
		RemovePin(tmp);
	}
	if (RealtyDataNode.SubNodes.Num() != 0)
	{
		for (int32 i = 0; i < RealtyDataNode.SubNodes.Num(); ++i)
		{
			CreatePin(EEdGraphPinDirection::EGPD_Output, TEXT("exec"), TEXT(""), *RealtyDataNode.SubNodes[i]);
		}
	}
	GetGraph()->NotifyGraphChanged();
}

void UTravelNode::SetPointTargetTransform(const FTransform& tf)
{
	FVector Loc = tf.GetLocation();
	FRotator Rot = tf.GetRotation().Rotator();


	//const FScopedTransaction Transaction(NSLOCTEXT("GraphEditor", "ChangeVectorPinValue", "Change Vector Pin Value"));
	
	for (TArray<UEdGraphPin*>::TIterator it(Pins); it; ++it)
	{
		UEdGraphPin* curpin = *it;
		if (curpin->PinName == TEXT("PointTargetLocation"))
		{
			curpin->Modify();
			FString DefalutValue = FString::Printf(TEXT("%f,%f,%f"), Loc.X, Loc.Y, Loc.Z);
			curpin->GetSchema()->TrySetDefaultValue(*curpin, DefalutValue);
		}
		else if (curpin->PinName == TEXT("PointTargetRotation"))
		{
			curpin->Modify();
			FString DefalutValue = FString::Printf(TEXT("%f,%f,%f"), Rot.Pitch, Rot.Yaw, Rot.Roll);
			curpin->GetSchema()->TrySetDefaultValue(*curpin, DefalutValue);
		}
	}

	

	GetGraph()->NotifyGraphChanged();
}

void UTravelNode::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	for (TFieldIterator<FProperty> PropertyIt(FRealtyDataNode::StaticStruct(), EFieldIteratorFlags::IncludeSuper, EFieldIteratorFlags::ExcludeDeprecated, EFieldIteratorFlags::IncludeInterfaces); PropertyIt; ++PropertyIt)
	{
		FProperty* Prop = *PropertyIt;
		if (PropertyChangedEvent.Property->GetFName() ==TEXT("SubNodes"))
		{
			RebuildSubNode();
		}
	}
}

bool UTravelNode::IsDependPointTargetPin(const FName& PinName)
{

	if (
		PinName == TEXT("TargetSequenceSoftPath") || 
		PinName == TEXT("PointTargetLocation") ||
		PinName == TEXT("PointTargetRotation")	||
		PinName == TEXT("BlendTime")	||
		PinName == TEXT("------------------------------")
		)
	{
		return true;
	}

	return false;
}

void UTravelNode::Rebuild_DependOnPointTargetClassNodes()
{
	//清除节点
	TArray<UEdGraphPin*> PinPendRemove;
	for (TArray<UEdGraphPin*>::TIterator it(Pins); it; ++it)
	{
		UEdGraphPin* curpin = *it;
		if (IsDependPointTargetPin(curpin->PinName))
		{
			PinPendRemove.Add(curpin);
		}
	}
	for (auto& tmp : PinPendRemove)
	{
		RemovePin(tmp);
	}

	if (RealtyDataNode.PointTargetClassPtr)
	{
		for (TFieldIterator<FProperty> PropertyIt(FRealtyDataNode::StaticStruct(), EFieldIteratorFlags::IncludeSuper, EFieldIteratorFlags::ExcludeDeprecated, EFieldIteratorFlags::IncludeInterfaces); PropertyIt; ++PropertyIt)
		{
			FProperty* Prop = *PropertyIt;
			if (Prop->GetMetaData(TEXT("ExportNode")) == TEXT("true"))
			{
				if (Prop->GetFName() == TEXT("TargetSequenceSoftPath"))
				{
					CreatePin(EGPD_Input, TEXT("softobject"), ULevelSequence::StaticClass(), Prop->GetFName());
				}
				else if (Prop->GetFName() == TEXT("PointTargetLocation"))
				{
					CreatePin(EEdGraphPinDirection::EGPD_Input, TEXT("Start"), TEXT(""), TEXT("------------------------------"));
					CreatePinType(EGPD_Input, Prop, TBaseStructure<FVector>::Get());
				}
				else if (Prop->GetFName() == TEXT("PointTargetRotation"))
				{
					CreatePinType(EGPD_Input, Prop, TBaseStructure<FRotator>::Get());
					CreatePin(EEdGraphPinDirection::EGPD_Input, TEXT("Start"), TEXT(""), TEXT("------------------------------"));
				}
				else if (Prop->GetFName() == TEXT("BlendTime"))
				{
					CreatePinType(EGPD_Input, Prop);
				}
			}
		}
	}
	else if (!RealtyDataNode.PointTargetTag.IsEmpty())
	{
		for (TFieldIterator<FProperty> PropertyIt(FRealtyDataNode::StaticStruct(), EFieldIteratorFlags::IncludeSuper, EFieldIteratorFlags::ExcludeDeprecated, EFieldIteratorFlags::IncludeInterfaces); PropertyIt; ++PropertyIt)
		{
			FProperty* Prop = *PropertyIt;
			if (Prop->GetMetaData(TEXT("ExportNode")) == TEXT("true"))
			{
				if (Prop->GetFName() == TEXT("TargetSequenceSoftPath"))
				{
					CreatePin(EGPD_Input, TEXT("softobject"), ULevelSequence::StaticClass(), Prop->GetFName());
				}
				else if (Prop->GetFName() == TEXT("BlendTime"))
				{
					CreatePinType(EGPD_Input, Prop);
				}
			}
		}
	}

	GetGraph()->NotifyGraphChanged();
}

bool UTravelNode::IsDependTargetSequencePin(const FName& PinName)
{
	if (
		PinName == TEXT("NoHoldTransform")
		|| PinName == TEXT("NoTransfer")
		)
	{
		return true;
	}

	return false;
}

void UTravelNode::Rebuild_DependOnTargetSequencNodes()
{
	//清除节点
	TArray<UEdGraphPin*> PinPendRemove;
	for (TArray<UEdGraphPin*>::TIterator it(Pins); it; ++it)
	{
		UEdGraphPin* curpin = *it;
		if (IsDependTargetSequencePin(curpin->PinName))
		{
			PinPendRemove.Add(curpin);
		}
	}
	for (auto& tmp : PinPendRemove)
	{
		RemovePin(tmp);
	}

	if (
		(RealtyDataNode.PointTargetClassPtr || !RealtyDataNode.PointTargetTag.IsEmpty())
		&& 
		RealtyDataNode.TargetSequenceSoftPath.Equals(TEXT("None")))
	{
		for (TFieldIterator<FProperty> PropertyIt(FRealtyDataNode::StaticStruct(), EFieldIteratorFlags::IncludeSuper, EFieldIteratorFlags::ExcludeDeprecated, EFieldIteratorFlags::IncludeInterfaces); PropertyIt; ++PropertyIt)
		{
			FProperty* Prop = *PropertyIt;
			if (Prop->GetMetaData(TEXT("ExportNode")) == TEXT("true"))
			{
				if (Prop->GetFName() == TEXT("NoHoldTransform"))
				{
					CreatePinType(EGPD_Input, Prop);
				}
				else if (Prop->GetFName() == TEXT("NoTransfer"))
				{
					CreatePinType(EGPD_Input, Prop);
				}
			}

		}
	}

	GetGraph()->NotifyGraphChanged();
}


void UTravelNode::ReconstructNode()
{
	RebuildNode();
}

void UTravelNode::PinConnectionListChanged(UEdGraphPin* Pin)
{

	if (Pin->Direction == EEdGraphPinDirection::EGPD_Input )
	{
		if (Pin->PinType.PinCategory == TEXT("exec"))
		{
			bool HasConnected = false;
			for (int32 k = 0; k < Pin->LinkedTo.Num(); ++k)
			{
				UEdGraphPin* pp = Pin->LinkedTo[k];
				if (pp)
				{
					UK3EdGraphNode * n = Cast<UK3EdGraphNode>(pp->GetOwningNode());
					if (n)
					{
						if (n->type == 1)
						{
							RealtyDataNode.SelfName = TEXT("Entry");
						}
						else if (n->type == 2)
						{
							RealtyDataNode.SelfName = pp->PinName.ToString();

							for(auto It = Pins.CreateIterator(); It; ++It)
							{
								UEdGraphPin* PinPtr = *It;
								UTravelNode* nodetemp=Cast<UTravelNode>(PinPtr->GetOwningNode());
								nodetemp->RealtyDataNode.PointTargetTag= *pp->PinName.ToString();
								bool bSetPointTargetTagSucceed = false;
								if(PinPtr->GetFName() == TEXT("PointTargetTag"))
								{
									PinPtr->Modify();
									PinPtr->DefaultValue = pp->PinName.ToString();
									PinDefaultValueChanged(PinPtr);
									
									bSetPointTargetTagSucceed = true;
								}
								if(bSetPointTargetTagSucceed)
									break;
							}
						}
						HasConnected = true;
					}
				}
				break;
			}
			if (!HasConnected)
			{
				RealtyDataNode.SelfName.Empty();
			}
		}
		else
		{
			//变量
			bool HasConnected = false;
			FString Value;
			for (int32 k = 0; k < Pin->LinkedTo.Num(); ++k)
			{
				UEdGraphPin* pp = Pin->LinkedTo[k];
				if (pp)
				{
					UVariableNode* n = Cast<UVariableNode>(pp->GetOwningNode());
					if (n)
					{
						//RealtyDataNode.SelfName = pp->PinName.ToString();
						for (TFieldIterator<FProperty> PropertyIt(FRealtyDataNode::StaticStruct(), EFieldIteratorFlags::IncludeSuper, EFieldIteratorFlags::ExcludeDeprecated, EFieldIteratorFlags::IncludeInterfaces); PropertyIt; ++PropertyIt)
						{
							FProperty* Prop = *PropertyIt;
							if (Prop->GetFName() == Pin->PinName)
							{
								if (Prop->IsA(FStrProperty::StaticClass()))
								{
									Value = pp->DefaultValue;

									FStrProperty* StrProperty = CastField<FStrProperty>(Prop);
									StrProperty->ImportText(*Value, StrProperty->ContainerPtrToValuePtr<void*>(&RealtyDataNode), PPF_None,nullptr);

									Rebuild_DependOnPointTargetClassNodes();
									Rebuild_DependOnTargetSequencNodes();
								}

								HasConnected = true;
								break;
							}
						}
					}
				}
				break;
			}

			if (!HasConnected)
			{
				//RealtyDataNode.SelfName.Empty();
				for (TFieldIterator<FProperty> PropertyIt(FRealtyDataNode::StaticStruct(), EFieldIteratorFlags::IncludeSuper, EFieldIteratorFlags::ExcludeDeprecated, EFieldIteratorFlags::IncludeInterfaces); PropertyIt; ++PropertyIt)
				{
					FProperty* Prop = *PropertyIt;
					if (Prop->GetFName() == Pin->PinName)
					{
						if (Prop->IsA(FStrProperty::StaticClass()))
						{
							FStrProperty* StrProperty = CastField<FStrProperty>(Prop);
							StrProperty->ImportText(*Value, StrProperty->ContainerPtrToValuePtr<void*>(&RealtyDataNode), PPF_None, nullptr);
					
							Rebuild_DependOnPointTargetClassNodes();
							Rebuild_DependOnTargetSequencNodes();
						}
						break;
					}
				}
			}

		}


		GetGraph()->NotifyGraphChanged();
	}

	Super::PinConnectionListChanged(Pin);
}

#pragma optimize("",on)

// UEdGraphSchema_K2::PC_Boolean