// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESPIA_NAV.h"
#include "ESPIA01.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AESPIA01 : public AESPIA_NAV
{
	GENERATED_BODY()
private:
	int bonus;
public:
	AESPIA01();
	FORCEINLINE int GetBonus() const { return bonus; }

	FORCEINLINE void SetBonus(int _bonus) { bonus = _bonus; }
protected:
	virtual void Mover();
	virtual void Vida();
	virtual void Ataque();
	virtual void Ocultar();
	virtual void Cadenciaplus();
	
};
