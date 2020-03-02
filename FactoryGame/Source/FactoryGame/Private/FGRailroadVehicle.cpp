// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGRailroadVehicle.h"

AFGRailroadVehicle::AFGRailroadVehicle(){ }
void AFGRailroadVehicle::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
bool AFGRailroadVehicle::IsNetRelevantFor(const AActor* RealViewer, const AActor* ViewTarget, const FVector& SrcLocation) const{ return bool(); }
void AFGRailroadVehicle::BeginPlay(){ }
void AFGRailroadVehicle::Destroyed(){ }
void AFGRailroadVehicle::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGRailroadVehicle::Tick(float dt){ }
bool AFGRailroadVehicle::CanDismantle_Implementation() const{ return bool(); }
void AFGRailroadVehicle::GainedSignificance_Implementation(){ }
void AFGRailroadVehicle::LostSignificance_Implementation(){ }
void AFGRailroadVehicle::UpdateAnimation(){ }
UFGRailroadVehicleMovementComponent* AFGRailroadVehicle::GetRailroadVehicleMovementComponent() const{ return nullptr; }
bool AFGRailroadVehicle::IsDocked() const{ return bool(); }
void AFGRailroadVehicle::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
bool AFGRailroadVehicle::IsVehicleNetRelevantFor(const  AFGRailroadVehicle* vehicle, const FVector& SrcLocation) const{ return bool(); }
void AFGRailroadVehicle::CoupleVehicleAt(AFGRailroadVehicle* vehicle, ERailroadVehicleCoupler coupler){ }
void AFGRailroadVehicle::DecoupleVehicleAt(ERailroadVehicleCoupler coupler){ }
