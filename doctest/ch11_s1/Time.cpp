#include <sstream>
#include "Time.h"
#include <string>
#include <vector>
using namespace std;


Time::Time(int hour, int  minute, int second){
    this -> hour = hour;
    this -> minute = minute;
    this -> second = second;

}

Time::Time(int second){
    this -> hour = second/3600;
    second -= hour * 3600;
    this -> minute = second/60;
    second -= minute * 60;
    this -> second = second;
}

Time::Time(){
    this -> hour = 0;
    this -> minute = 0;
    this -> second = 0;
}

string Time::toString(){
    

    string sstr = ::to_string(second%60), mstr = ::to_string(minute%60), hstr = ::to_string(hour);

    if(sstr.length() == 1) sstr = "0" + sstr;
    if(mstr.length() == 1) mstr ="0" + mstr;

    return hstr + ":" + mstr + ":" + sstr;

}
