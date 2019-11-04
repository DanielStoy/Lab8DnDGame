#include "DnDClass.h"
#include "framework.h"
#include <stdlib.h>
#include <time.h>

Wizard::Wizard() {
	damage = 3;
	armor = 10;
	health = 9;
	inititive = 4;

}

Rogue::Rogue() {
	damage = 10;
	armor = 14;
	health = 10;
	inititive = 3;
}

Fighter::Fighter() {
	damage = 7;
	armor = 16;
	health = 14;
	inititive = 3;
}

Cleric::Cleric() {
	damage = -5;
	armor = 14;
	health = 15;
	inititive = 0;
}

Character::Character(EnumOfClass myClass, EnumOfRace myRace) {
	if (fighter) {
		charClass = new Fighter();
	}
	else if (wizard) {
		charClass = new Wizard();
	}
	else if (rogue) {
		charClass = new Rogue();
	}
	else {
		charClass = new Cleric();
	}

	charRace = new IRace((int)myRace);
	charClass->armor += charRace->armorMod;
	charClass->damage += charRace->damageMod;
	charClass->health += charRace->healthMod;
	charClass->inititive += charRace->initMod;
}

//rogue special   -> attacks lowest health enemy	     -> dmg = dmg - initiative					--> charge initial: 0		--> charge to use: 4
//fighter special -> buffs dmg		                     -> dmg = dmg + 1/2 armor					--> charge initial: 2		--> charge to use: 2
//wizard special -> attack the highest health enemy	     -> dmg = dmg + initiative					--> charge initial: 3		--> charge to use: 4
//cleric special -> heals whole team					 -> dmg = dmg /2 ... after: dmg = dmg - 2   --> charge initial: 0		--> charge to use: 3

int DnDClasses::RollD20()
{
	srand(time(NULL));
	return rand() % 20 + 1;
}

Party attack(Party enemies) {

	return enemies;
}