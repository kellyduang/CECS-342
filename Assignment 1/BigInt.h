#ifndef BIGINT_H
#define BIGINT_H

#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

class BigInt
{
    private:
        vector<char> digits;

    public:
        BigInt();
        BigInt(int);
        BigInt(string);
        friend ostream& operator<<(ostream&, BigInt& n);
};

#endif
