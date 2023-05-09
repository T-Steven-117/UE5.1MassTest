// Fill out your copyright notice in the Description page of Project Settings.


#include "Road/RoadBaseActor.h"
#include <Components/HierarchicalInstancedStaticMeshComponent.h>
#include <Components/SplineComponent.h>
#include <Components/SceneComponent.h>
#include <Kismet/KismetMathLibrary.h>
#include <Kismet/KismetSystemLibrary.h>
#include <Engine/TextureRenderTarget2D.h>
#include "Kismet/KismetRenderingLibrary.h"

#if WITH_EDITOR
#include <Subsystems/UnrealEditorSubsystem.h>
#include <Editor/EditorEngine.h>
#include <EditorViewportClient.h>
#include <LevelEditorViewport.h>
#include <Components/HierarchicalInstancedStaticMeshComponent.h>
#include <Editor.h>
#include <Engine/Selection.h>
#endif
#include <Kismet/KismetMaterialLibrary.h>
#include <Materials/MaterialInstanceDynamic.h>


// Sets default values
ARoadBaseActor::ARoadBaseActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	Spline->SetupAttachment(RootComponent);

}


void ARoadBaseActor::BeginPlay()
{
	Super::BeginPlay();

	

}

#if WITH_EDITOR

void ARoadBaseActor::BuildLine()
{
	int32 roadindex = 0;
	for (auto& tmp : RoadTypes)
	{
		auto& tmp2 = tmp.RoadInfos;

		for (auto& HISM : tmp2.MeshComps)
		{
			if (HISM)
			{
				HISM->UnregisterComponent();
				HISM->DestroyComponent();
			}
		}
		tmp2.MeshComps.Empty();

		if (tmp2.StaticMeshs.Num() <= 0)
		{
			continue;
		}

		for (auto& SM : tmp2.StaticMeshs)
		{
			UHierarchicalInstancedStaticMeshComponent* HISM = NewObject<UHierarchicalInstancedStaticMeshComponent>(this, NAME_None, RF_Transactional);
			HISM->Mobility = EComponentMobility::Static;
			HISM->bSelectable = false;
			HISM->SetCanEverAffectNavigation(false);
			HISM->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			HISM->OnComponentCreated();
			HISM->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			HISM->RegisterComponent();
			HISM->SetStaticMesh(SM.Key);
			HISM->SetCullDistances(tmp2.CullDistance, tmp2.CullDistance * 2);
			tmp2.MeshComps.Add(HISM);
		}

		TArray<int32> ProbabilityArray;
		TArray<bool> IsRandomRotationArray;
		TArray<float> AdditionalYawArray;
		TArray<FVector2D> ScalingArray;
		for (auto& SM : tmp2.StaticMeshs)
		{
			ProbabilityArray.Add(SM.Value.Probability);
			IsRandomRotationArray.Add(SM.Value.IsRandomRotation);
			AdditionalYawArray.Add(SM.Value.AdditionalYaw);
			ScalingArray.Add(SM.Value.ScaleRange);
		}


		TArray<FSpawnTransformParam> TFInput = SpawnTransformS[roadindex].TFP;
		for (auto& tmpTF : TFInput)
		{

			int32 index = GetMeshIndex(ProbabilityArray);
			index = FMath::Clamp<int32>(index, 0, ProbabilityArray.Num() - 1);

			FRotator RadomRotation = IsRandomRotationArray[index] ? FRotator(0, FMath::RandRange(0, 360), 0) : tmpTF.tf.GetRotation().Rotator();

			RadomRotation.Yaw += AdditionalYawArray[index] * (tmpTF.LR ? 1 : -1);
			FVector RandomScale(FMath::RandRange(ScalingArray[index].X, ScalingArray[index].Y));

			FTransform tf(RadomRotation, tmpTF.tf.GetLocation(), RandomScale);
			tmp2.MeshComps[index]->AddInstance(tf);

		}
		++roadindex;
	}
	OnUpdateInformation.ExecuteIfBound();
}

