// Fill out your copyright notice in the Description page of Project Settings.


#include "Runtime/RealtyGameModeBase.h"
#include "Runtime/RealtyPlayerController.h"
#include "Runtime/RealtyPawn.h"

ARealtyGameModeBase::ARealtyGameModeBase()
{
	PlayerControllerClass = ARealtyPlayerController::StaticClass();
	DefaultPawnClass = ARealtyPawn::StaticClass();
}

