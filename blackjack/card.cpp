#include "card.h"

Card::Card() {
	value = 0;
}

Card::Card(int val) {
	value = val;
}

int Card::get_value() const {
	return value;
}
