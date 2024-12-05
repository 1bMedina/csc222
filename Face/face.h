#include <string>
#include <iostream>
using namespace std;

struct Emoticon {
    static vector<string> FACE_LIST;
    string to_string();
    string getEmotion();
    void setEmotion(string getEmotion);

    int happiness; //happiness on a scale 0-9

    Emoticon(int);
};
