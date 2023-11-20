#include "CreatureSanguine.h"
#include "CreatureVolante.h"
#include "CreatureFusion.h"


int main() {
	Creature Creature1 ("Orc", 100, 50);
	Creature Creature2("Skeleton", 50, 25);
	CreatureVolante CreatureVolante1("Gargoyle", 75, 40);
	CreatureSanguine CreatureSanguine1("Vampire", 100, 50); // Valeurs divisés par 2
	CreatureFusion CreatureFusion1("Chimera", 100, 50, true);

	int actualMonster = 0;
	int playerChoice;



	while (Creature1.getHealth() > 0 || Creature2.getHealth() > 0  || CreatureVolante1.getHealth() > 0 || CreatureSanguine1.getHealth() > 0 || CreatureFusion1.getHealth() > 0) {


		if (Creature1.getHealth() > 0) {
			std:: cout << Creature1 << std::endl;
		}
		else {
			std::cout << "--- " << Creature1.getName() << " est decede !" << "--- " << std::endl << std::endl;
		}


		if (Creature2.getHealth() > 0) {
			std::cout << Creature2 << std::endl;
		}
		else {
			std::cout << "--- " << Creature2.getName() << " est decede !" << "--- " << std::endl << std::endl;
		}


		if (CreatureVolante1.getHealth() > 0) {
			std::cout << CreatureVolante1 << std::endl;
		}
		else {
			std::cout << "--- " << CreatureVolante1.getName() << " est decede !" << "--- " << std::endl << std::endl;
		}


		if (CreatureSanguine1.getHealth() > 0) {
			std::cout << CreatureSanguine1 << std::endl;
		}
		else {
			std::cout << "--- " << CreatureSanguine1.getName() << " est decede !" << "--- " << std::endl << std::endl;
		}


		if (CreatureFusion1.getHealth() > 0) {
			std::cout << CreatureFusion1 << std::endl << std::endl << std::endl;
		}
		else {
			std::cout << "--- " << CreatureFusion1.getName() << " est decede !" << "--- " << std::endl << std::endl;
		}





		bool attackDone = false;
		while (!attackDone) {
			switch (actualMonster) {
				case 0:
					if (Creature1.getHealth() > 0) {
						std::cout << "Quel monstre devrait attaquer le/la " << Creature1.getName() << " devrait attaquer ?" << std::endl
							<< "1 - " << Creature2 << std::endl
							<< "2 - " << CreatureVolante1 << std::endl
							<< "3 - " << CreatureSanguine1 << std::endl
							<< "4 - " << CreatureFusion1 << std::endl;
						std::cin >> playerChoice;
							switch (playerChoice) {
							case 1:
								Creature1.attack(Creature2);
								break;
							case 2:
								Creature1.attack(CreatureVolante1);
								break;
							case 3:
								Creature1.attack(CreatureSanguine1);
								break;
							case 4:
								Creature1.attack(CreatureFusion1);
								break;
							default:
								break;
							}
						attackDone = true;
						break;
					}
				case 1:
					if (Creature2.getHealth() > 0) {
						std::cout << "Quel monstre devrait attaquer le/la " << Creature2.getName() << " devrait attaquer ?" << std::endl
							<< "1 - " << Creature1 << std::endl
							<< "2 - " << CreatureVolante1 << std::endl
							<< "3 - " << CreatureSanguine1 << std::endl
							<< "4 - " << CreatureFusion1 << std::endl;
						std::cin >> playerChoice;
						switch (playerChoice) {
						case 1:
							Creature2.attack(Creature1);
							break;
						case 2:
							Creature2.attack(CreatureVolante1);
							break;
						case 3:
							Creature2.attack(CreatureSanguine1);
							break;
						case 4:
							Creature2.attack(CreatureFusion1);
							break;
						default:
							break;
						}
						attackDone = true;
						break;
					}
				case 2:
					if (CreatureVolante1.getHealth() > 0) {
						std::cout << "Quel monstre devrait attaquer le/la " << CreatureVolante1.getName() << " devrait attaquer ?" << std::endl
							<< "1 - " << Creature1 << std::endl
							<< "2 - " << Creature2 << std::endl
							<< "3 - " << CreatureSanguine1 << std::endl
							<< "4 - " << CreatureFusion1 << std::endl;
						std::cin >> playerChoice;
						switch (playerChoice) {
						case 1:
							CreatureVolante1.attack(Creature1);
							break;
						case 2:
							CreatureVolante1.attack(Creature2);
							break;
						case 3:
							CreatureVolante1.attack(CreatureSanguine1);
							break;
						case 4:
							CreatureVolante1.attack(CreatureFusion1);
							break;
						default:
							break;
						}	
						attackDone = true;
						break;
					}
				case 3:
					if (CreatureSanguine1.getHealth() > 0) {
						std::cout << "Quel monstre devrait attaquer le/la " << CreatureSanguine1.getName() << " devrait attaquer ?" << std::endl
							<< "1 - " << Creature1 << std::endl
							<< "2 - " << Creature2 << std::endl
							<< "3 - " << CreatureVolante1 << std::endl
							<< "4 - " << CreatureFusion1 << std::endl;
						std::cin >> playerChoice;
						switch (playerChoice) {
						case 1:
							CreatureSanguine1.attack(Creature1);
							break;
						case 2:
							CreatureSanguine1.attack(Creature2);
							break;
						case 3:
							CreatureSanguine1.attack(CreatureVolante1);
							break;
						case 4:
							CreatureSanguine1.attack(CreatureFusion1);
							break;
						default:
							break;
						}								
						attackDone = true;
						break;
					}
				case 4:
					if (CreatureFusion1.getHealth() > 0) {
						std::cout << "Quel monstre devrait attaquer le/la " << CreatureFusion1.getName() << " devrait attaquer ?" << std::endl
							<< "1 - " << Creature1 << std::endl
							<< "2 - " << Creature2 << std::endl
							<< "3 - " << CreatureVolante1 << std::endl
							<< "4 - " << CreatureSanguine1 << std::endl;
						std::cin >> playerChoice;
						switch (playerChoice) {
						case 1:
							CreatureFusion1.attack(Creature1);
							break;
						case 2:
							CreatureFusion1.attack(Creature2);
							break;
						case 3:
							CreatureFusion1.attack(CreatureVolante1);
							break;
						case 4:
							CreatureFusion1.attack(CreatureSanguine1);
							break;
						default:
							break;
						}
						attackDone = true;
						break;						attackDone = true;
						break;
					}
				default:
					break;
			}
		}
		actualMonster = (actualMonster + 1) % 5;
		system("cls");
	}

	std::cout << "FIN DU JEU" << std::endl;
	return 0;
}