// Copyright Epic Games, Inc. All Rights Reserved.

#include "Galaga_USFXGameMode.h"
#include "Galaga_USFXPawn.h"
#include "CAZA01.h"
#include "CAZA02.h"
#include "ESPIA01.h"
#include "ESPIA02.h"
#include "OSO01.h"
#include "OSO02.h"
#include "TRANSPOR_01.h"
#include "TRANSPOR_02.h"
#include "CARGA01.h"
#include "CARGA02.h"

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
	NaveEnemiga01 = nullptr;
}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();

	FVector ubicacionInicial = FVector(0.0f, 50.0f, 250.0f);
	FRotator rotacionNave = FRotator(2.0f, 2.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		NaveEnemiga01 = World->SpawnActor<AENEMY_NAV>(ubicacionInicial, rotacionNave);
	}
	TArray<TSubclassOf<AENEMY_NAV>>NavesArray;
	int x;
	srand(time(NULL));
	for (int i = 0; i < 30; i++) {
		x = 1 + rand() % (10);
		switch (x)
		{
		case 1:
			NavesArray.Add(ACAZA01::StaticClass());
			break;
		case 2:
			NavesArray.Add(ACAZA02::StaticClass());
			break;
		case 3:
			NavesArray.Add(AESPIA01::StaticClass());
			break;
		case 4:
			NavesArray.Add(AESPIA02::StaticClass());
			break;
		case 5:
			NavesArray.Add(AOSO01::StaticClass());
			break;
		case 6:
			NavesArray.Add(AOSO02::StaticClass());
			break;
		case 7:
			NavesArray.Add(ATRANSPOR_01::StaticClass());
			break;
		case 8:
			NavesArray.Add(ATRANSPOR_02::StaticClass());
			break;
		case 9:
			NavesArray.Add(ACARGA01::StaticClass());
			break;
		case 10:
			NavesArray.Add(ACARGA02::StaticClass());
			break;

		}
	}
	for (const TSubclassOf<AENEMY_NAV>& ClaseNave : NavesArray)
	{
		if (ClaseNave)
		{
			FVector SpawnLocation = ubicacionInicial + FVector(FMath::RandRange(-500.0f, 500.0f), FMath::RandRange(-500.0f, 500.0f), 0.0f);
			FRotator SpawnRotation = FRotator(0.0f, 0.0f, 0.0f);
			World->SpawnActor<AENEMY_NAV>(ClaseNave, SpawnLocation, SpawnRotation);
		}
}
}