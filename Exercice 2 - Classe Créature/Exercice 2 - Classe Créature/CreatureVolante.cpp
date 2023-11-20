#include "CreatureVolante.h"

CreatureVolante::CreatureVolante()
{
    name = "DefaultVolante";
    health = 100;
    attackPower = 50;
}

CreatureVolante::CreatureVolante(std::string n, int h, int ap)
{
    setName(n);
    setHealth(h);
    setAttackPower(ap);
}