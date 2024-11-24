#pragma once
#include <string>
using namespace std;


struct Time {
    //instance variables
    int hour, minute, second;
    
    //constructors 
    Time(int, int, int);
    Time(int);
    Time();
    Time(int, int);

    //functions
    string toString();
};
