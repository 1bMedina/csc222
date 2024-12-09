#include <string>
#include <iostream>
#include <vector>
#pragma once
using namespace std;


struct Emoticon {
    //courtesy of emojidb.org
    static vector<string> FACE_LIST;
    string to_string();
    string getEmotion();
    void setEmotion(string);
    void make_happier();
    void make_sadder();

    int happiness; //Happiness on a scale of 0-10

    Emoticon(int);
};
