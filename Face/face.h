#include <string>
#include <iostream>
using namespace std;

struct Face {
    string to_string();
    string getEmotion();
    string setEmotion(string getEmotion);

    string emotion;
};