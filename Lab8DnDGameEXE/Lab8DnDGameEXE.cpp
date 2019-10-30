
#include "../../Lab8DnDGame/Lab8DnDGameDll/DnDClass.h"
#include "../../Lab8DnDGame/Lab8DnDGameDll/IRace.h"
#include "../../Lab8DnDGame/Lab8DnDGameDll/Party.h"
#include <ioStream>

int main() {
	Character Character1 = Character(IRace::Elven,IRace::wizard);
	
	std::cout << "Hello world";
	return 0;
	
}