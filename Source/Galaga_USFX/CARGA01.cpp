// Fill out your copyright notice in the Description page of Project Settings.


#include "CARGA01.h"
ACARGA01::ACARGA01() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Pipe_180.Shape_Pipe_180'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ACARGA01::Mover() {

}
void ACARGA01::Vida() {

}
void ACARGA01::Reabastecer() {

}
