// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TRANSPOR_NAV.h"
#include "TRANSPOR_01.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ATRANSPOR_01 : public ATRANSPOR_NAV
{
	GENERATED_BODY()
	
private:
	float capacidad;
	FVector tipoNave01;
public:
	ATRANSPOR_01();
	FORCEINLINE float GetCapacidad() const { return capacidad; }
	FORCEINLINE FVector GetTipoNaveGen01() const { return tipoNave01; }

	FORCEINLINE void SetCapacidad(float _capacidad) { capacidad = _capacidad; }
	FORCEINLINE void  SetCapacidad(FVector _tipoNave01) { tipoNave01 = _tipoNave01; }
protected:
	virtual void Mover();
	virtual void Vida();
	virtual void Descargar();
};
