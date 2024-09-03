#include <iostream>
using namespace std;

int main()
{
int n = 5;
int m = 7;

cout << "The product of " << n << " and " << m << " is ";
cout << n * m << "." << endl;

cout << "With integer division " << n << " divide by " << m << " is ";
cout << n / m << "." << endl;

cout << "The remainder of " << n << " and " << m << " is ";
cout << n % m << "." << endl;

cout << "The remainder of " << m << " and " << n << " is ";
cout << m % n << "." << endl;

cout << "The product of " << m << " and " << n << " - 6 is ";
cout << m * n -6 << "." << endl;

cout << "The product of " << n << " and " << m << " + 4 is ";
cout << n * m + 4 << "." << endl;

cout << "The power of " << n << " to " << m << " is ";
cout << pow(n, m)  << "." << endl;

cout << "The power of " << m  << " to " << n << " is ";
cout << pow(m, n)  << "." << endl;

cout << "The max of " << n << " and " << m << " is ";
cout << max(n, m)  << "." << endl;

cout << "The product of 6 and " << m << " is ";
cout << (n+1) * m << "." << endl;

return 0;
}
