// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGBuildableWidgetSign.h"

AFGBuildableWidgetSign::AFGBuildableWidgetSign(){ }
void AFGBuildableWidgetSign::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGBuildableWidgetSign::BeginPlay(){ }
void AFGBuildableWidgetSign::EndPlay(const EEndPlayReason::Type EndPlayReason){ }
void AFGBuildableWidgetSign::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableWidgetSign::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGBuildableWidgetSign::OnConstruction(const FTransform& transform){ }
AFGBuildable* AFGBuildableWidgetSign::GetBuildable_Implementation(){ return nullptr; }
TSubclassOf< UFGSignTypeDescriptor > AFGBuildableWidgetSign::GetSignTypeDescriptor_Implementation(){ return TSubclassOf<UFGSignTypeDescriptor>(); }
FVector2D AFGBuildableWidgetSign::GetSignDimensions_Implementation(){ return FVector2D(); }
void AFGBuildableWidgetSign::GainedSignificance_Implementation(){ }
void AFGBuildableWidgetSign::LostSignificance_Implementation(){ }
void AFGBuildableWidgetSign::SetPrefabSignData(FPrefabSignData& signData){ }
void AFGBuildableWidgetSign::GetSignPrefabData(FPrefabSignData& out_signData){ }
void AFGBuildableWidgetSign::UpdateSignElements(FPrefabSignData& prefabSignData){ }
void AFGBuildableWidgetSign::OnRep_SignDataDirty(){ }
