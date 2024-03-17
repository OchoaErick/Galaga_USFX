// Fill out your copyright notice in the Description page of Project Settings.


#include "TRANSPOR_NAV.h"
ATRANSPOR_NAV::ATRANSPOR_NAV(){
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Trim_90_Out.Shape_Trim_90_Out'"));
	EnemyMesh->SetStaticMesh(ShipMesh.Object);

}
void ATRANSPOR_NAV::Mover() {

}
void ATRANSPOR_NAV::Vida() {

}
void ATRANSPOR_NAV::Descargar() {

}
