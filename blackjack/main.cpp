#include "card.h"
#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

int test() {
	// card class works
	/*
	Card c = Card(5);
	int cval = c.get_value();
	cout << cval << endl;
	*/
	
	// testing map stuff
	/*
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
	*/

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

void hit(vector<Card>& vec, Deck& d) {
	vec.push_back(d.draw());
}

void printplayer(vector<Card>& vec) {				// print all player's cards
	cout << "Your cards are: ";
	for (int i = 0; i < vec.size(); i++) {
		vec[i].print();
		cout << " ";
	}
	cout << endl;
}

void printdealer(vector<Card>& vec) {			// hide the first card for the dealer
	cout << "Dealer's cards are: (*) ";

	for (int i = 1; i < vec.size(); i++) {
		vec[i].print();
	}
	cout << endl;
}

int calctotal(vector<Card>& vec) {
	int total = 0;
	for (int i = 0; i < vec.size(); i++) {
		total += vec[i].get_value();
	}
	return total;
}

int main() {
	//test();
	//cout << "\n\n\n";
	string start;
	cout << "Start a game of blackjack (y/n) ?";
	getline(cin, start);
	if (start == "n") return 0;		// stop program if no
	
	// start the game
	int ptotal = 0;
	int dtotal = 0;
	string hitans;
	Deck deck = Deck();			// init Deck
	vector<Card> p;		// player hand
	vector<Card> d;		// dealer hand

	hit(p, deck);
	hit(p, deck);
	hit(d, deck);
	hit(d, deck);
	printplayer(p);
	printdealer(d);

	cout << "Hit (y/n)? ";
	getline(cin, hitans);
	while (hitans != "n") {
		hit(p, deck);
		if (calctotal(p) > 21) {
			cout << "You lose...";
			break;
		}
		else if (calctotal(p) == 21) {
			cout << "You win!";
			break;
		}
		else if (calctotal(p) < 21) {
			cout << "Hit (y/n)? ";
			getline(cin, hitans);
		}
	}

}