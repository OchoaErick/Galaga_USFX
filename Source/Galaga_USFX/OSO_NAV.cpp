// Fill out your copyright notice in the Description page of Project Settings.


#include "OSO_NAV.h"
AOSO_NAV::AOSO_NAV() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Wedge_A.Shape_Wedge_A'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void AOSO_NAV::Mover() {

}
void AOSO_NAV::Vida() {

}
void AOSO_NAV::Ataque() {

}
void AOSO_NAV::Bombardear() {

}
void AOSO_NAV::Ocultar() {

}
void AOSO_NAV::Descargar() {

}
void AOSO_NAV::Escudo() {

}
