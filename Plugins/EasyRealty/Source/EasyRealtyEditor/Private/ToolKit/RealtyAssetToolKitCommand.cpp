#include "ToolKit/RealtyAssetToolKitCommand.h"
#include "EditorStyleSet.h"

#define LOCTEXT_NAMESPACE "RealtyAssetToolKitCommandNS"

FRealtyAssetToolKitCommand::FRealtyAssetToolKitCommand()
	: TCommands<FRealtyAssetToolKitCommand>(
	TEXT("RealtyGraphEditor"),
	FText::FromString("RealtyGraphEditor"),
	NAME_None,
	FEditorStyle::GetStyleSetName()
	)
{

}

void FRealtyAssetToolKitCommand::RegisterCommands()
{
	UI_COMMAND(Complie,"Compile", "Compile", EUserInterfaceActionType::ToggleButton, FInputChord());
	UI_COMMAND(BugList, "BugLists", "BugLists", EUserInterfaceActionType::ToggleButton, FInputChord());
}

