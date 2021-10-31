// This file has been automatically generated by the Unreal Header Implementation tool

#include "Buildables/FGBuildableLightSource.h"
#include "FGPowerInfoComponent.h"
#include "Components/SceneComponent.h"

AFGBuildableLightSource::AFGBuildableLightSource() : Super() {
	this->mIsEnabled = true;
	this->mLightControlData.ColorSlotIndex = 0;
	this->mLightControlData.Intensity = 1.0;
	this->mLightControlData.IsTimeOfDayAware = false;
	this->mPowerConsumption = 1.0;
	this->mPowerInfo = CreateDefaultSubobject<UFGPowerInfoComponent>(TEXT("powerInfo"));
	this->mHasPower = false;
	this->mIsDay = false;
}
void AFGBuildableLightSource::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGBuildableLightSource::BeginPlay(){ }
void AFGBuildableLightSource::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
bool AFGBuildableLightSource::GetPoolHandleInitialState() const{ return bool(); }
void AFGBuildableLightSource::SetLightEnabled(bool isEnabled){ }
void AFGBuildableLightSource::SetLightControlData(FLightSourceControlData data){ }
bool AFGBuildableLightSource::IsLightEnabled() const{ return bool(); }
FLightSourceControlData AFGBuildableLightSource::GetLightControlData() const{ return FLightSourceControlData(); }
void AFGBuildableLightSource::OnLightColorSlotsUpdated(const TArray< FLinearColor >& colors){ }
float AFGBuildableLightSource::GetEmissivePower(){ return float(); }
void AFGBuildableLightSource::OnTimeOfDayChanged(bool isDay){ }
void AFGBuildableLightSource::OnHasPowerChanged( UFGPowerInfoComponent* info){ }
void AFGBuildableLightSource::OnRep_IsEnabled(){ }
void AFGBuildableLightSource::OnRep_LightControlData(){ }
void AFGBuildableLightSource::OnRep_HasPower(){ }
void AFGBuildableLightSource::OnRep_IsDay(){ }
void AFGBuildableLightSource::UpdateMeshDataAndHandles(){ }
void AFGBuildableLightSource::UpdateCurrentLightColor(){ }
void AFGBuildableLightSource::UpdatePowerConsumption(){ }
