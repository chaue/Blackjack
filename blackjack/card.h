#include <map>
// card class for blackjack

class Card {
public:
	Card();
	Card(int val);
	int get_value() const;	// returns card value
	//void drawn();			// removes card from "deck"
	void print() const;
private:	
	int value;				// range from 1 to 13
	friend class Deck;
};

// deck class
class Deck {
public:
	Deck();
	void print();
	Card draw();
private:
	std::map<int, int> cardlist;
	friend class Card;
};