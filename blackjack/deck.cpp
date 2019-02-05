#include "card.h"
#include <iostream>
#include <map>

Deck::Deck() {
	for (int i = 1; i < 10; i++) {
		cardlist.insert(std::pair<int, int>(i, 4));
	}
	cardlist.insert(std::pair<int, int>(10, 12));
}

void Deck::print() {
	std::map<int, int>::iterator it = cardlist.begin();
	while (it != cardlist.end()) {
		std::cout << "value: " << it->first << "  " << "amount left: " << it->second << std::endl;
		it++;
	}
}

Card Deck::draw() {
	int max = 13;			// simple rng, not perfectly 
	int min = 1;			// uniform but it does the job
	int range = max - min + 1;
	int val;

	while (true) {
		val = rand() % range + min;
		if (cardlist[val] > 0) {
			cardlist[val]--;
			break;
		}
	}
	return Card(val);
}