// Fill out your copyright notice in the Description page of Project Settings.


#include "CAZA_NAV.h"
ACAZA_NAV::ACAZA_NAV() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_TriPyramid.Shape_TriPyramid'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
	void ACAZA_NAV::Mover() {

	}
	void ACAZA_NAV::Ataque() {

	}
	void ACAZA_NAV::Vida() {

	}
	void ACAZA_NAV::Bombardear() {

	}



