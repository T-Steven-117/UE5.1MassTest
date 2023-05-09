// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/QJWidget.h"
#include "PreviewScene/SEPreviewSceneInstance.h"
#include <Engine/StreamableManager.h>
#include <UObject/SoftObjectPtr.h>
#include <Engine/AssetManager.h>


FSlateBrush& UQJWidget::GetBrush()
{
	if (!SEPreviewSceneInstance.IsValid())
	{
		SEPreviewSceneInstance = MakeShareable(new FSEPreviewSceneInstance());
	}

	return SEPreviewSceneInstance->ViewBrush;
}

void UQJWidget::Update(const FVector2D& ViewSize, const float InDeltaTime)
{
	if (!SEPreviewSceneInstance.IsValid())
	{
		SEPreviewSceneInstance = MakeShareable(new FSEPreviewSceneInstance());
	}

	SEPreviewSceneInstance->Update(ViewSize, InDeltaTime);

}

void UQJWidget::SetTexture(class UTexture2D* t, float yaw, float PawnPitch)
{
	if (!SEPreviewSceneInstance.IsValid())
	{
		SEPreviewSceneInstance = MakeShareable(new FSEPreviewSceneInstance());
	}

	SEPreviewSceneInstance->SetTexture(t,yaw);
	SEPreviewSceneInstance->SetPawnPitch(PawnPitch);
}

void UQJWidget::SetTexture2(FSoftObjectPath t, float yaw)
{
	if (!SEPreviewSceneInstance.IsValid())
	{
		SEPreviewSceneInstance = MakeShareable(new FSEPreviewSceneInstance());
	}

	FStreamableManager &Streamable = UAssetManager::GetStreamableManager();;
	H = Streamable.RequestAsyncLoad(t, FStreamableDelegate::CreateUFunction(this,TEXT("OnFinish"), yaw, t));

}

void UQJWidget::MouseDown()
{
	SEPreviewSceneInstance->OnMouseButtonDown();
}

void UQJWidget::MouseUp()
{
	SEPreviewSceneInstance->OnMouseButtonUp();
}

void UQJWidget::MouseMove(const FVector2D& delta)
{
	SEPreviewSceneInstance->OnMouseMove(delta);
}

void UQJWidget::MouseLeave()
{
	SEPreviewSceneInstance->OnMouseButtonUp();
}

void UQJWidget::OnFinish(float yaw, FSoftObjectPath tt)
{
	FSoftObjectPtr pp = FSoftObjectPtr(tt);
	UObject* pObj = pp.Get();
	if (pObj)
	{
		t2d = Cast<UTexture2D>(pObj);
		SetTexture(t2d, yaw,0);
	}

	H->ReleaseHandle();
	H.Reset();
}

void UQJWidget::NativeDestruct()
{
	Super::NativeDestruct();

	if (t2d)
	{
		t2d->ConditionalBeginDestroy();
		t2d = nullptr;
		GEngine->ForceGarbageCollection(true);
	}
}
