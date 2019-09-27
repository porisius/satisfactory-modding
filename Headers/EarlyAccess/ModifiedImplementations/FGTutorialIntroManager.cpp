// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGTutorialIntroManager.h"

AFGTutorialIntroManager* AFGTutorialIntroManager::Get( UWorld* world){ return nullptr; }
AFGTutorialIntroManager* AFGTutorialIntroManager::Get( UObject* worldContext){ return nullptr; }
AFGTutorialIntroManager::AFGTutorialIntroManager(){ }
void AFGTutorialIntroManager::GetLifetimeReplicatedProps( TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
void AFGTutorialIntroManager::Tick( float DeltaTime){ }
void AFGTutorialIntroManager::PreSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGTutorialIntroManager::PostSaveGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGTutorialIntroManager::PreLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGTutorialIntroManager::PostLoadGame_Implementation( int32 saveVersion, int32 gameVersion){ }
void AFGTutorialIntroManager::GatherDependencies_Implementation( TArray< UObject* >& out_dependentObjects){ }
bool AFGTutorialIntroManager::NeedTransform_Implementation(){ return bool(); }
bool AFGTutorialIntroManager::ShouldSave_Implementation() const{ return bool(); }
void AFGTutorialIntroManager::AddPlayer(  AFGCharacterPlayer* inPlayer){ }
void AFGTutorialIntroManager::OnResourceScannedFor( TSubclassOf< UFGResourceDescriptor > resourceScannedFor){ }
void AFGTutorialIntroManager::OnDismantleDropPod(){ }
void AFGTutorialIntroManager::SetTradingPostLevel( int32 newLevel){ }
void AFGTutorialIntroManager::SetInputGatesFromTutorialLevel(  AFGPlayerController* playerController){ }
void AFGTutorialIntroManager::SetupDropPod(  AFGCharacterPlayer* forPlayer){ }
void AFGTutorialIntroManager::TradingPostWasBuilt(){ }
void AFGTutorialIntroManager::StartSkipIntroSequence(){ }
void AFGTutorialIntroManager::CancelSkipIntroSequence(){ }
void AFGTutorialIntroManager::EndSkipIntroSequence(){ }
float AFGTutorialIntroManager::GetNormalizedProgressToSkip(){ return float(); }
void AFGTutorialIntroManager::CompleteTutorial(){ }
void AFGTutorialIntroManager::IntroDone(){ }
void AFGTutorialIntroManager::ResetHubTutorial(){ }
void AFGTutorialIntroManager::SetCanSkipTutorialIntro( bool canSkip){ }
void AFGTutorialIntroManager::BeginPlay(){ }
void AFGTutorialIntroManager::OnBuildingBuiltGlobal(  AFGBuildable* buildable){ }
void AFGTutorialIntroManager::OnSchematicPurchased( TSubclassOf< UFGSchematic > newSchematic){ }
void AFGTutorialIntroManager::UpdateTutorial( EIntroTutorialSteps nextTutorialStep){ }
void AFGTutorialIntroManager::HandlePendingTutorials(){ }
void AFGTutorialIntroManager::ClearActiveTutorialHint(){ }
void AFGTutorialIntroManager::OnPlayerAddedItemToInventory( TSubclassOf<  UFGItemDescriptor > itemClass, int32 numAdded){ }
void AFGTutorialIntroManager::OnPlayerAddedItemToArmSlot( TSubclassOf<  UFGItemDescriptor > itemClass, int32 numAdded){ }
void AFGTutorialIntroManager::SetTradingpostBuilt( bool hasbuilt){ }
void AFGTutorialIntroManager::OnIntroDone(){ }
void AFGTutorialIntroManager::OnRep_TradingPostLevel(){ }