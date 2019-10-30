#include "DnDClass.h"
#include "framework.h"

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