// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableDockingStation.h"

AFGBuildableDockingStation::AFGBuildableDockingStation(){ }
void AFGBuildableDockingStation::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableDockingStation::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
void AFGBuildableDockingStation::BeginPlay(){ }
void AFGBuildableDockingStation::Tick(float DeltaSeconds){ }
void AFGBuildableDockingStation::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGBuildableDockingStation::Destroyed(){ }
void AFGBuildableDockingStation::OnReplicationDetailActorRemoved(){ }
bool AFGBuildableDockingStation::AddAsRepresentation(){ return bool(); }
bool AFGBuildableDockingStation::UpdateRepresentation(){ return bool(); }
bool AFGBuildableDockingStation::RemoveAsRepresentation(){ return bool(); }
bool AFGBuildableDockingStation::IsActorStatic(){ return bool(); }
FVector AFGBuildableDockingStation::GetRealActorLocation(){ return FVector(); }
FRotator AFGBuildableDockingStation::GetRealActorRotation(){ return FRotator(); }
UTexture2D* AFGBuildableDockingStation::GetActorRepresentationTexture(){ return nullptr; }
FText AFGBuildableDockingStation::GetActorRepresentationText(){ return FText(); }
void AFGBuildableDockingStation::SetActorRepresentationText(const FText& newText){ }
FLinearColor AFGBuildableDockingStation::GetActorRepresentationColor(){ return FLinearColor(); }
void AFGBuildableDockingStation::SetActorRepresentationColor(FLinearColor newColor){ }
ERepresentationType AFGBuildableDockingStation::GetActorRepresentationType(){ return ERepresentationType(); }
bool AFGBuildableDockingStation::GetActorShouldShowInCompass(){ return bool(); }
bool AFGBuildableDockingStation::GetActorShouldShowOnMap(){ return bool(); }
EFogOfWarRevealType AFGBuildableDockingStation::GetActorFogOfWarRevealType(){ return EFogOfWarRevealType(); }
float AFGBuildableDockingStation::GetActorFogOfWarRevealRadius(){ return float(); }
ECompassViewDistance AFGBuildableDockingStation::GetActorCompassViewDistance(){ return ECompassViewDistance(); }
void AFGBuildableDockingStation::SetActorCompassViewDistance(ECompassViewDistance compassViewDistance){ }
float AFGBuildableDockingStation::GetSignificanceRange(){ return float(); }
bool AFGBuildableDockingStation::Dock( AActor* actor){ return bool(); }
void AFGBuildableDockingStation::Undock(bool notifyDockedActor){ }
void AFGBuildableDockingStation::SetIsInLoadMode(bool isInLoadMode){ }
bool AFGBuildableDockingStation::GetIsInLoadMode() const{ return bool(); }
bool AFGBuildableDockingStation::IsLoadUnloading() const{ return bool(); }
void AFGBuildableDockingStation::SetStatus(EDockingStationStatus status){ }
void AFGBuildableDockingStation::SetVehicleFuelConsumptionRate(float vehicleFuelConsumptionRate){ }
void AFGBuildableDockingStation::SetItemTransferRate(float itemTransferRate){ }
void AFGBuildableDockingStation::SetMaximumStackTransferRate(float maximumItemTransferRate){ }
FVector AFGBuildableDockingStation::GetWorldDockPosition() const{ return FVector(); }
void AFGBuildableDockingStation::FindStationTargets(TArray<  AFGTargetPoint* >& targets){ }
void AFGBuildableDockingStation::UpdateVehicleTargets(bool lifecycleStart){ }
void AFGBuildableDockingStation::CleanUpStationVehicleTargets(){ }
void AFGBuildableDockingStation::AddDockingVehicle( AFGWheeledVehicle* vehicle){ }
void AFGBuildableDockingStation::RemoveDockingVehicle( AFGWheeledVehicle* vehicle){ }
void AFGBuildableDockingStation::UpdateVehicleFuelConsumptionRate(){ }
void AFGBuildableDockingStation::UpdateMaximumStackTransferRate(bool dispatchToMainThread){ }
void AFGBuildableDockingStation::UpdateItemTransferRate(bool dispatchToMainThread){ }
void AFGBuildableDockingStation::Factory_Tick(float dt){ }
void AFGBuildableDockingStation::Factory_TickProducing(float dt){ }
void AFGBuildableDockingStation::Factory_CollectInput_Implementation(){ }
bool AFGBuildableDockingStation::CanProduce_Implementation() const{ return bool(); }
void AFGBuildableDockingStation::OnRep_ReplicationDetailActor(){ }
AFGReplicationDetailActor_DockingStation* AFGBuildableDockingStation::GetCastRepDetailsActor() const{ return nullptr; }
void AFGBuildableDockingStation::OnRep_FuelInventory(){ }
bool AFGBuildableDockingStation::IsValidFuel(TSubclassOf<  UFGItemDescriptor > resource) const{ return bool(); }
bool AFGBuildableDockingStation::FilterFuelClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
bool AFGBuildableDockingStation::Factory_LoadFuel(UFGInventoryComponent* dockedFuelInventory, float percentOfStack){ return bool(); }
void AFGBuildableDockingStation::Factory_LoadDockedInventory(UFGInventoryComponent* dockedInventory){ }
void AFGBuildableDockingStation::Factory_UnloadDockedInventory(UFGInventoryComponent* dockedInventory){ }
void AFGBuildableDockingStation::LoadUnloadVehicleComplete(){ }
void AFGBuildableDockingStation::OnDockingAreaBeginOverlap(UPrimitiveComponent* thisComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex, bool isFromSweep, const FHitResult& sweepResult){ }
void AFGBuildableDockingStation::OnDockingAreaEndOverlap(UPrimitiveComponent* thisComponent, AActor* otherActor, UPrimitiveComponent* otherComponent, int32 otherBodyIndex){ }
void AFGBuildableDockingStation::OnRep_Status(){ }
void AFGBuildableDockingStation::OnRep_VehicleFuelConsumptionRate(){ }
void AFGBuildableDockingStation::OnRep_ItemTransferRate(){ }
void AFGBuildableDockingStation::OnRep_MaximumStackTransferRate(){ }
FName AFGBuildableDockingStation::sFuelTag = FName();