void ARoadBaseActor::BuildArea()
{
	for (auto& tmp : RoadTypes)
	{
		auto& tmp2 = tmp.RoadInfos;

		for (auto& HISM : tmp2.MeshComps)
		{
			if (HISM)
			{
				HISM->UnregisterComponent();
				HISM->DestroyComponent();
			}
		}
		tmp2.MeshComps.Empty();
	}

	for (auto& tmp : RoadTypes)
	{
		auto& tmp2 = tmp.RoadInfos;

		for (auto& SM : tmp2.StaticMeshs)
		{
			UHierarchicalInstancedStaticMeshComponent* HISM = NewObject<UHierarchicalInstancedStaticMeshComponent>(this, NAME_None, RF_Transactional);
			HISM->Mobility = EComponentMobility::Static;
			HISM->bSelectable = false;
			HISM->SetCanEverAffectNavigation(false);
			HISM->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			HISM->OnComponentCreated();
			HISM->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
			HISM->RegisterComponent();
			HISM->SetStaticMesh(SM.Key);
			tmp2.MeshComps.Add(HISM);
		}
	}


	FVector MinL, MaxL;
	TArray<FColor> SurfData;
	class UMaterialInstanceDynamic* MI = nullptr;
	if (NoiseMat && SpawnTransformS.Num() > 0)
	{
		UWorld* EDWorld = GEditor ? GEditor->GetEditorWorldContext(false).World() : nullptr;
		MI = UKismetMaterialLibrary::CreateDynamicMaterialInstance(EDWorld, NoiseMat);
		if (MI)
		{
			MinL = MaxL = FVector::ZeroVector;

			for (auto& TFTmp : SpawnTransformS)
			{
				
				for (auto& tmpTF : TFTmp.TFP)
				{
					FVector Loc = tmpTF.tf.GetLocation();
					if (Loc.X < MinL.X)
					{
						MinL.X = Loc.X;
					}
					if (Loc.Y < MinL.Y)
					{
						MinL.Y = Loc.Y;
					}

					if (Loc.X > MaxL.X)
					{
						MaxL.X = Loc.X;
					}
					if (Loc.Y > MaxL.Y)
					{
						MaxL.Y = Loc.Y;
					}
				}
			}

			NoiseInfoS.W = MaxL.X - MinL.X + 1;
			NoiseInfoS.H = MaxL.Y - MinL.Y + 1;

			NoiseInfoS.NoiseCenter.X = MinL.X + NoiseInfoS.W * 0.5f;
			NoiseInfoS.NoiseCenter.Y = MinL.Y + NoiseInfoS.H * 0.5f;

			float RYaw = AreaRandomParams.IsRandomRotationArea ? FMath::RandRange(0.0f, 1.0f) : 0;
			RYaw += AreaRandomParams.AdditionalYawArea / 360.0f;
			NoiseInfoS.YawResult = RYaw;


			MI->SetScalarParameterValue(TEXT("Yaw"), RYaw);

			UTextureRenderTarget2D* RT = CreateRenderTarget(NoiseResolution, NoiseResolution);
			UUnrealEditorSubsystem* UnrealEditorSubsystem = GEditor->GetEditorSubsystem<UUnrealEditorSubsystem>();
			UKismetRenderingLibrary::DrawMaterialToRenderTarget(UnrealEditorSubsystem->GetEditorWorld(), RT, (UMaterialInterface*)MI);
			FRenderTarget* RenderTarget = RT->GameThread_GetRenderTargetResource();

			RenderTarget->ReadPixels(SurfData);
		}
	}



	int32 randindex = 0;
	for (auto& TFTmp : SpawnTransformS)
	{

		for (auto& tmp : RoadTypes)
		{
			auto& tmp2 = tmp.RoadInfos;

			TArray<int32> ProbabilityArray;
			TArray<bool> IsRandomRotationArray;
			TArray<float> AdditionalYawArray;
			TArray<FVector2D> ScalingArray;
			for (auto& SM : tmp2.StaticMeshs)
			{
				ProbabilityArray.Add(SM.Value.Probability);
				IsRandomRotationArray.Add(SM.Value.IsRandomRotation);
				AdditionalYawArray.Add(SM.Value.AdditionalYaw);
				ScalingArray.Add(SM.Value.ScaleRange);
			}

			//
			
			for (auto& tmpTF : TFTmp.TFP)
			{
				
				//噪波图做对比
				if (SurfData.Num() > 0)
				{
					FVector s = (tmpTF.tf.GetLocation() - MinL);
					int32 u = (float)s.X / NoiseInfoS.W * NoiseResolution;
					int32 v = (float)s.Y / NoiseInfoS.H * NoiseResolution;
					FColor& color = SurfData[v * NoiseResolution + u];

					int32 RAND = FMath::RandRange(0, 40);
					if (color.R < thresholdR)
					{
						if (RAND != 0)
						{
							continue;
						}
						
					}
					else
					{
						if (RAND <= 16)
						{
							continue;
						}
						
					}
						
				}

				int32 index = GetMeshIndex(ProbabilityArray);
				FRotator RadomRotation = IsRandomRotationArray[index] ? FRotator(0, FMath::RandRange(0, 360), 0) : tmpTF.tf.GetRotation().Rotator();

				RadomRotation.Yaw += AdditionalYawArray[index] * (tmpTF.LR ? 1 : -1);
				FVector RandomScale(FMath::RandRange(ScalingArray[index].X, ScalingArray[index].Y));

				FTransform tf(RadomRotation, tmpTF.tf.GetLocation(), RandomScale);
				tmp2.MeshComps[index]->AddInstance(tf);

			}

		}
		++randindex;
	}
	OnUpdateInformation.ExecuteIfBound();
}

