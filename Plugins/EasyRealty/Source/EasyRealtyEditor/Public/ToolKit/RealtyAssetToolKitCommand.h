#pragma once

#include "CoreMinimal.h"
#include <Framework/Commands/Commands.h>



class FRealtyAssetToolKitCommand : public TCommands<FRealtyAssetToolKitCommand>
{


public:

	FRealtyAssetToolKitCommand();

	virtual void RegisterCommands();


	TSharedPtr<FUICommandInfo> Complie;
	TSharedPtr<FUICommandInfo> BugList;
};