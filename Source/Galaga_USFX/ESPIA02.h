// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ESPIA_NAV.h"
#include "ESPIA02.generated.h"

/**
 * 
 */
UCLASS()
class GALAGA_USFX_API AESPIA02 : public AESPIA_NAV
{
	GENERATED_BODY()
private:
	int multiplicadorbonus;
public:
	AESPIA02();
	FORCEINLINE int GetMultiplicadorBonus() const { return multiplicadorbonus; }

	FORCEINLINE void SetMultiplicadorBonus(int _multiplicadorbonus) { multiplicadorbonus = _multiplicadorbonus; }
protected:
	virtual void Mover();
	virtual void Vida();
	virtual void Ataque();
	virtual void Ocultar();
	virtual void Velocidadplus();

};
