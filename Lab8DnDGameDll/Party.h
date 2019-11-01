#pragma once
#ifdef LAB8DNDGAMEDLL_EXPORTS
#define LAB8DNDGAMEDLL_API __declspec(dllexport)
#else
#define LAB8DNDGAMEDLL_API __declspec(dllimport)
#endif
#include "IRace.h"
#include <vector>
//A party made up of three characters, this is also where our methods to attack and whatnot will be
class LAB8DNDGAMEDLL_API Party {
public:
	Party(std::vector<Character> ourParty) {
	};
private:
	std::vector<Character> theTeam;
};
