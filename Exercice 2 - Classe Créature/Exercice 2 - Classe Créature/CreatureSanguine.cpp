#include "CreatureSanguine.h"

CreatureSanguine::CreatureSanguine()
{
    name = "DefaultSanguine";
    health = 100;
    attackPower = 50;
}

CreatureSanguine::CreatureSanguine(std::string n, int h, int ap)
{
    setName(n);
    setHealth(h/2);
    setAttackPower(ap/2);
}