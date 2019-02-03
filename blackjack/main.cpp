#include "card.h"
#include <iostream>
#include <map>
using namespace std;

int main() {
	// card class works
	Card c = Card(5);
	int cval = c.get_value();
	cout << cval;

	// testing map stuff
	map<int, int> cards;
	cards.insert(pair<int, int>(3, 4));
	cards.insert(pair<int, int>(5, 6));
	
	map<int,int>::iterator it = cards.begin();
	while (it != cards.end()) {
		cout << it->first << " " << it->second;
		it++;
	}
}