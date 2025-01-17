﻿// Copyright Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FGServerStateListener.h"
#include "UserWidget.h"
#include "FGAbstractServerWidget.generated.h"

/**
 * 
 */
UCLASS( Abstract )
class FACTORYGAME_API UFGAbstractServerWidget : public UUserWidget, public IFGServerStateListener
{
	GENERATED_BODY()

public:
	UFUNCTION( BlueprintCallable )
	void SetServer( class UFGServerObject* Server );
	
protected:
	UFUNCTION( BlueprintImplementableEvent, meta = ( DisplayName = "On Server Changed" ) )
	void BP_OnServerChanged( class UFGServerObject* Server );

	virtual void NativeOnServerChanged( class UFGServerObject* Server ) {}

	UPROPERTY( BlueprintReadOnly )
	class UFGServerObject* mServer = nullptr;
};
