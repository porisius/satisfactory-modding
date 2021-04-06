// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGDroneStationInfo.h"

void FFGDroneTripStatistics::Clear(){ }
AFGDroneStationInfo::AFGDroneStationInfo(){ }
void AFGDroneStationInfo::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGDroneStationInfo::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGDroneStationInfo::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDroneStationInfo::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDroneStationInfo::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDroneStationInfo::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGDroneStationInfo::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGDroneStationInfo::NeedTransform_Implementation(){ return bool(); }
bool AFGDroneStationInfo::ShouldSave_Implementation() const{ return bool(); }
void AFGDroneStationInfo::SetBuildingTag_Implementation(const FString& buildingTag){ }
void AFGDroneStationInfo::PairStation(AFGDroneStationInfo* otherStation){ }
void AFGDroneStationInfo::ClearLatestDroneTrips(){ }
float AFGDroneStationInfo::GetEstimatedBatteryRequirementRate() const{ return float(); }
int32 AFGDroneStationInfo::GetTripCostInBatteries() const{ return int32(); }
void AFGDroneStationInfo::SetDroneStatus(EDroneStatus droneStatus){ }
float AFGDroneStationInfo::CalculateStationTripPowerCost(AFGDroneStationInfo* ToStation) const{ return float(); }
void AFGDroneStationInfo::RegisterDroneTripInformation(const FDroneTripInformation& TripInfo){ }
float AFGDroneStationInfo::GetLatestEstimatedTotalIncomingItemStackRate() const{ return float(); }
float AFGDroneStationInfo::GetAverageTotalIncomingItemRate() const{ return float(); }
float AFGDroneStationInfo::GetAverageTotalIncomingItemStackRate() const{ return float(); }
float AFGDroneStationInfo::GetLatestEstimatedTotalOutgoingItemStackRate() const{ return float(); }
float AFGDroneStationInfo::GetAverageTotalOutgoingItemRate() const{ return float(); }
float AFGDroneStationInfo::GetAverageTotalOutgoingItemStackRate() const{ return float(); }
float AFGDroneStationInfo::GetEstimatedTotalTransportRate() const{ return float(); }
void AFGDroneStationInfo::OnPairedStationUpdate_Implementation(){ }
void AFGDroneStationInfo::OnPairedStationDestroyed(AActor* destroyedActor){ }
void AFGDroneStationInfo::OnRep_DroneStatus(){ }
void AFGDroneStationInfo::OnRep_EstimatedRoundTripTime(){ }
void AFGDroneStationInfo::OnRep_EstimatedTransportRate(){ }
void AFGDroneStationInfo::OnRep_DroneTripStatistics(){ }
void AFGDroneStationInfo::CalculateEstimatedRoundTripTime(){ }
void AFGDroneStationInfo::CalculateEstimatedTransportRate(){ }
void AFGDroneStationInfo::UpdateDroneTripStatistics(){ }
void AFGDroneStationInfo::AddConnectedStation(AFGDroneStationInfo* otherStation){ }
void AFGDroneStationInfo::RemoveConnectedStation(AFGDroneStationInfo* otherStation){ }
