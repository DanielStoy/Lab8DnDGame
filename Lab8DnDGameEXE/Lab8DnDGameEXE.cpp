
#include "../../Lab8DnDGame/Lab8DnDGameDll/DnDClass.h"
#include "../../Lab8DnDGame/Lab8DnDGameDll/IRace.h"
#include "../../Lab8DnDGame/Lab8DnDGameDll/Party.h"
#include <ioStream>
#include <vector>

int main() {
	std::vector<Character> startParty;
	int classNum;
	int raceNum;
	//Simple party main, will be changed
	for (int i = 0; i < 5; i++) {
		std::cout << "Enter your Race: 0 = Elven, 1 = Dwarf, 3 = Orc, 4 = Jakob Wardega" << std::endl;
		std::cin >> raceNum;
		std::cout << "Enter your class: 0 = Fighter, 1 = Wizard, 3 = Rogue, 4 = Cleric" << std::endl;
		std::cin >> classNum;
		startParty.push_back(Character(static_cast<IRace::EnumOfRace>(raceNum), static_cast<IRace::EnumOfClass>(classNum)));
	}
	Party myParty(startParty);
	
}