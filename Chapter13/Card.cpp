#include <iostream>
#include <string>
#include <vector>
#include "Card.h"
using namespace std;

Card::Card() {
    suit = Suit::NONE;
    rank = Rank::JOKER;
}


Card::Card(Suit s, Rank r) {
    suit = s;
    rank = r;
}


string Card::to_string() const {
    vector<string> suit_strings = {"None", "Clubs", "Diamonds", "Hearts", "Spades"};
    vector<string> rank_strings = {"Joker", "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
                                   
    if (rank == 0) return rank_strings[rank];
    return rank_strings[rank] + " of " + suit_strings[suit];
}

bool Card::operator<(const Card& c) const{
    return (rank == c.rank && suit == c.suit);
}

bool Card::operator>(const Card& c) const {
    if(c.suit > suit) return false;
    else if(c.suit < suit) return true;
    else return rank > c.rank;
}

bool Card::operator<=(const Card& c) const{
    return !(*this > c);
}

bool Card::operator>=(const Card& c) const{
    return (*this > c) || (*this == c);
}

bool Card::operator==(const Card& c2) const {
    return (rank == c2.rank && suit == c2.suit);
}

bool Card::operator!=(const Card& c2) const {
    return !(this->operator==(c2));
}

vector<Card> build_deck() {
    vector<Card> deck(52);
    int i = 0;
    for (Suit suit = CLUBS; suit <= SPADES; suit = Suit(suit+1)) {
        for (Rank rank = TWO; rank <= ACE; rank = Rank(rank+1)) {
            deck[i].suit = suit;
            deck[i].rank = rank;
            i++;
        }
    }
    return deck;
}
