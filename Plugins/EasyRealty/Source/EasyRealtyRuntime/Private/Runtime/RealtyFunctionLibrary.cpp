// Fill out your copyright notice in the Description page of Project Settings.


#include "Runtime/RealtyFunctionLibrary.h"
#include <Kismet/GameplayStatics.h>
#include "Runtime/RealtyPlayerController.h"
#include "Runtime/PointTargetActor.h"
#include "Runtime/RealtyRuntimeActor.h"
#include "Engine/Classes/Components/SkyLightComponent.h"
#include "Engine/Classes/Components/DirectionalLightComponent.h"
void URealtyFunctionLibrary::Start(const UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		TArray<AActor*> OutActors;
		UGameplayStatics::GetAllActorsOfClass(World, ARealtyRuntimeActor::StaticClass(), OutActors);
		if (OutActors.Num() > 0)
		{
			ARealtyRuntimeActor* RealtyRuntimeActor = Cast<ARealtyRuntimeActor>(OutActors[0]);
			if (RealtyRuntimeActor)
			{
				RealtyRuntimeActor->Start();
			}
		}

	}
}


void URealtyFunctionLibrary::ReStart(const UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		TArray<AActor*> OutActors;
		UGameplayStatics::GetAllActorsOfClass(World, ARealtyRuntimeActor::StaticClass(), OutActors);
		if (OutActors.Num() > 0)
		{
			ARealtyRuntimeActor* RealtyRuntimeActor = Cast<ARealtyRuntimeActor>(OutActors[0]);
			if (RealtyRuntimeActor)
			{
				RealtyRuntimeActor->ReStart();
			}
		}

	}
}


void URealtyFunctionLibrary::GoNode(const UObject* WorldContextObject, const FString& Name, bool ForceRefreshWidget)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		TArray<AActor*> OutActors;
		UGameplayStatics::GetAllActorsOfClass(World,ARealtyRuntimeActor::StaticClass(),OutActors);
		if (OutActors.Num() > 0)
		{
			ARealtyRuntimeActor* RealtyRuntimeActor = Cast<ARealtyRuntimeActor>(OutActors[0]);
			if (RealtyRuntimeActor)
			{
				RealtyRuntimeActor->UseData(Name, ForceRefreshWidget);
			}
		}

	}
}

void URealtyFunctionLibrary::GoBackNode(const UObject* WorldContextObject, bool ForceRefreshWidget)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		TArray<AActor*> OutActors;
		UGameplayStatics::GetAllActorsOfClass(World, ARealtyRuntimeActor::StaticClass(), OutActors);
		if (OutActors.Num() > 0)
		{
			ARealtyRuntimeActor* RealtyRuntimeActor = Cast<ARealtyRuntimeActor>(OutActors[0]);
			if (RealtyRuntimeActor)
			{
				RealtyRuntimeActor->UseDataFast(RealtyRuntimeActor->PreName, ForceRefreshWidget);
			}
		}

	}
}

void URealtyFunctionLibrary::GoNodeFast(const UObject* WorldContextObject, const FString& Name, bool ForceRefreshWidget /*= false*/)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		TArray<AActor*> OutActors;
		UGameplayStatics::GetAllActorsOfClass(World, ARealtyRuntimeActor::StaticClass(), OutActors);
		if (OutActors.Num() > 0)
		{
			ARealtyRuntimeActor* RealtyRuntimeActor = Cast<ARealtyRuntimeActor>(OutActors[0]);
			if (RealtyRuntimeActor)
			{
				RealtyRuntimeActor->UseDataFast(Name, ForceRefreshWidget);
			}
		}

	}
}

void URealtyFunctionLibrary::GoNodeSimple(const UObject* WorldContextObject, const FString& Name, float SpeedTime, bool bRemainSequenceState)
{
	APlayerController* PlayerController = GWorld->GetFirstPlayerController();
	ARealtyPlayerController* RController = Cast<ARealtyPlayerController>(PlayerController);
	if(RController)
	{
		RController->ProcessNextPointSimple(Name, Name, SpeedTime, bRemainSequenceState);
	}
}


