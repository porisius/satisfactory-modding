// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGFreightWagon.h"

AFGFreightWagon::AFGFreightWagon(){ }
void AFGFreightWagon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGFreightWagon::BeginPlay(){ }
void AFGFreightWagon::Tick(float dt){ }
UPawnMovementComponent* AFGFreightWagon::GetMovementComponent() const{ return nullptr; }
UFGRailroadVehicleMovementComponent* AFGFreightWagon::GetRailroadVehicleMovementComponent() const{ return nullptr; }
FText AFGFreightWagon::GetLookAtDecription_Implementation(AFGCharacterPlayer* byCharacter, const FUseState& state) const{ return FText(); }
void AFGFreightWagon::OnUse_Implementation( AFGCharacterPlayer* byCharacter, const FUseState& state){ }
bool AFGFreightWagon::IsUseable_Implementation() const{ return bool(); }
UFGInventoryComponent* AFGFreightWagon::GetFreightInventory() const{ return nullptr; }
void AFGFreightWagon::SetCargoMeshVisibility(bool isVisible){ }
void AFGFreightWagon::UpdateFreightCargoType(EFreightCargoType forceType){ }
void AFGFreightWagon::UpdateFreightPayloadMass(){ }
bool AFGFreightWagon::CanDockWithPlatformOfType(EFreightCargoType platformType) const{ return bool(); }
void AFGFreightWagon::KillOverlappedCharacters(){ }
void AFGFreightWagon::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
void AFGFreightWagon::OnItemAddedToFreight(TSubclassOf<  UFGItemDescriptor > itemClass, int32 numAdded){ }
void AFGFreightWagon::OnItemRemovedFromFreight(TSubclassOf<  UFGItemDescriptor > itemClass, int32 numRemoved){ }
void AFGFreightWagon::InitializeInventoryComponent(){ }
UStaticMesh* AFGFreightWagon::GetCargoStaticMesh(){ return nullptr; }
float AFGFreightWagon::GetInventoryFilledPercentage() const{ return float(); }
FName AFGFreightWagon::VehicleMovementComponentName = FName();
FName AFGFreightWagon::CargoMeshComponentName = FName();
