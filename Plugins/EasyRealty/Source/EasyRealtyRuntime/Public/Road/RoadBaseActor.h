// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RoadBaseActor.generated.h"


USTRUCT(BlueprintType, Blueprintable)
struct FRoadInfoParam
{
	GENERATED_USTRUCT_BODY()

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere) bool bUseArea;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "CanProbability || bUseArea")) int32 Probability;
	UPROPERTY(EditAnywhere) bool IsRandomRotation = true;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "!IsRandomRotation")) float AdditionalYaw;
	UPROPERTY(EditAnywhere) FVector2D ScaleRange = FVector2D(1,1);

#endif
};


USTRUCT(BlueprintType, Blueprintable)
struct FSpawnTransformParam
{
	GENERATED_USTRUCT_BODY()
public:

#if WITH_EDITORONLY_DATA
	UPROPERTY() FTransform tf;
	UPROPERTY() bool LR;
#endif

};

USTRUCT(BlueprintType, Blueprintable)
struct FSpawnTransformStruct
{
	GENERATED_USTRUCT_BODY()
public:

#if WITH_EDITORONLY_DATA
	TArray<FSpawnTransformParam> TFP;
#endif

};


USTRUCT(BlueprintType, Blueprintable)
struct FRoadInfo
{
	GENERATED_USTRUCT_BODY()

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere) bool bUseArea;
	UPROPERTY(EditAnywhere) TMap<class UStaticMesh*, FRoadInfoParam> StaticMeshs;
	UPROPERTY(EditAnywhere) int32 CullDistance;
#endif

	UPROPERTY() TArray<class UHierarchicalInstancedStaticMeshComponent*> MeshComps;

};




USTRUCT(BlueprintType, Blueprintable)
struct FAreaRandomParam
{
	GENERATED_USTRUCT_BODY()

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere) bool IsRandomRotationArea = false;
	UPROPERTY(EditAnywhere)		float AdditionalYawArea;

#endif

};


USTRUCT(BlueprintType, Blueprintable)
struct FNoiseInfo
{
	GENERATED_USTRUCT_BODY()

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY() FVector NoiseCenter;
	UPROPERTY() int32 W;
	UPROPERTY() int32 H;
	UPROPERTY() float YawResult;
#endif

	UPROPERTY(EditAnywhere) FRoadInfo RoadInfos;

};

USTRUCT(BlueprintType,Blueprintable)
struct FRoadType
{
	GENERATED_USTRUCT_BODY()

public:
#if WITH_EDITORONLY_DATA
	UPROPERTY(VisibleAnywhere) bool bUseArea;
	UPROPERTY(EditAnywhere) FString Name;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "!bUseArea")) float Step = 2500;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "!bUseArea")) float Width = 1500;
	UPROPERTY(EditAnywhere, meta = (EditCondition = "!bUseArea")) int32 LineCollisionRadius = 100;
	UPROPERTY(EditAnywhere) int32 TraceZOffset = 0;

#endif

	UPROPERTY(EditAnywhere) FRoadInfo RoadInfos;

};



UCLASS()
class EASYREALTYRUNTIME_API ARoadBaseActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARoadBaseActor();

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite) class USplineComponent* Spline;

	UPROPERTY(EditAnywhere,Category = "Tree") TArray<FRoadType> RoadTypes;
	
#if WITH_EDITORONLY_DATA
	DECLARE_DELEGATE(FUpdateInformation);
	FUpdateInformation OnUpdateInformation;
	UPROPERTY() TArray<FSpawnTransformStruct> SpawnTransformS;
	UPROPERTY() FNoiseInfo NoiseInfoS;

	UPROPERTY(EditAnywhere, Category = "Tree") bool bUseArea;
#endif

#if WITH_EDITOR
	void BuildLine();
	void BuildArea();
	void Calac(bool Area);
	UFUNCTION(BlueprintCallable, CallInEditor) void BuildLineEvent();
	UFUNCTION(BlueprintCallable, CallInEditor) void BuildAreaEvent();
	bool EditorModeTick(FVector &v);
	void ConfirmTick(const FVector &v);
	void GetInfoString(FString &s);
	int32 GetMeshIndex(const TArray<int32> ProbabilityArray);
	void GetPolyInisdePoint(const TArray<FTransform> &PolyPoints, float count, int32 raduis, TArray<FVector>& SpawnPoints);
	bool InPolyInside(const FVector& point, const TArray<FTransform>& PolyPoints);
	bool InVolume(const FVector& point, const int32 raduis, const TArray<FVector>& PolyPoints);
	bool InVolumeTF(const FVector& point, const int32 raduis, const TArray<FSpawnTransformParam>& PolyPoints);
	class UTextureRenderTarget2D* CreateRenderTarget(int32 Width, int32 Height);
	bool GetEditorViewportMousePosition(int32 index, FVector& BrushTraceDirection, FVector& BrushTraceStart);
	void RemoveRoadInstance(class UHierarchicalInstancedStaticMeshComponent* MeshComp, FVector Center, float Radius);



	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

#if WITH_EDITORONLY_DATA
	UPROPERTY(EditAnywhere, Category = "Tree") int32 TraceLength = 20000;
	
	
	/**
	* 面积密度
	*/
	UPROPERTY(EditAnywhere,Category = "Tree", meta = (EditCondition = "bUseArea")) float AreaIntensity = 4.0f;
	/**
	* 面积步进
	*/
	UPROPERTY(EditAnywhere,Category = "Tree", meta = (EditCondition = "bUseArea")) int32 AreaRadStep = 100;
	/**
	*剔除范围密度
	*/
	UPROPERTY(EditAnywhere,Category = "Tree", meta = (EditCondition = "bUseArea")) int32 AreaRadius = 100;
	UPROPERTY(EditAnywhere,Category = "Tree", meta = (EditCondition = "bUseArea")) int32 thresholdR = 128;
	UPROPERTY(EditAnywhere,Category = "Tree", meta = (EditCondition = "bUseArea")) int32 NoiseResolution = 1024;
	UPROPERTY(EditAnywhere,Category = "Tree", meta = (EditCondition = "bUseArea")) UMaterialInterface* NoiseMat;
	UPROPERTY(EditAnywhere,Category = "Tree", meta = (EditCondition = "bUseArea")) FAreaRandomParam AreaRandomParams;




	UPROPERTY(EditAnywhere) int32 RemoveRadius = 4000;
#endif

};
