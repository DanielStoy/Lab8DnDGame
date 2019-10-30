
#include "../../Lab8DnDGame/Lab8DnDGameDll/DnDClass.h"
#include "../../Lab8DnDGame/Lab8DnDGameDll/IRace.h"
#include "../../Lab8DnDGame/Lab8DnDGameDll/Party.h"
#include <ioStream>

int main() {
	IRace::EnumOfClass myClass = static_cast<IRace::EnumOfClass>(1);
	IRace::EnumOfRace myRace = static_cast<IRace::EnumOfRace>(3);
	Character myCharacter(myRace, myClass);
	
}