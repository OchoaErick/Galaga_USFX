// Fill out your copyright notice in the Description page of Project Settings.


#include "OSO01.h"
AOSO01::AOSO01() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe.Shape_Pipe'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void AOSO01::Mover() {

}
void AOSO01::Vida() {

}
void AOSO01::Ataque() {

}
void AOSO01::Bombardear() {

}
void AOSO01::Ocultar() {

}
void AOSO01::Descargar() {

}
void AOSO01::Escudo() {

}