void URealtyFunctionLibrary::RealtyLoadMap(const UObject* WorldContextObject, const FString& url)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		APlayerController* pc = UGameplayStatics::GetPlayerController(World, 0);
		if (pc)
		{
			pc->ClientTravel(url, ETravelType::TRAVEL_Relative, true);
		}
	}
}

void URealtyFunctionLibrary::SetSkyLightAngle(const UObject* WorldContextObject, class USkyLightComponent* SkyLightComp, const float& angle)
{
	if (!SkyLightComp)return;

	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		SkyLightComp->SourceCubemapAngle = angle;

	}
}


void URealtyFunctionLibrary::SetAtmosphereSunDiskColorScale(const UObject* WorldContextObject, class UDirectionalLightComponent* DirectionalLightComponent, const FLinearColor& color)
{
	if (DirectionalLightComponent)
	{

		DirectionalLightComponent->AtmosphereSunDiskColorScale = color;
		//DirectionalLightComponent->UpdateColorAndBrightness();
		DirectionalLightComponent->MarkRenderDynamicDataDirty();
		DirectionalLightComponent->MarkRenderStateDirty();
	}
}


void URealtyFunctionLibrary::LoadMainMap(const UObject* WorldContextObject, const FString& URL)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		World->SeamlessTravel(URL);
	}
}

bool URealtyFunctionLibrary::IsInSeamlessTravel(const UObject* WorldContextObject)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		return World->IsInSeamlessTravel();
	}
	return false;
}






UWorld* URealtyFunctionLibrary::CreateTempWorld()
{
	UWorld* TWorld = NewObject<UWorld>(GetTransientPackage(), NAME_None, RF_Transient);
	TWorld->AddToRoot();
	TWorld->WorldType = EWorldType::Game;

	FWorldContext& WorldContext = GEngine->CreateNewWorldContext(TWorld->WorldType);
	WorldContext.SetCurrentWorld(TWorld);

	TWorld->InitializeNewWorld(
		UWorld::InitializationValues()
		.AllowAudioPlayback(false)
		.CreatePhysicsScene(false)
		.RequiresHitProxies(false)
		.CreateNavigation(false)
		.CreateAISystem(false)
		.ShouldSimulatePhysics(false)
		.EnableTraceCollision(false)
		.ForceUseMovementComponentInNonGameWorld(false)
		.SetTransactional(false)
		.CreateFXSystem(false)
		.CreateWorldPartition(false)
	);
	TWorld->InitializeActorsForPlay(FURL());

	GEngine->WorldAdded(TWorld);

	return TWorld;
}

void URealtyFunctionLibrary::DestroyWorld(UWorld*& w)
{
	if (!w)
	{
		return;
	}

	GEngine->WorldDestroyed(w);
	w->DestroyWorld(true);

	GEngine->DestroyWorldContext(w);
	w->RemoveFromRoot();

	w = nullptr;
}

class UTextureRenderTarget2D* URealtyFunctionLibrary::CreateRenderTarget2D(int32 width, int32 height)
{
	UTextureRenderTarget2D* RT = NewObject<UTextureRenderTarget2D>();
	RT->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RGBA8;
	RT->AddressX = TextureAddress::TA_Clamp;
	RT->AddressY = TextureAddress::TA_Clamp;
	RT->InitAutoFormat(width, height);
	RT->AddToRoot();
	RT->UpdateResourceImmediate(true);

	return RT;
}

void URealtyFunctionLibrary::DestroyRenderTarget2D(class UTextureRenderTarget2D*& RT)
{
	if (!RT)
	{
		return;
	}

	RT->RemoveFromRoot();
	RT->ConditionalBeginDestroy();

	RT = nullptr;
}
