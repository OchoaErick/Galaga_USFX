// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ENEMY_NAV.h"
#include "CARGA_NAV.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API ACARGA_NAV : public AENEMY_NAV
{
	GENERATED_BODY()
private:
	float capacidad_recargar;
	float velocidad_recarga;
	bool estado_recarga;
public:
	ACARGA_NAV();
	FORCEINLINE float GetCapacidad_recargar() const { return capacidad_recargar; }
	FORCEINLINE float GetVelocidad_recarga() const { return velocidad_recarga; }
	FORCEINLINE bool GetEstado_recarga() const { return estado_recarga; }

	FORCEINLINE void SetCapacidad_recargar(float _capacidad_recargar) { capacidad_recargar = _capacidad_recargar; }
	FORCEINLINE void SetVelocidad_recarga(float _velocidad_recarga) { velocidad_recarga = _velocidad_recarga; }
	FORCEINLINE void SetEstado_recarga(bool _estado_recarga) { estado_recarga = _estado_recarga; }
protected:
	virtual void Mover();
	virtual void Vida();
	virtual void Reabastecer();
};
