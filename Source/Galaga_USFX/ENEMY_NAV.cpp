// Fill out your copyright notice in the Description page of Project Settings.


#include "ENEMY_NAV.h"

// Sets default values
AENEMY_NAV::AENEMY_NAV()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	EnemyMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ShipMesh"));
	EnemyMesh->SetupAttachment(RootComponent);
	RootComponent = EnemyMesh;
}

// Called when the game starts or when spawned
void AENEMY_NAV::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AENEMY_NAV::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

