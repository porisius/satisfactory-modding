// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGAtmosphereVolume.h"

FExponentialFogSettings::FExponentialFogSettings(){ }
#if WITH_EDITOR
void AFGAtmosphereVolume::PostEditChangeProperty(FPropertyChangedEvent& propertyChangedEvent){ Super::PostEditChangeProperty(propertyChangedEvent); }
#endif 
#if WITH_EDITOR
float AFGAtmosphereVolume::GetViewMinInput() const{ return float(); }
float AFGAtmosphereVolume::GetViewMaxInput() const{ return float(); }
void AFGAtmosphereVolume::SetViewRange(float min, float max){ }
#endif 
#if WITH_EDITORONLY_DATA
#endif 
AFGAtmosphereVolume::AFGAtmosphereVolume(){ }
void AFGAtmosphereVolume::PostLoad(){ Super::PostLoad(); }
void AFGAtmosphereVolume::PostRegisterAllComponents(){ }
void AFGAtmosphereVolume::PostUnregisterAllComponents(void){ }
bool AFGAtmosphereVolume::EncompassesPoint(FVector point, float sphereRadius , float* out_distanceToPoint){ return bool(); }
FPostProcessVolumeProperties AFGAtmosphereVolume::GetProperties() const{ return FPostProcessVolumeProperties(); }
void AFGAtmosphereVolume::GetSettings(FExponentialFogSettings& out_settings) const{ }
void AFGAtmosphereVolume::GetSettings(float atTime, FExponentialFogSettings& out_settings) const{ }
void AFGAtmosphereVolume::GetSkySphereSettings(float atTime, FSkySphereSettings& out_settings) const{ }
void AFGAtmosphereVolume::AddVolume(){ }
void AFGAtmosphereVolume::RemoveVolume(){ }
