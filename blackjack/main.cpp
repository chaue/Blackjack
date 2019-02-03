#include "card.h"
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int test() {
	// card class works
	Card c = Card(5);
	int cval = c.get_value();
	cout << cval << endl;

	// testing map stuff
	map<int, int> cards;
	cards.insert(pair<int, int>(3, 4));
	cards.insert(pair<int, int>(5, 6));
	
	map<int,int>::iterator it = cards.begin();
	while (it != cards.end()) {
		cout << it->first << " " << it->second << endl;
		it++;
	}

	cout << cards[3] << endl;
	cards[3]--;
	cout << cards[3] << endl;

	// testing deck class
	Deck standard = Deck();
	vector<Card> hand;
	for (int i = 0; i < 5; i++) {
		hand.push_back(standard.draw());
	}
	vector<Card>::iterator it2 = hand.begin();
	while (it2 != hand.end()) {
		cout << it2->get_value();
		it2++;
	}
	standard.print();
}

int main() {
	test();


}