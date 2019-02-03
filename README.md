# Blackjack
Card game also known as 21

__Initial ideas__
* to accomplish card dealing between the player and opponent, a card class will keep track of the card's value and how many have been drawn
* possible ways to simulate a card hand are a vector or similar structure

__Update #1__
* to centralize card draw info, like how many cards of a certain suit are left, I decided to create a new "deck" class. This class will deal with keeping track of cards left in the deck as well as a member function to draw a card and output it for assignment or insertion into a vector. 
* I am still sticking to implementing the player and opponent's hands with a vector, as it is the most straightforward
* I decided to keep the card class in spite of its repetitive nature(why not just replace it with a simple integer?) in case I want to implement card suits and types down the line.
