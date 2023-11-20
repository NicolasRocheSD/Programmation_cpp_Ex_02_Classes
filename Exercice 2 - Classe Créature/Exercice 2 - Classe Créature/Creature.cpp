#include "Creature.h"
#include "CreatureFusion.h"

Creature::Creature()
{
    name = "Default";
    health = 100;
    attackPower = 50;
}

Creature::Creature(std::string n, int h, int ap)
{
    setName(n);
    setHealth(h);
    setAttackPower(ap);
}

std::string Creature::showInfos()
{
    std::string output = "";
    output += "name = ";
    output += getName();

    return output; 
}



std::string Creature::getName()
{
    return name;
}

void Creature::setName(std::string n)
{
    if (n == "") {
        std::cout << "Name vide !" << std::endl;
        name = "Default";
    }
    else {
        name = n;
    }
}



int Creature::getHealth()
{
    return health;
}

void Creature::setHealth(int h)
{
    if (h <= 0 || h > 100) {
        std::cout << "Health incorrecte !" << std::endl;
        health = 100;
    }
    else {
        health = h;
    }
}



int Creature::getAttackPower()
{
    return attackPower;
}

void Creature::setAttackPower(int ap)
{
    if (ap <= 0 || ap > 50) {
        std::cout << "AttackPower incorrecte !" << std::endl;
        attackPower = 50;
    }
    else {
        attackPower = ap;
    }
}

std::ostream& operator<<(std::ostream& out, const Creature& c)
{
    out << "--- " << c.name << " ---" << std::endl;
    out << c.health << " Health" << " || " << c.attackPower << " AttackPower" << std::endl;
    return out;
}



void Creature::attack(Creature& p)
{
    std::cout << name << " attaque " << p.name << " pour " << attackPower << " de degats !" << std::endl;
    p.health = p.health - attackPower;
    std::cout << "Il reste "<< p.health << " points de vie à la creature " << p.name << " !" << std::endl;
}

/*
void Creature::attack(Creature& p)
{
    if (isFlying) {
        std::cout << name << " attaque " << p.name << " pour " << attackPower * 2 << " de degats !" << std::endl;
        p.health = p.health - attackPower;
        health = health - 10;
        std::cout << "Il reste " << p.health << " points de vie à la creature " << p.name << " !" << std::endl;
    }
    else if (isBloody) {
        std::cout << name << " attaque " << p.name << " pour " << attackPower / 2 << " de degats !" << std::endl;
        p.health = p.health - attackPower;
        health = health + attackPower;
        std::cout << "Il reste " << p.health << " points de vie à la creature " << p.name << " !" << std::endl;
    }
    else if (isFusion) {
        std::cout << name << " attaque " << p.name << " pour " << attackPower << " de degats !" << std::endl;
        p.health = p.health - attackPower;
        std::cout << "Il reste " << p.health << " points de vie à la creature " << p.name << " !" << std::endl;
    }
    else {
        std::cout << name << " attaque " << p.name << " pour " << attackPower << " de degats !" << std::endl;
        p.health = p.health - attackPower;
        std::cout << "Il reste " << p.health << " points de vie à la creature " << p.name << " !" << std::endl;
    }
}
 */