void ARoadBaseActor::Calac(bool Area)
{
	auto SpawnTransformLine = [this](UWorld *world,const FVector &Start,const FVector &End, TArray<FSpawnTransformParam>& SpawnTFs,const TArray<FSpawnTransformStruct> &AllSpawnTransform,int32 TraceZOffset,const FRotator r,const bool LR, float Radius,float RandQH)
	{

		FHitResult HitResult;
		TArray<AActor*> ActorsToIgnore;
		if (UKismetSystemLibrary::LineTraceSingle(world,
			Start, End, UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_WorldStatic), true, ActorsToIgnore, EDrawDebugTrace::None,
			HitResult, true))
		{

			//防止种在了房子上面
			TArray<FName> tag =  HitResult.GetActor()->Tags;
			if (tag.Num() > 0)
			{
				bool CanSpawn = true;
				
				for (auto& all : AllSpawnTransform)
				{
					if (!InVolumeTF(HitResult.Location, Radius, all.TFP))
					{
						CanSpawn = false;
						break;
					}
				}

				//
				if (CanSpawn)
				{
					SpawnTFs.Add(FSpawnTransformParam());
					FSpawnTransformParam& Addtf = SpawnTFs[SpawnTFs.Num() - 1];
					Addtf.tf.SetLocation(HitResult.Location + FVector(0, 0, TraceZOffset));
					FVector dir = r.Vector().GetSafeNormal();
					dir *= FMath::RandBool() ? 1 : -1;
					dir *= FMath::RandRange(0.0f, RandQH);
					Addtf.tf.SetLocation(Addtf.tf.GetLocation() + dir);
					Addtf.tf.SetRotation(r.Quaternion());
					Addtf.LR = LR;
				}
			}
		}

	};
	auto SpawnTransformArea = [](UWorld* world, const FVector& Start, const FVector& End, TArray<FSpawnTransformParam>& SpawnTFs, int32 TraceZOffset)
	{
		FHitResult HitResult;
		TArray<AActor*> ActorsToIgnore;
		if (UKismetSystemLibrary::LineTraceSingle(world,
			Start, End, UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_WorldStatic), true, ActorsToIgnore, EDrawDebugTrace::None,
			HitResult, true))
		{

			//防止种在了房子上面
			TArray<FName> tag = HitResult.GetActor()->Tags;
			if (tag.Num() > 0)
			{
				SpawnTFs.Add(FSpawnTransformParam());
				FSpawnTransformParam& Addtf = SpawnTFs[SpawnTFs.Num() - 1];
				Addtf.tf.SetLocation(HitResult.Location + FVector(0, 0, TraceZOffset));
			}
		}

	};

	SpawnTransformS.Empty();
	
	TArray<UActorComponent*> OutComps;
	GetComponents(USplineComponent::StaticClass(), OutComps, true);
	bool InitLine = false;
	for (auto& spline : OutComps)
	{
		USplineComponent* sc = Cast<USplineComponent>(spline);

		float SLength = sc->GetSplineLength();
		if (!Area)
		{
			int32 RoadIndex = 0;
			for (auto& tmp : RoadTypes)
			{
				if (!InitLine)
				{
					SpawnTransformS.Add(FSpawnTransformStruct());
				}
				FSpawnTransformStruct& TFInput = SpawnTransformS[RoadIndex];


				int32 Num = SLength / tmp.Step;

				TArray<FTransform> TFArray;
				for (int32 i = 0; i < Num; ++i)
				{
					FTransform tf = sc->GetTransformAtDistanceAlongSpline(i * tmp.Step, ESplineCoordinateSpace::World, false);
					TFArray.Add(tf);
				}

				for (auto& TF : TFArray)
				{
					FVector Loc = TF.GetLocation();
					FRotator r = TF.GetRotation().Rotator();
					r.Roll = r.Pitch = 0;
					FVector Dir = UKismetMathLibrary::GetRightVector(r);

					FVector S1 = Loc + Dir * -1 * tmp.Width;
					FVector S2 = Loc + Dir * +1 * tmp.Width;
					float HalfQH = tmp.Step * 0.44f;
					SpawnTransformLine(GetWorld(), S1 + FVector(0, 0, TraceLength), S1 - FVector(0, 0, TraceLength), TFInput.TFP, SpawnTransformS, tmp.TraceZOffset, r, true, tmp.LineCollisionRadius, HalfQH);
					SpawnTransformLine(GetWorld(), S2 + FVector(0, 0, TraceLength), S2 - FVector(0, 0, TraceLength), TFInput.TFP, SpawnTransformS, tmp.TraceZOffset, r, false, tmp.LineCollisionRadius, HalfQH);
				}
				++RoadIndex;
			}

			InitLine = true;
		}
		else
		{
			SpawnTransformS.Add(FSpawnTransformStruct());
			FSpawnTransformStruct &TFInput = SpawnTransformS[SpawnTransformS.Num() - 1];


			int32 Num = SLength / AreaRadStep;

			TArray<FTransform> TFArray;
			for (int32 i = 0; i < Num; ++i)
			{
				FTransform tf = sc->GetTransformAtDistanceAlongSpline(i * AreaRadStep, ESplineCoordinateSpace::World, false);
				TFArray.Add(tf);
			}


			for (auto& tmp : RoadTypes)
			{
				TArray<FVector> SpawnPoints;
				GetPolyInisdePoint(TFArray, AreaIntensity, AreaRadius, SpawnPoints);

				for (TArray<FVector>::TIterator it(SpawnPoints); it; ++it)
				{
					SpawnTransformArea(GetWorld(), *it + FVector(0, 0, TraceLength), *it - FVector(0, 0, TraceLength), TFInput.TFP, tmp.TraceZOffset);
				}

			}

		}

	}
}


