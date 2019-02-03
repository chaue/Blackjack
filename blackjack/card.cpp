#include "card.h"
#include <iostream>

Card::Card() {
	value = 0;
}

Card::Card(int val) {
	value = val;
}

int Card::get_value() const {
	return value;
}

void Card::print() const {
	std::cout << value;
}