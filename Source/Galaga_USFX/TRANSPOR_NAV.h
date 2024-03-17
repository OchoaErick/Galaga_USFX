// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ENEMY_NAV.h"
#include "TRANSPOR_NAV.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ATRANSPOR_NAV : public AENEMY_NAV
{
	GENERATED_BODY()
private:
	float capacidad;
	bool transportando;
	float tiempo_descarga;
public:
	ATRANSPOR_NAV();
	FORCEINLINE float GetCapacidad() const { return capacidad; }
	FORCEINLINE bool GetTransportando() const { return transportando; }
	FORCEINLINE float GetTiempo_descarga() const { return tiempo_descarga; }

	FORCEINLINE void SetCapacidad(float _capacidad) { capacidad = _capacidad; }
	FORCEINLINE void SetTransportando(bool _transportando) { transportando = _transportando; }
	FORCEINLINE void SetTiempo_descarga(float _tiempo_descarga) { tiempo_descarga = _tiempo_descarga; }

protected:
	virtual void Mover();
	virtual void Vida();
	virtual void Descargar();

};
