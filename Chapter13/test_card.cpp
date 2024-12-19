#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <iostream>
#include <string>
#include "Card.h"
using namespace std;

TEST_CASE("Test can create Cards") {
    Card c1;
    CHECK(c1.suit == 0);
    CHECK(c1.rank == 0);
    Card c2(3, 4);
    CHECK(c2.suit == 3);
    CHECK(c2.rank == 4);
}

TEST_CASE("Test can render Cards") {
    Card c3(3, 12);
    CHECK(c3.to_string() == "Queen of Hearts");
    Card c4(2, 10);
    CHECK(c4.to_string() == "10 of Diamonds");
    Card c5;
    CHECK(c5.to_string() == "Joker");
}

// TEST_CASE("Test comparison of Cards") {
//     Card c1(2, 9);
//     Card c2(1, 9);
//     Card c3(1, 10);
//     Card c4(1, 10);
//     CHECK(c2 < c1 == true);
//     CHECK(c3 <= c2 == false);
//     CHECK(c1 >= c3 == true);
//     CHECK(c3 == c4 == true);
//     CHECK(c3 != c4 == false);
// }

TEST_CASE("Test can create and render Cards") {
    Card c1(DIAMONDS, JACK);
    CHECK(c1.to_string() == "Jack of Diamonds");
    Card c2;
    CHECK(c2.to_string() == "Joker");
    Card c3(HEARTS, QUEEN);
    CHECK(c3.to_string() == "Queen of Hearts");
    Card c4(SPADES, SEVEN);
    CHECK(c4.to_string() == "7 of Spades");
}