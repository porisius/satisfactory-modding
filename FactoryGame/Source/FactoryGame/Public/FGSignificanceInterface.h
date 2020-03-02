// Copyright 2016-2019 Coffee Stain Studios. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "FGSignificanceInterface.generated.h"

// This class does not need to be modified.
UINTERFACE( Blueprintable )
class FACTORYGAME_API UFGSignificanceInterface : public UInterface
{
	GENERATED_BODY()

public:
	FORCEINLINE ~UFGSignificanceInterface() = default;
};

/**
 * 
 */
class FACTORYGAME_API IFGSignificanceInterface
{
	GENERATED_BODY()
public:
	/** Call when actor gained significance */
	UFUNCTION( BlueprintNativeEvent, Category = "Significance" )
	void GainedSignificance();

	/** Call when actor gained significance */
	UFUNCTION( BlueprintNativeEvent, Category = "Significance" )
	void LostSignificance();

	/** Call before adding object to significance in order to prepare it. ( Set up bounds and stuff ) */
	UFUNCTION()
	virtual void SetupForSignificance();

	/** Defaults to 0.0f */
	UFUNCTION()
	virtual float GetSignificanceBias();

	/** Defaults to 10000.0ff */
	UFUNCTION()
	virtual float GetSignificanceRange();

	UFUNCTION()
	virtual void GainedSignificance_Native();

	UFUNCTION()
	virtual void LostSignificance_Native();
public:
	
	
};
