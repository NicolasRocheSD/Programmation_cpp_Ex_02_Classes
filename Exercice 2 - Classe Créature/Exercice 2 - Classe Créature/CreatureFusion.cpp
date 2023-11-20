#include "CreatureFusion.h"

CreatureFusion::CreatureFusion()
{
    name = "DefaultFusion";
    health = 100;
    attackPower = 50;
    isFusion = true;
}

CreatureFusion::CreatureFusion(std::string n, int h, int ap, bool isF)
{
    setName(n);
    setHealth(h);
    setAttackPower(ap);
    setisFusion(isF);
}

int CreatureFusion::getisFusion()
{
    return isFusion;
}

void CreatureFusion::setisFusion(bool isF)
{
    isFusion = isF;
}