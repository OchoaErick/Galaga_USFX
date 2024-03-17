// Fill out your copyright notice in the Description page of Project Settings.


#include "TRANSPOR_02.h"
ATRANSPOR_02::ATRANSPOR_02() {
    static ConstructorHelpers::FObjectFinder<UStaticMesh> ShipMesh(TEXT("taticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
    EnemyMesh->SetStaticMesh(ShipMesh.Object);
}
void ATRANSPOR_02::Mover() {

}
void ATRANSPOR_02::Vida() {

}
void ATRANSPOR_02::Descargar() {

}

