#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <iostream>
#include <string>
#include <vector>
#include "Card.h"
using namespace std;

TEST_CASE("Test create Deck with two constructors") {
    Deck d1(10);
    CHECK(d1.cards.size() == 10);
    CHECK(d1.cards[0].to_string() == "Joker");
    Deck d2;
    CHECK(d2.cards.size() == 52);
    CHECK(d2.cards[0].to_string() == "2 of Clubs");
    CHECK(d2.cards[51].to_string() == "Ace of Spades");
}

TEST_CASE("Test find Card in Deck") {
    Deck d;
    Card c(HEARTS, QUEEN);
    int pos = d.find(c);
    CHECK(d.cards[pos].to_string() == "Queen of Hearts");
    Card c2(NONE, QUEEN);
    int pos2 = d.find(c2);
    CHECK(pos2 == -1);
}

TEST_CASE("Test swap_cards in Deck") {
    Deck d;
    d.swap_cards(0, 51);
    CHECK(d.cards[0].to_string() == "Ace of Spades");
    CHECK(d.cards[51].to_string() == "2 of Clubs");
}