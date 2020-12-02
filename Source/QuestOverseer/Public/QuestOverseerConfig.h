#pragma once
#include "UObject/Object.h"
#include "QuestOverseerConfig.generated.h"

UCLASS(config = Game, defaultconfig)
class OBJECTSPAWNER_API UQuestOverseerConfig : public UObject
{
	GENERATED_BODY()

public:
	UQuestOverseerConfig(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer) {};
};