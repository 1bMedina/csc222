#include <string>
using namespace std;

string incrament_digit_str(const string &);
string sum_common_len_digit_str(const string &, const string &);

class BigInt
{
    bool negative;
    string digits;

    public:
    // constructors
    BigInt();
    BigInt(int);
    BigInt(string);

    // member functions
    string to_string() const;
    bool operator==(const BigInt& b) const;
    bool operator>(const BigInt& b) const;
    bool operator<(const BigInt& b) const;
    bool operator!=(const BigInt& b) const;
    bool operator>=(const BigInt& b) const;
    bool operator<=(const BigInt& b) const;
    BigInt operator+(const BigInt& b) const;

};