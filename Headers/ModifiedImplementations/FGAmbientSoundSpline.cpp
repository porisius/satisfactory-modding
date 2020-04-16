// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGAmbientSoundSpline.h"
#include "Components/SplineComponent.h"
#include "FGSoundSplineComponent.h"

AFGAmbientSoundSpline::AFGAmbientSoundSpline() : Super() {
	this->mSpline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	this->mSoundSpline = CreateDefaultSubobject<UFGSoundSplineComponent>(TEXT("SoundSpline")); this->mSoundSpline->SetupAttachment(this->mSpline);
	this->mSignificanceRange = 2000; 
}
void AFGAmbientSoundSpline::BeginPlay(){ }
void AFGAmbientSoundSpline::EndPlay(const EEndPlayReason::Type endPlayReason){ }
void AFGAmbientSoundSpline::GainedSignificance_Implementation(){ }
void AFGAmbientSoundSpline::LostSignificance_Implementation(){ }
float AFGAmbientSoundSpline::GetSignificanceRange(){ return float(); }
