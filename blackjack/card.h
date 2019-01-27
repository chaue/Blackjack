// card class for blackjack

class Card {
public:
	void get_value() const;	// returns card value
	void drawn();			// removes card from "deck"
private:	
	int value;				// range from 1 to 13
	int dupe = 4;			// 4 cards per suit
};