// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGAtmosphereUpdater.h"

#if WITH_EDITORONLY_DATA
#endif 
UFGAtmosphereUpdater::UFGAtmosphereUpdater(){ }
void UFGAtmosphereUpdater::Tick(float dt){ }
void UFGAtmosphereUpdater::ApplyFogSettings(const FExponentialFogSettings& fogSettings,  UWorld* world) const{ }
void UFGAtmosphereUpdater::ApplySkyAtmosphereSettings(const  FSkyAtmosphereSettings& settings,  UWorld* world) const{ }
void UFGAtmosphereUpdater::InterpolateFogSettings(FExponentialFogSettings& dest, const FExponentialFogSettings& src, float alpha) const{ }
void UFGAtmosphereUpdater::InterpolateSkySphereSettings( FSkySphereSettings& dest, const  FSkySphereSettings& src, float alpha) const{ }
void UFGAtmosphereUpdater::InterpolateAtmosphereSettings( FSkyAtmosphereSettings& dest, const  FSkyAtmosphereSettings &src, float alpha) const{ }
void UFGAtmosphereUpdater::UpdateWorld(UWorld* world){ }
bool UFGAtmosphereUpdater::ShouldUpdateWorld(UWorld* world) const{ return bool(); }
void UFGAtmosphereUpdater::AtmosphereDebuggingChanged(IConsoleVariable *var){ }
