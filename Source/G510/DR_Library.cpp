// Fill out your copyright notice in the Description page of Project Settings.


#include "DR_Library.h"
#include "DataRegistrySubsystem.h"
#include "DataRegistry.h"

TArray<FDataRegistryId> UDR_Library::GetAllRegistryIds(const UObject* WorldContextObject, FDataRegistryType RegistryType)
{
	TArray<FDataRegistryId>Ids;
	UDataRegistrySubsystem* Subsystem = GEngine->GetEngineSubsystem<UDataRegistrySubsystem>();
	if (!Subsystem)
	{
		return Ids;
	}
	UDataRegistry* Registry = Subsystem->GetRegistryForType(RegistryType);
	if (!Registry)
	{
		UE_LOG(LogTemp, Error, TEXT("Cannot find UDataRegistry:%s"), *RegistryType.ToString());
		return Ids;
	}
	Registry->GetPossibleRegistryIds(Ids);
	return Ids;        
}

void UDR_Library::SayHello_Internal()
{
	if (GEngine) {
		const int32 AlwaysAddKey = -1;

		GEngine->AddOnScreenDebugMessage(AlwaysAddKey,
			5.0f,
			FColor::Purple,
			TEXT("Hello World!")
		);
	}
}

void UDR_Library::SaySomething_Internal(const TArray<FString>& InWords)
{
	FString OutString(TEXT("SaySomething Called:"));
	for (const auto& Word : InWords)
		OutString += Word;

	if (GEngine) {
		const int32 AlwaysAddKey = -1;

		GEngine->AddOnScreenDebugMessage(AlwaysAddKey,
			5.0f,
			FColor::Purple,
			OutString
		);
	}
}

void UDR_Library::Generic_ShowStructFields(const void* StructAddr, const FProperty* StructProperty)
{
	//UScriptStruct* Struct = StructProperty->Struct;
	//for (TFieldIterator<FProperty> iter(); iter; ++iter) {

	//	FScreenMessageString NewMessage;
	//	NewMessage.CurrentTimeDisplayed = 0.0f;
	//	NewMessage.Key = INDEX_NONE;
	//	NewMessage.DisplayColor = FColor::Blue;
	//	NewMessage.TimeToDisplay = 5;
	//	NewMessage.ScreenMessage = FString::Printf(TEXT("Property: [%s].[%s]"),
	//		*(Struct->GetName()),
	//		*(iter->GetName())
	//	);
	//	NewMessage.TextScale = FVector2D::UnitVector;
		//GEngine->PriorityScreenMessages.Insert(NewMessage, 0);
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Blue, FString::Printf(TEXT("Property: [%s]"),*(StructProperty->GetName())));
	//}
}

  