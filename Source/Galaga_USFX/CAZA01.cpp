// Fill out your copyright notice in the Description page of Project Settings.


#include "CAZA01.h"
ACAZA01::ACAZA01() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_WideCapsule.Shape_WideCapsule'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ACAZA01::Mover() {

}
void ACAZA01::Ataque() {

}
void ACAZA01::Vida() {

}
void ACAZA01::Bombardear() {

}
void ACAZA01::Escudo() {

}
