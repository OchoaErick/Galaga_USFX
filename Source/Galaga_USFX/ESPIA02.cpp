// Fill out your copyright notice in the Description page of Project Settings.


#include "ESPIA02.h"
AESPIA02::AESPIA02() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Torus.Shape_Torus'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}

void AESPIA02::Mover() {

}
void AESPIA02::Vida() {

}
void AESPIA02::Ataque() {

}
void AESPIA02::Ocultar() {

}
void AESPIA02::Velocidadplus() {

}