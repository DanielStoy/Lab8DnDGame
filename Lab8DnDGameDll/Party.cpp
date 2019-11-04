#include "Party.h"

Party::Party(std::vector<Character> creator) {
	AdventuringParty = creator;
}

//lowest init pushed first, highest pushed last
std::stack<Character> Party::orderSetter(Party otherParty) {
	std::vector<Character> total = AdventuringParty;
	for (int j = 0; j < 4; j++) {
		total.push_back(otherParty.AdventuringParty.at(j));
	}
	std::stack<Character> order;
	for (int i = 0; i < 7; i++) {
		for (int j = 0; j < 7 - i - 1; j++) {
			if (total[j].inititive > total[j + 1].inititive) {
				Character temp = total[j];
				total[j] = total[j + 1];
				total[j + 1] = total[j];
			}
		}
	}

	for (int i = 0; i < total.size(); i++) {
		order.push(total[i]);
	}

	return order;
}