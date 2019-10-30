#include "IRace.h"
#include "framework.h"
#include "DnDClass.h"

Character::Character(EnumOfRace myRace, EnumOfClass myClass) {
	if (Elven) {
		attack += 3;
		initiative += 3;
	}
	else if (Orc) {
		hitPoints += 3;
		attack += 0;
	}
	else if (Dwarf) {
		armor += 3;
		hitPoints += 3;

	}
	else {
		hitPoints += 3;
		initiative += 3;
	}

	if (fighter) {
		charClass = fighter;
		Fighter fighter = Fighter();
	}
	else if (wizard) {
		charClass = wizard;
		Wizard wizard = Wizard();
	}
	else if (cleric) {
		charClass = cleric;
		Cleric cleric = Cleric();
	}
	else {
		charClass = rogue;
		Rogue rogue = Rogue();
	}
}