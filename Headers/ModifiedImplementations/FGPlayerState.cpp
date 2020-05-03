// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGPlayerState.h"

FHotbar::FHotbar( AFGPlayerState* owningState, const FHotbar& hotbar){ }
FHotbar::FHotbar(TArray<  UFGHotbarShortcut* > hotbarShortcuts){ }
FPresetHotbar::FPresetHotbar( AFGPlayerState* owningState, const FPresetHotbar& presetHotbar){ }
AFGPlayerState::AFGPlayerState() : Super() {
	this->mSlotNum = -1;
	this->mNumArmSlots = 1;
	this->NetUpdateFrequency = 10;
}
void AFGPlayerState::Serialize(FArchive& ar){ Super::Serialize(ar); }
void AFGPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const{ }
bool AFGPlayerState::ReplicateSubobjects( UActorChannel* channel,  FOutBunch* bunch, FReplicationFlags* repFlags){ return bool(); }
void AFGPlayerState::BeginPlay(){ }
void AFGPlayerState::CopyProperties(APlayerState* playerState){ }
void AFGPlayerState::PreSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPlayerState::PostSaveGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPlayerState::PreLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPlayerState::PostLoadGame_Implementation(int32 saveVersion, int32 gameVersion){ }
void AFGPlayerState::GatherDependencies_Implementation(TArray< UObject* >& out_dependentObjects){ }
bool AFGPlayerState::NeedTransform_Implementation(){ return bool(); }
bool AFGPlayerState::ShouldSave_Implementation() const{ return bool(); }
void AFGPlayerState::SetSlotData(FSlotData slotData){ }
FString AFGPlayerState::GetUserName(){ return FString(); }
FString AFGPlayerState::GetUserID(){ return FString(); }
FUniqueNetIdRepl AFGPlayerState::GetUniqeNetId(){ return FUniqueNetIdRepl(); }
FString AFGPlayerState::GetSteamID(){ return FString(); }
void AFGPlayerState::CreateTutorialSubsystem(){ }
TArray< TSubclassOf< class UFGMessageBase > > AFGPlayerState::GetAllMessages(EMessageType messageType){ return TArray<TSubclassOf<class UFGMessageBase> >(); }
void AFGPlayerState::ReadMessage(TSubclassOf<  UFGMessageBase > inMessage){ }
void AFGPlayerState::AddMessage(TSubclassOf<  UFGMessageBase > inMessage){ }
void AFGPlayerState::RemoveMessage(TSubclassOf<  UFGMessageBase > inMessage){ }
void AFGPlayerState::SetupDefaultShortcuts(){ }
UFGHotbarShortcut* AFGPlayerState::CreateShortcut(TSubclassOf<  UFGHotbarShortcut > shortcutClass){ return nullptr; }
void AFGPlayerState::GetCurrentShortcuts(TArray<  UFGHotbarShortcut* >& out_shortcuts){ }
UFGHotbarShortcut* AFGPlayerState::GetShortcutFromCurrentHotbar(int32 shortcutIndex){ return nullptr; }
void AFGPlayerState::GetPresetShortcuts(int32 presetHotbarIndex, TArray<  UFGHotbarShortcut* >& out_shortcuts){ }
void AFGPlayerState::GetAllPresetHotbars(TArray<FPresetHotbar>& out_presetHotbars){ }
void AFGPlayerState::SetHotbarIndex(int32 val){ }
bool AFGPlayerState::CreatePresetFromCurrentHotbar(const FText& presetName, int32 iconIndex){ return bool(); }
bool AFGPlayerState::CanCreateNewPresetHotbar() const{ return bool(); }
bool AFGPlayerState::CopyCurrentHotbarToPresetHotbar(int32 presetHotbarIndex){ return bool(); }
void AFGPlayerState::ChangeNameOfPresetHotbar(int32 presetHotbarIndex, const FText& newName){ }
void AFGPlayerState::ChangeIconIndexOfPresetHotbar(int32 presetHotbarIndex, int32 iconIndex){ }
bool AFGPlayerState::RemovePresetHotbar(int32 presetHotbarIndex){ return bool(); }
bool AFGPlayerState::CopyPresetHotbarToCurrentHotbar(int32 presetHotbarIndex){ return bool(); }
void AFGPlayerState::SetRecipeShortcutOnIndex(TSubclassOf<  UFGRecipe > recipe, int32 onIndex){ }
bool AFGPlayerState::GetAndSetFirstTimeEquipped( AFGEquipment* equipment){ return bool(); }
AFGPlayerController* AFGPlayerState::GetOwningController() const{ return nullptr; }
void AFGPlayerState::AddNewRecipe(TSubclassOf< UFGRecipe > recipe){ }
void AFGPlayerState::GetNewRecipes(TArray<TSubclassOf<class UFGRecipe>>& out_newRecipes) const{ }
void AFGPlayerState::RemoveRecipe(TSubclassOf< UFGRecipe > recipe){ }
void AFGPlayerState::Server_RemoveRecipe_Implementation(TSubclassOf< UFGRecipe > recipe){ }
bool AFGPlayerState::Server_RemoveRecipe_Validate(TSubclassOf< UFGRecipe > recipe){ return bool(); }
void AFGPlayerState::AddArmSlots(int32 slotsToAdd){ }
void AFGPlayerState::SetOnlyShowAffordableRecipes(bool enabled){ }
void AFGPlayerState::Server_SetOnlyShowAffordableRecipes_Implementation(bool enabled){ }
bool AFGPlayerState::Server_SetOnlyShowAffordableRecipes_Validate(bool enabled){ return bool(); }
void AFGPlayerState::SetItemCategoryCollapsed(TSubclassOf<  UFGItemCategory > itemCategory, bool collapsed){ }
void AFGPlayerState::Server_SetItemCategoryCollapsed_Implementation(TSubclassOf<  UFGItemCategory > itemCategory, bool collapsed){ }
bool AFGPlayerState::Server_SetItemCategoryCollapsed_Validate(TSubclassOf<  UFGItemCategory > itemCategory, bool collapsed){ return bool(); }
void AFGPlayerState::SetMapFilter(ERepresentationType representationType, bool visible){ }
void AFGPlayerState::Server_SetMapFilter_Implementation(ERepresentationType representationType, bool visible){ }
bool AFGPlayerState::Server_SetMapFilter_Validate(ERepresentationType representationType, bool visible){ return bool(); }
void AFGPlayerState::SetCompassFilter(ERepresentationType representationType, bool visible){ }
void AFGPlayerState::Server_SetCompassFilter_Implementation(ERepresentationType representationType, bool visible){ }
bool AFGPlayerState::Server_SetCompassFilter_Validate(ERepresentationType representationType, bool visible){ return bool(); }
void AFGPlayerState::UpdateOwningPawnActorRepresentation() const{ }
void AFGPlayerState::DumpHotbars(){ }
void AFGPlayerState::OnRep_HotbarShortcuts(){ }
void AFGPlayerState::OnRep_CurrentHotbarIndex(){ }
