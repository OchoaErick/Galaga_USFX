// Fill out your copyright notice in the Description page of Project Settings.


#include "CARGA02.h"
ACARGA02::ACARGA02() {
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Plane.Shape_Plane'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ACARGA02::Mover() {

}
void ACARGA02::Vida() {

}
void ACARGA02::Reabastecer() {

}