void ARoadBaseActor::BuildLineEvent()
{
	if (bUseArea) return;

	Calac(false);
	BuildLine();

	GEditor->MarkPackageDirty();
}

void ARoadBaseActor::BuildAreaEvent()
{
	if (!bUseArea) return;

	Calac(true);
	BuildArea();

	GEditor->MarkPackageDirty();
}

bool ARoadBaseActor::EditorModeTick(FVector &v)
{

	UWorld* EDWorld = GEditor ? GEditor->GetEditorWorldContext(false).World() : nullptr;
	if (EDWorld)
	{
		FVector MouseLoc, MouseDir;
		if (GetEditorViewportMousePosition(0, MouseDir, MouseLoc))
		{
			FVector End = MouseLoc + MouseDir * 10000000;

			FHitResult HitResult;
			TArray<AActor*> ActorsToIgnore;
			if (UKismetSystemLibrary::LineTraceSingle(EDWorld,
				MouseLoc, End, UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_WorldStatic), true, ActorsToIgnore, EDrawDebugTrace::None,
				HitResult, true))
			{
				v = HitResult.Location;
				UKismetSystemLibrary::DrawDebugSphere(EDWorld, v, RemoveRadius, 24, FLinearColor::Red, 0, 200);
		
				return true;
			}
		}
	}

	return false;
}

void ARoadBaseActor::ConfirmTick(const FVector& v)
{
	const FScopedTransaction transaction(FText::FromString("Remove ..."));

	for (auto& tmp : RoadTypes)
	{
		for (auto &HISM : tmp.RoadInfos.MeshComps)
		{
			HISM->Modify();
			RemoveRoadInstance(HISM, v, RemoveRadius);
		}
	}

	OnUpdateInformation.ExecuteIfBound();
}

