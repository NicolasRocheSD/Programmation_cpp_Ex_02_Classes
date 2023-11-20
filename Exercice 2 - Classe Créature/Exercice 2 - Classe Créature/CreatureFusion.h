#pragma once
#include "Creature.h"

class CreatureFusion :
    public Creature
{

private:
    bool isFusion;

public:
    CreatureFusion();
    CreatureFusion(std::string n, int h, int ap, bool isF);

    int getisFusion();
    void setisFusion(bool isF);
};