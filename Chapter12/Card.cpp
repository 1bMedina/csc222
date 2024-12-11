#include <iostream>
#include <string>
#include "Card.h"
using namespace std;

Card::Card() {
    suit = 0;
    rank = 0;
}

Card::Card(int s, int r){
    suit = s;
    rank = r;
}

string Card::to_string() const {
    string s = "0";
    return s;
}