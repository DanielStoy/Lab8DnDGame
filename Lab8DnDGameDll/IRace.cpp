#include "IRace.h"
#include "framework.h"
//elven = 1
//orc = 2
//dwarf = 3
//human = 4

//May cause bugs, check here first if numbers are wrong
IRace::IRace(int race) {
	if (race == 0) {
		damageMod = 2;
		initMod = 3;
	}
	else if (race == 1) {
		damageMod = 2;
		healthMod = 2;

	}
	else if (race == 2) {
		healthMod = 3;
		armorMod = 2;
	}
	else {
		initMod = 3;
		armorMod = 3;
	}
}

IRace::IRace() {
	damageMod = 0;
	initMod = 0;
	armorMod = 0;
	healthMod = 0;
}