void ARoadBaseActor::GetInfoString(FString& s)
{
	s.Empty();

	for (auto& tmp : RoadTypes)
	{
		FString roadtype = tmp.Name + " : \t\n";

		int32 index = 0;
		for (auto &HISM : tmp.RoadInfos.MeshComps)
		{
			int32 num = HISM->GetInstanceCount();
			FString C = FString::Printf(TEXT("		%d Layer's Mesh Count : %d\t\n"), index, num);

			roadtype += C;
			++index;
		}


		s += roadtype;
	}

}

int32 ARoadBaseActor::GetMeshIndex(const TArray<int32> ProbabilityArray)
{
	if (ProbabilityArray.Num() <= 0)
	{
		return 0;
	}

	int32 total = 0;
	for (int i = 0; i < ProbabilityArray.Num(); ++i)
	{
		total += ProbabilityArray[i];
	}
	int32 V = FMath::RandRange(0, total);
	for (int i = 0; i < ProbabilityArray.Num(); ++i)
	{
		if (V < ProbabilityArray[i])
		{
			return i;
		}
		else
		{
			V -= ProbabilityArray[i];
		}
	}
	return ProbabilityArray.Num() - 1;

}


void ARoadBaseActor::GetPolyInisdePoint(const TArray<FTransform> &PolyPoints, float count, int32 raduis, TArray<FVector>& SpawnPoints)
{
	//get max min

	FVector minpos = PolyPoints[0].GetLocation();
	FVector maxpos = minpos;


	for (int32 i = 1; i < PolyPoints.Num(); ++i)
	{
		FVector temp = PolyPoints[i].GetLocation();

		if (temp.X < minpos.X)
		{
			minpos.X = temp.X;
		}
		if (temp.Y < minpos.Y)
		{
			minpos.Y = temp.Y;
		}

		if (temp.X > maxpos.X)
		{
			maxpos.X = temp.X;
		}
		if (temp.Y > maxpos.Y)
		{
			maxpos.Y = temp.Y;
		}
	}

	float A = maxpos.X - minpos.X;
	float B = maxpos.Y - minpos.Y;
	uint64 c = A * B * count * 0.000001f;


	for (int32 i = 0; i < c; ++i)
	{
		int32 RX = FMath::RandRange(minpos.X, maxpos.X);
		int32 RY = FMath::RandRange(minpos.Y, maxpos.Y);
		FVector v(RX, RY, minpos.Z);

		if (InPolyInside(v, PolyPoints) && InVolume(v, raduis, SpawnPoints))
		{
			SpawnPoints.Add(v);
		}
	}
}

bool ARoadBaseActor::InPolyInside(const FVector& point, const TArray<FTransform>& PolyPoints)
{
	int32 polySides = PolyPoints.Num();
	int32   i, j = polySides - 1;
	bool  oddNodes = false;

	for (i = 0; i < polySides; ++i)
	{
		FVector L1 = PolyPoints[i].GetLocation();
		FVector L2 = PolyPoints[j].GetLocation();
		if (
			(L1.Y < point.Y && L2.Y >= point.Y
				|| L2.Y < point.Y && L1.Y >= point.Y
				)
			&&
			(L1.X <= point.X || L2.X <= point.X)
			)
		{
			oddNodes ^= (L1.X + (point.Y - L1.Y) / (L2.Y - L1.Y) * (L2.X - L1.X) < point.X);
		}
		j = i;
	}

	return oddNodes;
}

bool ARoadBaseActor::InVolume(const FVector& point, const int32 raduis, const TArray<FVector>& PolyPoints)
{

	FVector2D testMin = FVector2D(point.X, point.Y) - FVector2D(raduis, raduis);
	FVector2D testMax = FVector2D(point.X, point.Y) + FVector2D(raduis, raduis);


	for (int32 i = 0; i < PolyPoints.Num(); ++i)
	{

		FVector2D pMin = FVector2D(PolyPoints[i].X, PolyPoints[i].Y) - FVector2D(raduis, raduis);
		FVector2D pMax = FVector2D(PolyPoints[i].X, PolyPoints[i].Y) + FVector2D(raduis, raduis);

		if (!(testMin.X > pMax.X || testMin.Y > pMax.Y || testMax.X < pMin.X || testMax.Y < pMin.Y))
		{
			return false;
		}
	}

	return true;
}

