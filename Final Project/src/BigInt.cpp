#include <iostream>
#include <string>
#include "BigInt.h"
using namespace std;

BigInt::BigInt()
{
    negative = false;
    digits = "0";
}

BigInt::BigInt(int i)
{
    negative = (i >= 0) ? false : true;
    digits = (i >= 0) ? std::to_string(i) : std::to_string(-i);
}

BigInt::BigInt(string n)
{
    negative = (n.front() == '-') ? true: false;
    digits = (n.front() == '-') ? n.substr(1, n.size() - 1) : n;
}

string BigInt::to_string() const
{
    return (!negative) ? digits : "-" + digits;
}

 bool BigInt::operator==(const BigInt& b) const
 {
    if((digits ==  b.digits) && (negative == b.negative))
    {

        return true;
    }
 
    return false;
 }

bool BigInt::operator>(const BigInt& b) const
{
    if((negative == true) && (b.negative == false))
    {
        return false; 
    }
    if ((negative == b.negative && negative == true) && (digits > b.digits)) 
    {   
        return false;
    }
    if ((negative == b.negative && negative == true) && (digits < b.digits)) 
    {   
        return true;
    }
    if (digits <= b.digits){
        return false;
    }
    return true;
}

bool BigInt::operator<(const BigInt&b) const
{
    if((negative == true) && (b.negative == false))
    {
        return true; 
    }
    if ((negative == b.negative && negative == true) && (digits > b.digits)) 
    {   
        return true;
    }
    if ((negative == b.negative && negative == true) && (digits < b.digits)) 
    {   
        return false;
    }
    if (digits >= b.digits){
        return false;
    }

    return false;
}

bool BigInt::operator!=(const BigInt& b) const
{
    return(((!negative) ? digits : "-" + digits) != ((!b.negative) ? b.digits : "-" + b.digits));
}
bool BigInt::operator>=(const BigInt& b) const
{
    if((negative == true) && (b.negative == false))
    {
        return false; 
    }
    if ((negative == b.negative && negative == true) && (digits > b.digits)) 
    {   
        return false;
    }
    if ((negative == b.negative && negative == true) && (digits < b.digits)) 
    {   
        return true;
    }
    if (digits <= b.digits){
        return false;
    }

    return true;
}
bool BigInt::operator<=(const BigInt& b) const
{
    if((negative == true) && (b.negative == false))
    {
        return true; 
    }
    if ((negative == b.negative && negative == true) && (digits > b.digits)) 
    {   
        return true;
    }
    if ((negative == b.negative && negative == true) && (digits < b.digits)) 
    {   
        return false;
    }
    if (digits >= b.digits){
        return false;
    }

    return true;
}