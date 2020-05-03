// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGSkySphere.h"

#if WITH_EDITOR
void AFGSkySphere::PostEditChangeChainProperty( FPropertyChangedChainEvent& propertyChangedEvent){ }
#endif 
#if WITH_EDITOR
float AFGSkySphere::GetViewMinInput() const{ return float(); }
float AFGSkySphere::GetViewMaxInput() const{ return float(); }
void AFGSkySphere::SetViewRange(float min, float max){ }
#endif 
#if WITH_EDITOR
void AFGSkySphere::SetupPreviewDelegate(){ }
#endif 
#if WITH_EDITORONLY_DATA
#endif 
AFGSkySphere::AFGSkySphere() : Super() {
	this->mSkyLightIntensity.EditorCurveData.PreInfinityExtrap = RCCE_Constant; this->mSkyLightIntensity.EditorCurveData.PostInfinityExtrap = RCCE_Constant; this->mSkyLightIntensity.EditorCurveData.DefaultValue = 5;
	this->mOcclusionTintColor.ColorCurves[0].PreInfinityExtrap = RCCE_Constant; this->mOcclusionTintColor.ColorCurves[0].PostInfinityExtrap = RCCE_Constant; this->mOcclusionTintColor.ColorCurves[0].DefaultValue = 0;
	this->mStarBrightness.EditorCurveData.PreInfinityExtrap = RCCE_Constant; this->mStarBrightness.EditorCurveData.PostInfinityExtrap = RCCE_Constant; this->mStarBrightness.EditorCurveData.DefaultValue = 0.200000002980232;
	this->mSkyLightColor.ColorCurves[0].PreInfinityExtrap = RCCE_Constant; this->mSkyLightColor.ColorCurves[0].PostInfinityExtrap = RCCE_Constant; this->mSkyLightColor.ColorCurves[0].DefaultValue = 1;
}
void AFGSkySphere::PostActorCreated(){ }
void AFGSkySphere::PostLoad(){ Super::PostLoad(); }
void AFGSkySphere::BeginDestroy(){ Super::BeginDestroy(); }
void AFGSkySphere::UpdatePreview_Implementation(){ }
FLinearColor AFGSkySphere::GetColorCurveValue(const FRuntimeCurveLinearColor& curve, float time){ return FLinearColor(); }
float AFGSkySphere::GetFloatCurveValue(const FRuntimeFloatCurve& curve, float time){ return float(); }
void AFGSkySphere::GetSkySphereSettings(float atTime, FSkySphereSettings& out_settings) const{ }
