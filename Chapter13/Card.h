#include <iostream>
#include <string>
#include <vector>
#pragma once
using namespace std;


enum Suit {NONE, CLUBS, DIAMONDS, HEARTS, SPADES};
enum Rank {JOKER, TWO=2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT,
           NINE, TEN, JACK, QUEEN, KING, ACE};

struct Card {

   Rank rank;
   Suit suit;
   
   Card();
   Card(int s, int r);
   Card(Suit s, Rank r);

   string to_string() const;

   bool operator<(const Card&) const;
   bool operator<=(const Card&) const;
   bool operator>=(const Card&) const;
   bool operator==(const Card&) const;
   bool operator!=(const Card&) const;
   bool operator>(const Card&) const;
   
   static const int NONE = 0;
   static const int CLUBS = 1;
   static const int HEARTS = 2;
   static const int SPADES = 3;
   static const int DIAMONDS = 4;
   static const vector<Card> build_deck();

};
