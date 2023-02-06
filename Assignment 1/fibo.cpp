#include <iostream>
#include "BigInt.h"

using namespace std;

int fibo(int n)
{
    if(n == 1 || n == 2)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}

/**BigInt fibo(BigInt n)
{

}**/

int main()
{
    /**cout << "0: 0" << endl;
    for(int i = 1; i <= 30; i++)
    {
        cout << i << ": " << fibo(i) << endl;
    }**/
    BigInt d1;
    BigInt d2(5);
    BigInt d3("5");
    cout << d1 << endl; 
    cout << "Hello World!" << endl;
}