// Fill out your copyright notice in the Description page of Project Settings.


#include "CAZA02.h"
ACAZA02::ACAZA02() {

	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_In.Shape_Trim_90_In'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);

}
void ACAZA02::Mover() {

}
void ACAZA02::Ataque() {

}
void ACAZA02::Vida() {

}
void ACAZA02::Bombardear() {

}
void ACAZA02::Cargar_Sbomba() {

}
