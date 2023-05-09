// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "QJWidget.generated.h"

/**
 * 
 */
UCLASS()
class EASYREALTYRUNTIME_API UQJWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:


	TSharedPtr<class FSEPreviewSceneInstance> SEPreviewSceneInstance;

	UFUNCTION(BlueprintCallable,BlueprintPure)
	FSlateBrush& GetBrush();

	UFUNCTION(BlueprintCallable)
		void Update(const FVector2D& ViewSize, const float InDeltaTime);

	UFUNCTION(BlueprintCallable)
		void SetTexture(class UTexture2D* t,float yaw,float PawnPitch);

	UFUNCTION(BlueprintCallable)
		void SetTexture2(FSoftObjectPath t, float yaw);

	UFUNCTION(BlueprintCallable)
		void MouseDown();
	UFUNCTION(BlueprintCallable)
		void MouseUp();
	UFUNCTION(BlueprintCallable)
		void MouseMove(const FVector2D& delta);
	UFUNCTION(BlueprintCallable)
		void MouseLeave();

	
	UPROPERTY() class UTexture2D* t2d;
	TSharedPtr<struct FStreamableHandle> H;
	UFUNCTION() void OnFinish(float yaw,FSoftObjectPath tt);
	virtual void NativeDestruct() override;

};
