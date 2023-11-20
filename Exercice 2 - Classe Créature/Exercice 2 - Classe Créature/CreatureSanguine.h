#pragma once
#include "Creature.h"

class CreatureSanguine :
    public Creature
{
public:
    CreatureSanguine();
    CreatureSanguine(std::string n, int h, int ap);
};

