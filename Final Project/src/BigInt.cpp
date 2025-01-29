#include <iostream>
#include <string>
#include "BigInt.h"
#include <vector>
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

string incrament_digit_str(const string &dstring)
{
    string digits = dstring;
    int p = dstring.size() - 1;
    char nextd = digits[p] + 1;

    while( nextd > '9' and p>=0){
        digits[p] == '0';
        nextd = digits[--p] +1;
    }

    if(p >= 0)
        digits[p]++;
    else
        digits = "1" + digits;

    return digits;
}

string sum_common_len_digit_str(const string &a, const string &b)
{
    string result = a;
    char sum, carry = 0;

    for(int i =a.size() -1; i >=0; i--)
    {
       char sum = (a[i] -'0') + (b[i] - '0') + carry;
       result[i] = (sum % 10) + '0';
       carry = sum / 10; 
    }
    return carry ? "c+" + result : result;
}

BigInt BigInt::operator+(const BigInt& b) const
{
    if (this->digits.size() == b.digits.size())
    {
        string sum_str = sum_common_len_digit_str(this->digits, b.digits);
        return (sum_str[0] == 'c') ? BigInt("1" + sum_str.substr(2)) : BigInt(sum_str);
    }
    const BigInt *extra, *smaller;

    if(this->digits.size() > b.digits.size()) 
    {
        extra = this;
        smaller = &b;
    } else 
    {
        extra = &b;
        smaller = this;
    }

    int commonsize = smaller->digits.size();
    int largersize = extra->digits.size() - commonsize;

    string lastpart = sum_common_len_digit_str(
        smaller->digits,
        extra->digits.substr(largersize)
    );
    
    string leading = extra->digits.substr(0, largersize);

    return (lastpart[0] != 'c') 
        ? BigInt(leading + lastpart) 
        : BigInt(incrament_digit_str(leading) + lastpart.substr(2));
}

string sub_common_len_digit_str(const string &a, const string &b)
{
    string results = a;
    int borrow = 0;

    for (int i = a.size() -1; i>=0; i--) 
    {
        int diff = (a[i] - '0') - (b[i] - '0') - borrow;

        if(diff < 0) 
        {
            diff +=10;
            borrow = 1;
        } else 
        {
            borrow = 0;
        }
        
        results[i] = '0' + diff;
    }
    return results;
}

BigInt BigInt::operator-(const BigInt& b) const
{
    if (((!negative) ? digits : "-" + digits) == ((!b.negative) ? b.digits : "-" + b.digits))
        return BigInt(0);

    if(this->digits.size() == b.digits.size())
    {
        string rdiff = sub_common_len_digit_str(this->digits, b.digits);
        return BigInt(rdiff);
    }

    const BigInt *extra, *small;
    string negpre = "";

    if(this->digits.size() > b.digits.size()) 
    {
        extra = this;
        small = &b;
    } else {
        extra = &b;
        small = this;
        negpre = "-";
    }


    string padsmall = small->digits;
    while (extra->digits.size() > padsmall.size())
    {
        padsmall = "0" + padsmall;
    }

    string com_dif = sub_common_len_digit_str(extra->digits, padsmall);

    return BigInt(negpre + com_dif);
}

string mult_digit_strs(const string& a, const string& b) 
{
    int e = a.size();
    int f = b.size();
    vector<int> results(e + f, 0);

    for (int i = e -1; i>=0; --i)
    {
        for(int j = f -1; j >=0; --j)
        {
            int end = (a[i] - '0') * (b[j] - '0');
            int sum = end + results[i + j + 1];
            results[i + j + 1] = sum % 10;
            results[i + j] += sum / 10;     
         }

    }

    string resultstr;
    bool leading = true;
    for( int digit : results) 
    {
        if(digit == 0 && leading)
            continue;
        leading = false;
        resultstr += (digit + '0');
    }

    return resultstr.empty() ? "0" : resultstr;
}

BigInt BigInt::operator*(const BigInt& b) const 
{
    if (*this == BigInt(0) || b == BigInt(0))
        return BigInt(0);

    bool resultsneg = (negative != b.negative);

    // const string& a = digits;
    // const string& q = b.digits;

    string results = mult_digit_strs(digits, b.digits);

    return BigInt(resultsneg ? "-" + results : results );

}

