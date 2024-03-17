// Fill out your copyright notice in the Description page of Project Settings.


#include "CARGA_NAV.h"
ACARGA_NAV::ACARGA_NAV() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_B.Shape_Wedge_B'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ACARGA_NAV::Mover() {

}
void ACARGA_NAV::Vida() {

}
void ACARGA_NAV::Reabastecer() {

}