bool ARoadBaseActor::InVolumeTF(const FVector& point, const int32 raduis, const TArray<FSpawnTransformParam>& PolyPoints)
{

	FVector2D testMin = FVector2D(point.X, point.Y) - FVector2D(raduis, raduis);
	FVector2D testMax = FVector2D(point.X, point.Y) + FVector2D(raduis, raduis);


	for (int32 i = 0; i < PolyPoints.Num(); ++i)
	{
		FVector v = PolyPoints[i].tf.GetLocation();
		FVector2D pMin = FVector2D(v.X, v.Y) - FVector2D(raduis, raduis);
		FVector2D pMax = FVector2D(v.X, v.Y) + FVector2D(raduis, raduis);

		if (!(testMin.X > pMax.X || testMin.Y > pMax.Y || testMax.X < pMin.X || testMax.Y < pMin.Y))
		{
			return false;
		}
	}

	return true;
}

class UTextureRenderTarget2D* ARoadBaseActor::CreateRenderTarget(int32 Width, int32 Height)
{
	UTextureRenderTarget2D* RenderTarget2D = NewObject<UTextureRenderTarget2D>();
	RenderTarget2D->RenderTargetFormat = ETextureRenderTargetFormat::RTF_RGBA8;
	RenderTarget2D->AddressX = TextureAddress::TA_Clamp;
	RenderTarget2D->AddressY = TextureAddress::TA_Clamp;
	RenderTarget2D->InitAutoFormat(Width, Height);

	RenderTarget2D->UpdateResourceImmediate(true);

	return RenderTarget2D;
}



bool ARoadBaseActor::GetEditorViewportMousePosition(int32 index, FVector& BrushTraceDirection, FVector& BrushTraceStart)
{

	UEditorEngine* EE = Cast<UEditorEngine>(GEngine);

	TArray<class FLevelEditorViewportClient*> Clients = EE->GetLevelViewportClients();

	FEditorViewportClient* VC = 0;
	for (int32 i = 0; i < Clients.Num(); ++i)
	{
		if (Clients[i]->Viewport->GetSizeXY().X > 0)
		{
			VC = Clients[i];
			break;
		}

	}
	if (!VC)
	{
		return false;
	}



	FSceneViewFamilyContext ViewFamily(FSceneViewFamily::ConstructionValues(
		VC->Viewport,
		VC->GetScene(),
		VC->EngineShowFlags)
		.SetRealtimeUpdate(VC->IsRealtime()));

	FSceneView* View = VC->CalcSceneView(&ViewFamily);


	FViewportCursorLocation MouseViewportRay(View, VC, VC->Viewport->GetMouseX(), VC->Viewport->GetMouseY());

	BrushTraceDirection = MouseViewportRay.GetDirection();
	BrushTraceStart = MouseViewportRay.GetOrigin();

	return true;
}

void ARoadBaseActor::RemoveRoadInstance(class UHierarchicalInstancedStaticMeshComponent* MeshComp, FVector Center, float Radius)
{
	//MeshComp->SelectInstance()
	FTransform comptf = MeshComp->GetComponentToWorld();
	FVector InvCenter = comptf.InverseTransformPosition(Center);



	for (int32 i = 0; i < MeshComp->GetInstanceCount();)
	{
		FTransform mytf;
		if (MeshComp->GetInstanceTransform(i, mytf))
		{
			float d = (mytf.GetLocation() - InvCenter).Size2D();
			if (d <= Radius)
			{
				//float bl = d / Radius;
				bool Rand = (FMath::RandRange(0, 10) > 7);
				if (Rand)
				{
					MeshComp->RemoveInstance(i);
				}
				else
				{
					++i;
				}
			}
			else
			{
				++i;
			}
		}

	}
}

void ARoadBaseActor::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	if (PropertyChangedEvent.GetPropertyName() == TEXT("bUseArea"))
	{
		for (auto &k : RoadTypes)
		{
			k.bUseArea = bUseArea;
			k.RoadInfos.bUseArea = bUseArea;
			for (auto &n : k.RoadInfos.StaticMeshs)
			{
				n.Value.bUseArea = bUseArea;
			}
		}
	}
}





#endif

