#include <map>
// card class for blackjack

class Card {
public:
	Card();
	Card(int val);
	int get_value() const;	// returns card value
	void drawn();			// removes card from "deck"
private:	
	int value;				// range from 1 to 13
	int dupe = 4;			// 4 cards per suit
};

// deck class
class Deck {
public:
	Deck();
	int get_num_cards() const;
	void draw();
private:
	std::map<int, int> cardlist;
};