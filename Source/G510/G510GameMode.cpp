// Copyright Epic Games, Inc. All Rights Reserved.

#include "G510GameMode.h"
#include "G510Character.h"
#include "UObject/ConstructorHelpers.h"
#include "Templates/Function.h"
#include "Misc/AutomationTest.h"


//IMPLEMENT_SIMPLE_AUTOMATION_TEST(FAsyncVoidTaskTest, "System.Core.Async.Async (Void)", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
AG510GameMode::AG510GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/AI/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	//IMPLEMENT_SIMPLE_AUTOMATION_TEST(FAsyncVoidTaskTest, "System.Core.Async.Async (Void)", EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)
	
}
