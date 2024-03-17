// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CARGA_NAV.h"
#include "CARGA02.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ACARGA02 : public ACARGA_NAV
{
	GENERATED_BODY()
private:
	float porcentaje_carga;
	float multiplicador_carga; 
public:
	ACARGA02();
	FORCEINLINE float GetPorcentaje_carga() const { return porcentaje_carga; }
	FORCEINLINE float GetMultipicador_carga() const { return multiplicador_carga; }

	FORCEINLINE void SetPorcentaje_carga(float _porcentaje_carga) { porcentaje_carga = _porcentaje_carga; }
	FORCEINLINE void SetMultiplicador_carga(float _multiplicador_carga) { multiplicador_carga = _multiplicador_carga; }
protected:
	virtual void Mover();
	virtual void Vida();
	virtual void Reabastecer();

};
