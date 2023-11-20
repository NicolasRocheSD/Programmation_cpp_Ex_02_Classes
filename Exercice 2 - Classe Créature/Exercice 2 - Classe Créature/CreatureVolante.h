#pragma once
#include "Creature.h"

class CreatureVolante :
    public Creature
{
public:
    CreatureVolante();
    CreatureVolante(std::string n, int h, int ap);
};

