// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "Engine/DeveloperSettings.h"
#include "FGUISettings.generated.h"

UCLASS( config = Game, defaultconfig, meta = ( DisplayName = "Satisfactory UI Settings" ) )
class FACTORYGAME_API UFGUISettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	static const UFGUISettings* Get() { return GetDefault<UFGUISettings>(); };
public:
	/** Widget used to show that the user is setting up a server */
	UPROPERTY( EditAnywhere, config, Category = UI )
	TAssetSubclassOf<UUserWidget> mSettingUpServerWidget;

	/** Widget used to show the user when joining a session */
	UPROPERTY( EditAnywhere, config, Category = UI )
	TAssetSubclassOf<UUserWidget> mJoinSessionWidget;

	/** Widget used to show the user when linking accounts */
	UPROPERTY( EditAnywhere, config, Category = UI )
	TSubclassOf<UUserWidget> mConnectAccountsWidget;

	/** Widget to show the user when unlinking account */
	UPROPERTY( EditAnywhere, config, Category = UI )
	TSubclassOf<UUserWidget> mResetAccountLinkingWidget;

	/** Widget used to show the user when enabling the debug overlay */
	UPROPERTY( EditAnywhere, config, Category = UI )
	TSubclassOf< class UFGDebugOverlayWidget > mDebugOverlayWidgetClass;

	/** Emote wheel widget to select a widget */
	UPROPERTY( EditAnywhere, config, Category = UI )
	TSubclassOf< class UFGInteractWidget > mEmoteMenuWidget;
};