
#include "../../Lab8DnDGame/Lab8DnDGameDll/DnDClass.h"
#include "../../Lab8DnDGame/Lab8DnDGameDll/IRace.h"
#include "../../Lab8DnDGame/Lab8DnDGameDll/Party.h"
#include <ioStream>
#include <vector>
#include <stack>
#include <string>
//function to create parties
Party partyCreator(std::vector<int> &ids) {
	int classNum;
	int raceNum;
	std::vector<Character> tempParty;
	for (int i = 0; i < 4; i++) {
		std::cout << "Spot: " + std::to_string(4 - i) << std::endl;
		std::cout << "Enter your Race: 0 = Elven, 1 = Dwarf, 3 = Orc, 4 = Jakob Wardega" << std::endl;
		std::cin >> raceNum;
		std::cout << std::endl;
		std::cout << "Enter your class: 0 = Fighter, 1 = Wizard, 3 = Rogue, 4 = Cleric" << std::endl;
		std::cin >> classNum;
		std::cout << std::endl;
		tempParty.push_back(Character(static_cast<DnDClasses::EnumOfClass>(classNum), static_cast<DnDClasses::EnumOfRace>(raceNum), ids.back()));
		ids.pop_back();
	}
	return Party(tempParty);
}

int main() {
	std::vector<int> ids = {1, 2, 3, 4, 5, 6, 7, 8 };
	Party myParty = partyCreator(ids);
	Party enemyParty = partyCreator(ids);
	int count = 0;
	std::stack<Character> masterStack = myParty.orderSetter(enemyParty);
	std::stack<Character> refillable;

	while (myParty.AdventuringParty.size() > 0 && enemyParty.AdventuringParty.size() > 0) {
		refillable = masterStack;
		while (refillable.size() > 0) {
			std::vector<Character> gettingAttackedParty;
			//see which party is attacking, going to be messy but would be less messy with a dictionary
			for (int i = 0; i < myParty.AdventuringParty.size(); i++) {
				if (refillable.top().id == myParty.AdventuringParty.at(i).id) {
					enemyParty.AdventuringParty = refillable.top().attack(enemyParty.AdventuringParty);
				}
				else {
				
				}
			}

			
			
		}
	}
	
}

