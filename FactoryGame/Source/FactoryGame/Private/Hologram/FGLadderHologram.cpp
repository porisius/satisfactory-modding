// This file has been automatically generated by the Unreal Header Implementation tool

#include "Hologram/FGLadderHologram.h"
#include "AkAudio/Classes/AkComponent.h"
#include "Components/SceneComponent.h"

AFGLadderHologram::AFGLadderHologram() : Super() {
	this->mLadderBottomSnapThreshold = 0.4;
	this->mWidth = 0.0;
	this->mMeshHeight = 0.0;
	this->mPlacementPosition.X = 0.0;
	this->mPlacementPosition.Y = 0.0;
	this->mPlacementPosition.Z = 0.0;
	this->mMaxSegmentCount = 0;
	this->mTargetSegmentHeight = 0;
	this->mCanDragDown = true;
	this->mCanDragUp = true;
	this->mInstancedMeshComponent = CreateDefaultSubobject<UInstancedStaticMeshComponent>(TEXT("Instanced Mesh Component"));
	this->mBuildStep = ELadderHologramBuildStep::LHBS_SnapToActor;
	this->mInstancedMeshComponent->SetupAttachment(RootComponent);
}
void AFGLadderHologram::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGLadderHologram::BeginPlay(){ }
bool AFGLadderHologram::IsValidHitResult(const FHitResult& hitResult) const{ return bool(); }
void AFGLadderHologram::SetHologramLocationAndRotation(const FHitResult& hitResult){ }
bool AFGLadderHologram::DoMultiStepPlacement(bool isInputFromARelease){ return bool(); }
bool AFGLadderHologram::TrySnapToActor(const FHitResult& hitResult){ return bool(); }
void AFGLadderHologram::SetMaterial( UMaterialInterface* material){ }
int32 AFGLadderHologram::GetBaseCostMultiplier() const{ return int32(); }
void AFGLadderHologram::SerializeConstructMessage(FArchive& ar, FNetConstructionID id){ }
void AFGLadderHologram::OnPendingConstructionHologramCreated_Implementation(AFGHologram* fromHologram){ }
void AFGLadderHologram::ConfigureActor( AFGBuildable* inBuildable) const{ }
void AFGLadderHologram::CheckValidFloor(){ }
void AFGLadderHologram::OnRep_TargetSegmentHeight(){ }
void AFGLadderHologram::UpdateClearance(){ }
