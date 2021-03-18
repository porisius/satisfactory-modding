// This file has been automatically generated by the Unreal Header Implementation tool

#include "Widgets/Text/STextBlock.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SSpacer.h"
#include "UI/FGComboBoxSearch.h"

#if WITH_EDITOR
const FText UFGComboBoxSearch::GetPaletteCategory(){ return FText(); }
#endif 
void UFGComboBoxSearch::AddOption(const FString& Option){ }
bool UFGComboBoxSearch::RemoveOption(const FString& Option){ return bool(); }
int32 UFGComboBoxSearch::FindOptionIndex(const FString& Option) const{ return int32(); }
FString UFGComboBoxSearch::GetOptionAtIndex(int32 Index) const{ return FString(); }
void UFGComboBoxSearch::ClearOptions(){ }
void UFGComboBoxSearch::ClearSelection(){ }
void UFGComboBoxSearch::RefreshOptions(){ }
void UFGComboBoxSearch::SetSelectedOption(FString Option){ }
void UFGComboBoxSearch::SetSelectedIndex(const int32 Index){ }
FString UFGComboBoxSearch::GetSelectedOption() const{ return FString(); }
int32 UFGComboBoxSearch::GetSelectedIndex() const{ return int32(); }
int32 UFGComboBoxSearch::GetOptionCount() const{ return int32(); }
bool UFGComboBoxSearch::IsOpen() const{ return bool(); }
void UFGComboBoxSearch::ReleaseSlateResources(bool bReleaseChildren){ }
void UFGComboBoxSearch::PostInitProperties(){ Super::PostInitProperties(); }
void UFGComboBoxSearch::Serialize(FArchive& Ar){ Super::Serialize(Ar); }
void UFGComboBoxSearch::PostLoad(){ Super::PostLoad(); }
void UFGComboBoxSearch::UpdateOrGenerateWidget(TSharedPtr<FString> Item){ }
TSharedRef<SWidget> UFGComboBoxSearch::HandleGenerateWidget(TSharedPtr<FString> Item) const{ return SNew(SSpacer); }
void UFGComboBoxSearch::HandleSelectionChanged(TSharedPtr<FString> Item, ESelectInfo::Type SelectionType){ }
void UFGComboBoxSearch::HandleOpening(){ }
TSharedRef<SWidget> UFGComboBoxSearch::RebuildWidget(){ return Super::RebuildWidget(); }
UFGComboBoxSearch::UFGComboBoxSearch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
