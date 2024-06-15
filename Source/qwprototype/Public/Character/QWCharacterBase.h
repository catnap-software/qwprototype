// Copyright CatnapSoftware 2024

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "QWCharacterBase.generated.h"

UCLASS(Abstract)
class QWPROTOTYPE_API AQWCharacterBase : public ACharacter
{
	GENERATED_BODY()

public:

	AQWCharacterBase();

protected:

	virtual void BeginPlay() override;

public:	


};
