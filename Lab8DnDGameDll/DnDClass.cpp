#include "DnDClass.h"
#include "framework.h"

Wizard::Wizard() {
	damage = 10;
	armor = 2;
	health = 3;
	inititive = 4;

}

Rogue::Rogue() {
	damage = 7;
	armor = 3;
	health = 3;
	inititive = 6;
}

Fighter::Fighter() {
	damage = 3;
	armor = 9;
	health = 9;
	inititive = 3;
}

Cleric::Cleric() {
	damage = 0;
	armor = 0;
	health = 0;
	inititive = 0;
}