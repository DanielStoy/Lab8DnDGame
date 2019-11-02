#include "IRace.h"
#include "framework.h"
#include "DnDClass.h"

//Calculates all of our stats in one go, stores them in character
Character::Character(EnumOfRace myRace, EnumOfClass myClass) {
	if (fighter) {
		charClass = new Fighter();
	}
	else if (wizard) {
		charClass = new Wizard();
	}
	else if (cleric) {
		charClass = new Cleric();
	}
	else {
		charClass = new Rogue();
	}
	if (Elven) {
		charClass->damage += 3;
		charClass->inititive += 3;
	}
	else if (Orc) {
		charClass->health += 3;
		charClass->damage += 0;
	}
	else if (Dwarf) {
		charClass->armor += 3;
		charClass->health += 3;

	}
	else {
		charClass->health += 3;
		charClass->inititive += 3;
	}
}