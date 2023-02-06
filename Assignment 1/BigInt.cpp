#include "BigInt.h"

BigInt::BigInt()
{
    digits.push_back(0);
}

BigInt::BigInt(int n)
{
    //This while loop iterates through the digits of n and pushes them onto the digits vector
    //Modulo 10 gives the last digit of n, and dividing by 10 removes the last digit of n
    while(n > 0)
    {
        digits.push_back(n % 10);
        n /= 10;
    }
}

BigInt::BigInt(string n)
{
    //This for loop iterates through the digits of n and pushes them onto the digits vector
    for(int i = n.length() - 1; i >= 0; i--)
    {
        digits.push_back(n[i] - '0');
    }
}

ostream& operator<<(ostream&, BigInt& n)
{
    //This for loop iterates through the digits of n and prints them out
    for(int i = n.digits.size() - 1; i >= 0; i--)
    {
        cout << n.digits[i];
    }
    return cout;
}