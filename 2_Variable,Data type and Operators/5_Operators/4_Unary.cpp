#include <iostream>
using namespace std;

int main()
{
    int a = 10;

    int b = a++; // post increment

    cout << "B = " << b << endl;
    cout << "A = " << a << endl;

    b = ++a; // pre increment

    cout << "B = " << b << endl;
    cout << "A = " << a << endl;

    a = 20;
    b = a--; // post decrement

    cout << "B = " << b << endl;
    cout << "A = " << a << endl;

    b = --a; // pre increment

    cout << "B = " << b << endl;
    cout << "A = " << a << endl;

    /*
        Unary Operators:-
        -Only needs one operand.

            Increment ++ :-
            1. Post increment (a++)
            -Firstly assigns valus and then increment
            2. Pre increment (++a)
            -Firstly increment value then assign

            Decrement ++ :-
            1. Post decrement (a--)
            -Firstly assigns valus and then decrement
            2. Pre decrement (--a)
            -Firstly decrement value then assign
    */
    return 0;
}