// Fill out your copyright notice in the Description page of Project Settings.


#include "UMG/RealtyUserWidgetBase.h"
#include <Components/PanelWidget.h>
#include <Components/CanvasPanelSlot.h>
#include <Components/Image.h>
#include <Blueprint/WidgetTree.h>
#include <Engine/Texture2D.h>
#include "Kismet/KismetSystemLibrary.h"

#include "Components/CanvasPanel.h"

URealtyUserWidgetBase* URealtyUserWidgetBase::GetLastUI()
{
	return LastUI;
}

URealtyUserWidgetBase* URealtyUserWidgetBase::LastUI = nullptr;

void URealtyUserWidgetBase::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	if(bAutoAdd)
		ShowMySelf();
}

void URealtyUserWidgetBase::NativePreConstruct()
{
	Super::NativePreConstruct();

#if WITH_EDITORONLY_DATA
	UTexture2D* UIBG = LoadObject<UTexture2D>(nullptr, TEXT("Texture2D'/EasyRealty/Texture/UIBG.UIBG'"));

	image = WidgetTree->ConstructWidget<UImage>(UImage::StaticClass());
	image->SetBrushFromTexture(UIBG);
	image->SetColorAndOpacity(FLinearColor(1, 1, 1, 0.2f));
	image->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	image->SetDesiredSizeOverride(FVector2D(1920.f, 1080.f));
	UPanelWidget* root = Cast<UPanelWidget>(GetRootWidget());
	if (root)
	{
		UPanelSlot* slot = root->AddChild(image);
		UCanvasPanelSlot* canvasSlot = Cast<UCanvasPanelSlot>(slot);
		canvasSlot->SetAnchors(FAnchors(0, 0, 1, 1));
		canvasSlot->SetOffsets(0.f);
	}
#endif

}

void URealtyUserWidgetBase::NativeConstruct()
{
	Super::NativeConstruct();
	OnRealtyDelegate2.AddUFunction(this, TEXT("SelfHidden"));
#if WITH_EDITORONLY_DATA
	image->SetVisibility(ESlateVisibility::Hidden);
#endif

}

void URealtyUserWidgetBase::NativeDestruct()
{
	Super::NativeDestruct();
	//OnRealtyDelegate2.RemoveAll(this);
}

void URealtyUserWidgetBase::BindEventToWidget_Implementation(UObject* Binder, FName FunctionName)
{
	//绑C++函数
	if (!Binder || FunctionName.IsEqual(TEXT("None")))
		return;
	OnRealtyDelegate2.AddUFunction(Binder, FunctionName);

	//用于绑定蓝图函数
	//FScriptDelegate Del;
	//Del.BindUFunction(Binder,FunctionName);
	//OnRealtyDelegate.Add(Del);
}

void URealtyUserWidgetBase::UnBindEventToWidget_Implementation(UObject* Binder, FName FunctionName)
{
	if (!Binder)
		return;
	//OnRealtyDelegate.Remove(Binder,FunctionName);
	OnRealtyDelegate2.RemoveAll(this);
}

void URealtyUserWidgetBase::SelfHidden_Implementation()
{
	this->SetVisibility(ESlateVisibility::Collapsed);
}

void URealtyUserWidgetBase::ShowMySelf_Implementation()
{
	FLatentActionInfo LatentInfo;
	LatentInfo.CallbackTarget = this;
	LatentInfo.ExecutionFunction = "AddMySelf";
	LatentInfo.Linkage = 1;
	LatentInfo.UUID = 100;
	UKismetSystemLibrary::Delay(this, 0.1f, LatentInfo);
}

void URealtyUserWidgetBase::AddMySelf()
{
	AddToViewport();
	OnSelfAddToViewport();
}

void URealtyUserWidgetBase::OnSelfAddToViewport_Implementation()
{
	if (LastUI && LastUI->bMarkRemove)
    {
        LastUI->RemoveFromParent();
		LastUI = nullptr;
        CollectGarbage(GARBAGE_COLLECTION_KEEPFLAGS);
    }
}

void URealtyUserWidgetBase::CallOnRealtyDelegate()
{
	OnRealtyDelegate2.Broadcast();
}

