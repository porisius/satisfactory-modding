// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPipeSubsystem.h"

AFGPipeSubsystem::AFGPipeSubsystem(){ }
void AFGPipeSubsystem::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPipeSubsystem::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPipeSubsystem::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPipeSubsystem::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPipeSubsystem::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGPipeSubsystem::NeedTransform_Implementation(){ return bool(); }
bool AFGPipeSubsystem::ShouldSave_Implementation() const{ return bool(); }
void AFGPipeSubsystem::Tick(float dt){ }
void AFGPipeSubsystem::DisplayDebug( UCanvas* canvas, const  FDebugDisplayInfo& debugDisplay, float& YL, float& YPos){ }
AFGPipeSubsystem* AFGPipeSubsystem::Get(UWorld* world){ return nullptr; }
AFGPipeSubsystem* AFGPipeSubsystem::GetPipeSubsystem(UObject* worldContext){ return nullptr; }
void AFGPipeSubsystem::RegisterPipeNetwork( AFGPipeNetwork* network){ }
void AFGPipeSubsystem::UnregisterPipeNetwork( AFGPipeNetwork* network){ }
void AFGPipeSubsystem::TrySetNetworkFluidDescriptor(int32 networkID, TSubclassOf<  UFGItemDescriptor > fluidDescriptor){ }
void AFGPipeSubsystem::FlushIntegrant(AActor* integrantActor){ }
void AFGPipeSubsystem::FlushPipeNetwork(int32 networkID){ }
void AFGPipeSubsystem::FlushPipeNetworkFromIntegrant(AActor* integrantActor){ }
void AFGPipeSubsystem::RegisterFluidIntegrant( IFGFluidIntegrantInterface* fluidIntegrant){ }
void AFGPipeSubsystem::UnregisterFluidIntegrant( IFGFluidIntegrantInterface* fluidIntegrant){ }
int32 AFGPipeSubsystem::GenerateUniqueID(){ return int32(); }
void AFGPipeSubsystem::TickPipeNetworks(float dt){ }
void AFGPipeSubsystem::MergePipeNetworks(int32 first, int32 second){ }
int32 AFGPipeSubsystem::CreatePipeNetwork(){ return int32(); }
void AFGPipeSubsystem::RemovePipeNetwork(int32 networkID){ }
void AFGPipeSubsystem::RemoveFluidIntegrantFromNetwork( IFGFluidIntegrantInterface* fluidIntegrant){ }
void AFGPipeSubsystem::AddFluidIntegrantToNetwork( IFGFluidIntegrantInterface* fluidIntegrant, int32 networkID){ }
