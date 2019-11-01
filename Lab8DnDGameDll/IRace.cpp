#include "IRace.h"
#include "framework.h"
#include "DnDClass.h"

//Calculates all of our stats in one go, stores them in character
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


	hitPoints += charClass->health;
	armor += charClass->armor;
	attack += charClass->damage;
	initiative += charClass->inititive;
}