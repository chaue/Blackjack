#include "card.h"
#include <iostream>
#include <map>
#include <vector>
#include <string>
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
	return 0;
}

void firsttwo(vector<Card>& vec, Deck& d) {
	vec.push_back(d.draw());
	vec.push_back(d.draw());
}

void printhand(vector<Card>& vec) {
	cout << "Cards are: ";
	for (int i = 0; i < vec.size(); i++) {
		vec[i].print();
		cout << " ";
	}
	cout << endl;
}

int main() {
	// test();
	string start;
	cout << "Start a game of blackjack (y/n) ?";
	getline(cin, start);
	if (start == "n") return 0;		// stop program if no
	
	// start the game
	Deck deck = Deck();			// init Deck
	vector<Card> player;		// player hand
	vector<Card> dealer;		// dealer hand

	firsttwo(player, deck);
	firsttwo(dealer, deck);
	printhand(player);
	printhand(dealer);
}