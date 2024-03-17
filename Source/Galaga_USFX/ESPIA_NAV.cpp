// Fill out your copyright notice in the Description page of Project Settings.


#include "ESPIA_NAV.h"
AESPIA_NAV::AESPIA_NAV() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Tube.Shape_Tube'"));
		EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void AESPIA_NAV::Mover() {

}
void AESPIA_NAV::Vida() {

}
void AESPIA_NAV::Ataque() {

}
void AESPIA_NAV::Ocultar() {

}
