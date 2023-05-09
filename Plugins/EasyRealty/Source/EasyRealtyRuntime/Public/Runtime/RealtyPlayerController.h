// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "RealtyPlayerController.generated.h"

class URealtyUserWidgetBase;
/**
 * 
 */

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnBlendViewCompleteSignature);

UCLASS()
class EASYREALTYRUNTIME_API ARealtyPlayerController : public APlayerController
{
	GENERATED_BODY()


public:

	ARealtyPlayerController();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;


public:

	void PossessNextPointTransient(
		const FString& Name,
		TSubclassOf<class APointTargetActor> PawnTargetActorClass,
		const FString &TargetSequenceSoftPath,
		const FTransform &TF, 
		float BlendSpeed,
		bool NoHoldTransform = false,
		bool NoTransfer = false);


	void PossessNextPointPersistent(
		const FString& Name,
		const FString& PawnTargetActorTag,
		const FString& TargetSequenceSoftPath,
		float BlendSpeed,
		bool NoHoldTransform = false,
		bool NoTransfer = false,
		URealtyUserWidgetBase* RelatedWidget = nullptr);
	void PossessNextPointPersistentFast(
		const FString& Name,
		const FString& PawnTargetActorTag,
		const FString& TargetSequenceSoftPath,
		float BlendSpeed,
		bool NoHoldTransform = false,
		bool NoTransfer = false,
		URealtyUserWidgetBase* RelatedWidget = nullptr);

	void PossessNextPointTransient(
		class APointTargetActor *PawnTargetActor);


	void ClearPoint();

	void ProcessNextPointSimple(const FString& Name, const FString& TargetActorTag, float BlendSpeed, bool bRemainSequenceState);

	UFUNCTION(BlueprintCallable)
	void StopSequence();
private:

public:

	UPROPERTY() class APointTargetActor* UsePawnTargetActor;
	bool InSwitchProcess;
	
	bool InBlendView;
	float BlendViewTime;
	float MaxBlendViewTime;
	FTransform BlendTransform;
	FTransform TargetTransform;

	UPROPERTY() class UCurveFloat* SwtichCurve = nullptr;

	DECLARE_EVENT(ARealtyPlayerController, FOnBlendComplete)
	mutable FOnBlendComplete OnBlendCompleteEvent;

	void OnBlendViewComplete(class APointTargetActor* PointTargetActor, bool NoHoldTransform);
	UFUNCTION() void OnSwitchComplete();


	UPROPERTY(Transient) TMap<FString, FTransform> CacheMap;
	void AddCacheMap(const FString &Name,const FTransform &tf, bool OnlyAdd = false);
	FTransform GetCacheTransform(const FString& Name);

	UPROPERTY(Transient)
	APointTargetActor* RestoredTarget;
	
	UPROPERTY(BlueprintAssignable)
	FOnBlendViewCompleteSignature OnBlendViewCompleteDelegate;
};
