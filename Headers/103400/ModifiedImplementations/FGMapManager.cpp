// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGMapManager.h"

AFGMapManager* AFGMapManager::Get(UWorld* world){ return nullptr; }
AFGMapManager* AFGMapManager::Get(UObject* worldContext){ return nullptr; }
AFGMapManager::AFGMapManager(){ }
void AFGMapManager::GetLifetimeReplicatedProps(TArray< FLifetimeProperty >& OutLifetimeProps) const{ }
void AFGMapManager::BeginPlay(){ }
void AFGMapManager::Tick( float dt){ }
void AFGMapManager::PreSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGMapManager::PostSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGMapManager::PreLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGMapManager::PostLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGMapManager::GatherDependencies_Implementation( TArray< UObject* >& out_dependentObjects){ }
bool AFGMapManager::NeedTransform_Implementation(){ return bool(); }
bool AFGMapManager::ShouldSave_Implementation() const{ return bool(); }
void AFGMapManager::RequestFogOfWarData(  AFGPlayerController* playerController){ }
void AFGMapManager::TransferFogOfWarData(){ }
void AFGMapManager::SyncFogOfWarChanges( const TArray<uint8>& fogOfWarRawData, int32 index){ }
void AFGMapManager::SetupFogOfWarTexture(){ }
void AFGMapManager::InitialFogOfWarRequest(){ }
void AFGMapManager::SetupRepresentationManager(){ }
void AFGMapManager::BindActorRepresentationManager(  AFGActorRepresentationManager* representationManager){ }
void AFGMapManager::UpdateFogOfWar( UFGActorRepresentation* actor){ }
FVector2D AFGMapManager::GetMapPositionFromWorldLocation( FVector worldLocation){ return FVector2D(); }
float AFGMapManager::GetMapDistanceFromWorldDistance( float worldDistance){ return float(); }
void AFGMapManager::DrawCircle( FVector2D centerPoint, float radius, float gradientHeightModifier){ }
void AFGMapManager::OnActorRepresentationAdded(  UFGActorRepresentation* actorRepresentation){ }
void AFGMapManager::OnActorRepresentationUpdated(  UFGActorRepresentation* actorRepresentation){ }
void AFGMapManager::OnActorRepresentationRemoved(  UFGActorRepresentation* actorRepresentation){ }
