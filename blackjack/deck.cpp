#include "card.h"
#include <map>

Deck::Deck() {
	for (int i = 1; i < 14; i++) {
		cardlist.insert(std::pair<int, int>(i, 4));
	}
}

int Deck::get_num_cards() {
	int total = 0;
	std::map<int, int>::iterator it = cardlist.begin();
	while (it != cardlist.end()) {
		total += it->second;
		it++;
	}
	return total;
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