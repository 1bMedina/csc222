#include <iostream>
#include <string>
using namespace std;

struct Card {
   int suit, rank;
   Card();
   Card(int s, int r);
   string to_string() const;
};