// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Galaga_USFXGameMode.generated.h"

class ACAZA01;
class ACAZA02;
class AESPIA01;
class AESPIA02;
class AOSO01;
class AOSO02;
class ATRANSPOR_01;
class ATRANSPOR_02;
class ACARGA01;

UCLASS(MinimalAPI)
class AGalaga_USFXGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AGalaga_USFXGameMode();
public:
	ACAZA01* CAZA01;
	ACAZA02* CAZA02;
	AESPIA01* ESPIA01;
	AESPIA02* ESPIA02;
	AOSO01* OSO01;
	AOSO02* OSO02;
	ATRANSPOR_01* TRANSPOR_01;
	ATRANSPOR_02* TRANSPOR_02;
	ACARGA01* CARGA01;
protected:
	virtual void BeginPlay() override;
};



