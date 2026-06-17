/*
    Data Type Modifiers
    -change meaning of data types

    long - it gives capacity of  >= 4 bytes.
    short - it gives capacity of 2 bytes.
    long long - it gives more capacity.
    signed - it show number can be positive or negative.
    unsigned - it show number can be positive only.
*/

#include <iostream>
using namespace std;

int main()
{
    cout << sizeof(int) << endl;
    cout << sizeof(long int) << endl;
    cout << sizeof(short int) << endl;
    cout << sizeof(long long int) << endl;
    cout << sizeof(signed) << endl;
    cout << sizeof(unsigned) << endl;

    unsigned int x = -10;
    signed int y = -10;

    cout << x << endl;
    cout << y << endl;
    return 0;
}