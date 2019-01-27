#include "card.h"
#include <iostream>
using namespace std;

int main() {
	Card c = Card(5);
	int cval = c.get_value();
	cout << cval;
}