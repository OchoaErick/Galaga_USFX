// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ENEMY_NAV.h"
#include "ESPIA_NAV.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AESPIA_NAV : public AENEMY_NAV
{
	GENERATED_BODY()
private:
	bool invisible;
	float tiempo_de_poder;
public:
	AESPIA_NAV();
	FORCEINLINE bool GetInvisible() const { return invisible; }
	FORCEINLINE float GetTiempo_de_poder() const { return tiempo_de_poder; }

	FORCEINLINE void SetInvisible(bool _Invisible) { invisible = _Invisible; }
	FORCEINLINE void SetTiempo_de_poder(float _Tiempo_de_poder) { tiempo_de_poder = _Tiempo_de_poder; }
protected:
	virtual void Mover();
	virtual void Vida();
	virtual void Ataque();
	virtual void Ocultar();
};
