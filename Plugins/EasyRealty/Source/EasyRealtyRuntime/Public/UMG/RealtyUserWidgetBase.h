// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RealtyUserWidgetBase.generated.h"

/**
 *
 */
UCLASS()
class EASYREALTYRUNTIME_API URealtyUserWidgetBase : public UUserWidget
{
	GENERATED_BODY()

public:
	virtual void NativeOnInitialized() override;
	virtual void NativePreConstruct() override;
	virtual void NativeConstruct() override;
	virtual void NativeDestruct() override;
#if WITH_EDITORONLY_DATA
	UPROPERTY() class UImage* image;
#endif

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FString> NextStringArray;
	UFUNCTION(BlueprintImplementableEvent)
		void PostProcess();

	bool bMarkRemove = false;
protected:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RealtyWidgetFunction")
		void BindEventToWidget(UObject* Binder, FName FunctionName);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "RealtyWidgetFunction")
		void UnBindEventToWidget(UObject* Binder, FName FunctionName);
	//勾选节点后，默认隐藏节点UI，建议蓝图重载
	UFUNCTION(BlueprintNativeEvent,BlueprintCallable, Category = "RealtyWidgetFunction")
		void SelfHidden();

//**-----Self add to viewport------
	UPROPERTY(EditAnywhere)
	bool bAutoAdd = true;

	UFUNCTION(BlueprintNativeEvent)
	void ShowMySelf();
	virtual void ShowMySelf_Implementation();

	UFUNCTION(BlueprintCallable)
	void AddMySelf();

	UFUNCTION(BlueprintNativeEvent)
	void OnSelfAddToViewport();
	virtual void OnSelfAddToViewport_Implementation();
//**-------------------------------
public:
	void CallOnRealtyDelegate();
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRealtyDelegate);
	FOnRealtyDelegate OnRealtyDelegate;

	DECLARE_MULTICAST_DELEGATE(FOnRealtyDelegate2);
	FOnRealtyDelegate2 OnRealtyDelegate2;

	UFUNCTION(BlueprintCallable)
	URealtyUserWidgetBase* GetLastUI();
	
	static URealtyUserWidgetBase* LastUI;

};
