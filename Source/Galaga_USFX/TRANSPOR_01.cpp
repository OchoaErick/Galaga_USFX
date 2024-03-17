// Fill out your copyright notice in the Description page of Project Settings.


#include "TRANSPOR_01.h"
ATRANSPOR_01::ATRANSPOR_01() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ATRANSPOR_01::Mover() {

}
void ATRANSPOR_01::Vida() {

}
void ATRANSPOR_01::Descargar() {

}

