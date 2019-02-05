# Blackjack
Card game also known as 21

__Rules of this implementation__
* player and dealer are both dealt two cards
* player decides to stand or hit
* dealer(program) automatically hits until it beats the player or goes bust
* winner is announced and option to replay is presented

__Initial ideas__
* to accomplish card dealing between the player and opponent, a card class will keep track of the card's value and how many have been drawn
* possible ways to simulate a card hand are a vector or similar structure

__Update #1__
* to centralize card draw info, like how many cards of a certain suit are left, I decided to create a new "deck" class. This class will deal with keeping track of cards left in the deck as well as a member function to draw a card and output it for assignment or insertion into a vector. 
* I am still sticking to implementing the player and opponent's hands with a vector, as it is the most straightforward
* I decided to keep the card class in spite of its repetitive nature(why not just replace it with a simple integer?) in case I want to implement card suits and types down the line.

__Update #2__
* finished basic implementation of the game
* fixed the deck class to crudely reflect the 12 face cards as having a value of 10
* added functions to calculate the hand total, print out the card values, and add cards to hand
* things to fix: seed the random number generator(as of now it's repeating the same values, making testing difficult), more complex gameplay(like betting)
