// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCircuit.h"

void UFGCircuit::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
bool UFGCircuit::IsSupportedForNetworking() const{ return bool(); }
bool UFGCircuit::IsNameStableForNetworking() const{ return bool(); }
void UFGCircuit::PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker){ }
UFGCircuit::UFGCircuit() : Super() {
	this->mCircuitID = -1;
}
void UFGCircuit::BeginDestroy(){ Super::BeginDestroy(); }
void UFGCircuit::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGCircuit::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGCircuit::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGCircuit::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void UFGCircuit::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool UFGCircuit::NeedTransform_Implementation(){ return bool(); }
bool UFGCircuit::ShouldSave_Implementation() const{ return bool(); }
UWorld* UFGCircuit::GetWorld() const{ return nullptr; }
void UFGCircuit::MarkAsChanged(){ }
void UFGCircuit::MarkForFullRebuild(){ }
void UFGCircuit::RegisterInteractingPlayer( AFGCharacterPlayer* player){ }
void UFGCircuit::UnregisterInteractingPlayer( AFGCharacterPlayer* player){ }
bool UFGCircuit::HasAuthority() const{ return bool(); }
AFGCircuitSubsystem* UFGCircuit::GetOwningCircuitSubsystem() const{ return nullptr; }
void UFGCircuit::TickCircuit(float dt){ }
void UFGCircuit::OnCircuitChanged(){ }
void UFGCircuit::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos, float indent){ }
void UFGCircuit::SetReplicateDetails(bool replicateDetails){ }
