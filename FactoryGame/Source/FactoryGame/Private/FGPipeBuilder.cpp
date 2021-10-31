// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPipeBuilder.h"
#include "Components/SkeletalMeshComponent.h"
#include "FGHealthComponent.h"
#include "GameFramework/FloatingPawnMovement.h"
#include "Components/SceneComponent.h"

AFGPipeBuilder::AFGPipeBuilder() : Super() {
	this->mMovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingMovementComponent"));
	this->mPipeSupportLocation = CreateDefaultSubobject<USceneComponent>(TEXT("PipeSupportLocation"));
	this->mSplineHologram = nullptr;
	this->mSupportHologram = nullptr;
	this->mCurrentSplineSupportRecipeClass = nullptr;
	this->mCurrentSplineRecipeClass = nullptr;
	this->mInternalSplineSupport = nullptr;
	this->mHitResult.bBlockingHit = false;
	this->mHitResult.bStartPenetrating = false;
	this->mHitResult.FaceIndex = 0;
	this->mHitResult.Time = 1.0;
	this->mHitResult.Distance = 0.0;
	this->mHitResult.Location.X = 0.0;
	this->mHitResult.Location.Y = 0.0;
	this->mHitResult.Location.Z = 0.0;
	this->mHitResult.ImpactPoint.X = 0.0;
	this->mHitResult.ImpactPoint.Y = 0.0;
	this->mHitResult.ImpactPoint.Z = 0.0;
	this->mHitResult.Normal.X = 0.0;
	this->mHitResult.Normal.Y = 0.0;
	this->mHitResult.Normal.Z = 0.0;
	this->mHitResult.ImpactNormal.X = 0.0;
	this->mHitResult.ImpactNormal.Y = 0.0;
	this->mHitResult.ImpactNormal.Z = 0.0;
	this->mHitResult.TraceStart.X = 0.0;
	this->mHitResult.TraceStart.Y = 0.0;
	this->mHitResult.TraceStart.Z = 0.0;
	this->mHitResult.TraceEnd.X = 0.0;
	this->mHitResult.TraceEnd.Y = 0.0;
	this->mHitResult.TraceEnd.Z = 0.0;
	this->mHitResult.PenetrationDepth = 0.0;
	this->mHitResult.Item = 0;
	this->mHitResult.ElementIndex = 0;
	this->mHitResult.PhysMaterial = nullptr;
	this->mHitResult.Actor = nullptr;
	this->mHitResult.Component = nullptr;
	this->mHitResult.BoneName = TEXT("None");
	this->mHitResult.MyBoneName = TEXT("None");
	this->mMoveTime = 3.0;
	this->mHeightCurve = nullptr;
	this->mTrailClass = nullptr;
	this->mTrail = nullptr;
	this->mTrailDistance = 500.0;
	this->mPipeSupportLocation->SetupAttachment(mMesh);
}
void AFGPipeBuilder::BeginPlay(){ }
void AFGPipeBuilder::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGPipeBuilder::Tick(float dt){ }
void AFGPipeBuilder::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGPipeBuilder::Dismantle_Implementation(){ }
void AFGPipeBuilder::OnPrimaryFirePressed(){ }
void AFGPipeBuilder::SetupSplineAndSupport(){ }
void AFGPipeBuilder::ClearSplineAndSupport(){ }
void AFGPipeBuilder::OnSecondaryFirePressed(){ }
void AFGPipeBuilder::Server_PrimaryFire_Implementation(){ }
bool AFGPipeBuilder::Server_PrimaryFire_Validate(){ return bool(); }
void AFGPipeBuilder::Server_SecondaryFire_Implementation(){ }
bool AFGPipeBuilder::Server_SecondaryFire_Validate(){ return bool(); }
void AFGPipeBuilder::Server_UpdateHitResult_Implementation(FHitResult inHitResult){ }
bool AFGPipeBuilder::Server_UpdateHitResult_Validate(FHitResult inHitResult){ return bool(); }
void AFGPipeBuilder::SetHologramsActive(bool isActive){ }
void AFGPipeBuilder::SetRecipeFromIndex(int32 newIndex){ }
bool AFGPipeBuilder::IsReadyToBuild(){ return bool(); }
void AFGPipeBuilder::SpawnHolograms(){ }
void AFGPipeBuilder::TickMove(float dt){ }
