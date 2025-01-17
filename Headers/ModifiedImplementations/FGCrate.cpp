// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGCrate.h"

AFGCrate::AFGCrate(){ }
void AFGCrate::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGCrate::PostActorCreated(){ Super::PostActorCreated(); }
void AFGCrate::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCrate::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCrate::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCrate::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGCrate::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGCrate::NeedTransform_Implementation(){ return bool(); }
bool AFGCrate::ShouldSave_Implementation() const{ return bool(); }
bool AFGCrate::AddAsRepresentation(){ return bool(); }
bool AFGCrate::UpdateRepresentation(){ return bool(); }
bool AFGCrate::RemoveAsRepresentation(){ return bool(); }
bool AFGCrate::IsActorStatic(){ return bool(); }
FVector AFGCrate::GetRealActorLocation(){ return FVector(); }
FRotator AFGCrate::GetRealActorRotation(){ return FRotator(); }
UTexture2D* AFGCrate::GetActorRepresentationTexture(){ return nullptr; }
FText AFGCrate::GetActorRepresentationText(){ return FText(); }
void AFGCrate::SetActorRepresentationText(const FText& newText){ }
FLinearColor AFGCrate::GetActorRepresentationColor(){ return FLinearColor(); }
void AFGCrate::SetActorRepresentationColor(FLinearColor newColor){ }
ERepresentationType AFGCrate::GetActorRepresentationType(){ return ERepresentationType(); }
bool AFGCrate::GetActorShouldShowInCompass(){ return bool(); }
bool AFGCrate::GetActorShouldShowOnMap(){ return bool(); }
EFogOfWarRevealType AFGCrate::GetActorFogOfWarRevealType(){ return EFogOfWarRevealType(); }
float AFGCrate::GetActorFogOfWarRevealRadius(){ return float(); }
ECompassViewDistance AFGCrate::GetActorCompassViewDistance(){ return ECompassViewDistance(); }
void AFGCrate::SetActorCompassViewDistance(ECompassViewDistance compassViewDistance){ }
void AFGCrate::RegisterInteractingPlayer_Implementation( AFGCharacterPlayer* player){ }
void AFGCrate::UnregisterInteractingPlayer_Implementation( AFGCharacterPlayer* player){ }
bool AFGCrate::FilterInventoryClasses(TSubclassOf< UObject > object, int32 idx) const{ return bool(); }
void AFGCrate::SetupInventoryFilter(){ }
void AFGCrate::SetIconType(EFGCrateIconType type){ }
