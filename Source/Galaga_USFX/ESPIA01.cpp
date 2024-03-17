// Fill out your copyright notice in the Description page of Project Settings.


#include "ESPIA01.h"
AESPIA01::AESPIA01() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim.Shape_Trim'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void AESPIA01::Mover() {

}
void AESPIA01::Vida() {

}
void AESPIA01::Ataque() {

}
void AESPIA01::Ocultar() {

}
void AESPIA01::Cadenciaplus() {

}
