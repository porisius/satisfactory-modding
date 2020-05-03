// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPipeBuilder.h"
#include "Components/SceneComponent.h"
#include "GameFramework/FloatingPawnMovement.h"

AFGPipeBuilder::AFGPipeBuilder() : Super() {
	this->mMovementComponent = CreateDefaultSubobject<UFloatingPawnMovement>(TEXT("FloatingMovementComponent"));
	this->mPipeSupportLocation = CreateDefaultSubobject<USceneComponent>(TEXT("PipeSupportLocation")); this->mPipeSupportLocation->SetupAttachment(this->mMesh);
	this->mMoveTime = 3;
	this->mTrailDistance = 500;
	this->mDisabledByWaterLocations.SetNum(1); this->mDisabledByWaterLocations[0].X = 0; this->mDisabledByWaterLocations[0].Y = 0; this->mDisabledByWaterLocations[0].Z = 0;
	this->mSignificanceRange = 20000;
	this->mShouldAttachDriver = true;
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
