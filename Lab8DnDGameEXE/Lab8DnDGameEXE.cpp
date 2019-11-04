
#include "../../Lab8DnDGame/Lab8DnDGameDll/DnDClass.h"
#include "../../Lab8DnDGame/Lab8DnDGameDll/IRace.h"
#include "../../Lab8DnDGame/Lab8DnDGameDll/Party.h"
#include <ioStream>
#include <vector>
#include <stack>
#include <string>
//function to create parties
Party partyCreator() {
	int classNum;
	int raceNum;
	std::vector<Character> tempParty;
	for (int i = 0; i < 5; i++) {
		std::cout << "Spot: " + std::to_string(4 - i) << std::endl;
		std::cout << "Enter your Race: 0 = Elven, 1 = Dwarf, 3 = Orc, 4 = Jakob Wardega" << std::endl;
		std::cin >> raceNum;
		std::cout << std::endl;
		std::cout << "Enter your class: 0 = Fighter, 1 = Wizard, 3 = Rogue, 4 = Cleric" << std::endl;
		std::cin >> classNum;
		std::cout << std::endl;
		tempParty.push_back(Character(static_cast<DnDClasses::EnumOfClass>(classNum), static_cast<DnDClasses::EnumOfRace>(raceNum)));
	}
	return Party(tempParty);
}

int main() {
	Party myParty = partyCreator();
	Party enemyParty = partyCreator();
	int count = 0;
	std::stack<Character> masterStack = myParty.orderSetter(enemyParty);
	std::stack<Character> refillable = masterStack;

	while (myParty.AdventuringParty.size() > 0 && enemyParty.AdventuringParty.size() > 0) {

	}
	
}

