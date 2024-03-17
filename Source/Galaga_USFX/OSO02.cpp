// Fill out your copyright notice in the Description page of Project Settings.


#include "OSO02.h"
AOSO02::AOSO02() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe_90.Shape_Pipe_90'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void AOSO02::Mover() {

}
void AOSO02::Vida() {

}
void AOSO02::Ataque() {

}
void AOSO02::Bombardear() {

}
void AOSO02::Ocultar() {

}
void AOSO02::Descargar() {

}
void AOSO02::Escudo() {

}


