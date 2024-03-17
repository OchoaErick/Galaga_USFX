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

AGalaga_USFXGameMode::AGalaga_USFXGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AGalaga_USFXPawn::StaticClass();
}

void AGalaga_USFXGameMode::BeginPlay()
{
	Super::BeginPlay();

	FVector ubicacionNave01 = FVector(-1000.0f, 500.0f, 250.0f);
	FVector ubicacionNave02 = FVector(-900.0f, 400.0f, 250.0f);

	FVector ubicacionNave03 = FVector(-800.0f, 300.0f, 250.0f);
	FVector ubicacionNave04 = FVector(-700.0f, 200.0f, 250.0f);

	FVector ubicacionNave05 = FVector(-600.0f, 100.0f, 250.0f);
	FVector ubicacionNave06 = FVector(-500.0f, 0.0f, 250.0f);

	FVector ubicacionNave07 = FVector(-400.0f, -100.0f, 250.0f);
	FVector ubicacionNave08 = FVector(-300.0f, -200.0f, 250.0f);

	FVector ubicacionNave09 = FVector(-200.0f, -300.0f, 250.0f);

	FRotator rotacionNave = FRotator(0.0f, 0.0f, 0.0f);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		CAZA01 = World->SpawnActor<ACAZA01>(ubicacionNave01, rotacionNave);
		CAZA02 = World->SpawnActor<ACAZA02>(ubicacionNave02, rotacionNave);
		ESPIA01 = World->SpawnActor<AESPIA01>(ubicacionNave03, rotacionNave);
		ESPIA02 = World->SpawnActor<AESPIA02>(ubicacionNave04, rotacionNave);
		OSO01 = World->SpawnActor<AOSO01>(ubicacionNave05, rotacionNave);
		OSO02 = World->SpawnActor<AOSO02>(ubicacionNave06, rotacionNave);
		TRANSPOR_01 = World->SpawnActor<ATRANSPOR_01>(ubicacionNave07, rotacionNave);
		TRANSPOR_02 = World->SpawnActor<ATRANSPOR_02>(ubicacionNave08, rotacionNave);
	}
	CAZA01->Setposicion(FVector(500.0f, 500.0f, 200.0f));
	CAZA02->Setposicion(FVector(500.0f, 500.0f, 200.0f));
	ESPIA01->Setposicion(FVector(500.0f, 500.0f, 200.0f));
	ESPIA02->Setposicion(FVector(500.0f, 500.0f, 200.0f));
	OSO01->Setposicion(FVector(500.0f, 500.0f, 200.0f));
	OSO02->Setposicion(FVector(500.0f, 500.0f, 200.0f));
	TRANSPOR_01->Setposicion(FVector(500.0f, 500.0f, 200.0f));
	TRANSPOR_02->Setposicion(FVector(500.0f, 500.0f, 200.0f));
}
