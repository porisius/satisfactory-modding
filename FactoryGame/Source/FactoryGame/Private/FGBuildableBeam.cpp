// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableBeam.h"
#include "Components/SceneComponent.h"
#include "FGColoredInstanceMeshProxy.h"

AFGBuildableBeam::AFGBuildableBeam() : Super() {
	this->mSize = 0.0;
	this->mDefaultLength = 0.0;
	this->mMaxLength = 0.0;
	this->mLength = 0.0;
}
void AFGBuildableBeam::BeginPlay(){ }
void AFGBuildableBeam::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildableBeam::GetAttachmentPoints(TArray< const FFGAttachmentPoint* >& out_points) const{ }
void AFGBuildableBeam::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableBeam::SetLength(float NewLength){ }
void AFGBuildableBeam::OnRep_Length(){ }
