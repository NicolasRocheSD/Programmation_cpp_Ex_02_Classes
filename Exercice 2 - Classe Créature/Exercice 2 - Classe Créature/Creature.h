#pragma once
#include <string>
#include <iostream>


class Creature
{
protected:
	std:: string name;
	int health;
	int attackPower;

public:

	Creature();
	Creature(std::string n, int h, int ap);

	std::string showInfos();

	friend std::ostream& operator << (std::ostream& out, const Creature& c);

	std::string getName();
	void setName(std::string n);

	int getHealth();
	void setHealth(int h);

	int getAttackPower();
	void setAttackPower(int ap);

	void attack(Creature& p);
};