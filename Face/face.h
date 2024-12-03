#include <string>
#include <iostream>
using namespace std;

struct Face {
    string to_string();
    string getEmotion();
    string setEmotion(string getEmotion);

    int happiness; //happiness on a scale 0-10

    Face(int);
};