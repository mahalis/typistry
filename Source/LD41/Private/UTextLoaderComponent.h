#pragma once

#include "Core.h"
#include "Components/ActorComponent.h"
#include "UTextLoaderComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class UTextLoaderComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTextLoaderComponent();

	UFUNCTION(BlueprintCallable)
	FString ReadFile(FString filename);
};
