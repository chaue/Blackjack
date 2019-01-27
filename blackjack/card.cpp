#include "card.h"

Card::Card() {}

Card::Card(int val) {
	value = val;
}

int Card::get_value() const {
	return value;
}

void Card::drawn() {
	dupe--;
}