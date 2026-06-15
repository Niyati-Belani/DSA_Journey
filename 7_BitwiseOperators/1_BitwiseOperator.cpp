/*
    Bitwise operators:-
    
    -> Bitwise & : AND 

    -> Bitwise | : OR

    -> Bitwise ^ : XOR

    -> Bitwise << : Left Shift

    -> Bitwise >> : Right Shift

*/

#include <iostream>
using namespace std;

int main()
{
    int a = 3 , b = 7;

    cout << "AND : " << (a & b) << endl;
    cout << "OR : " << (a | b) << endl;
    cout << "XOR : " << (a ^ b) << endl;
    cout << "Left Shift : " << (a << 1) << endl;
    cout << "Right Shift : " << (a >> 1) << endl;

    return 0;
}