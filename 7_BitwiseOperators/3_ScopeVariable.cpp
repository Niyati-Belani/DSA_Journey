/*
    Local :-
    this variables are used only in which part of code they were defined.

    Global :-
    this can be use in entire code.
*/

#include <iostream>
using namespace std;

int x = 20; // global variable.

int main()
{
    cout << "Local variable:" << endl;
    for (int i = 0; i < 10; i++) // here i is local variable.
    {
        cout << i ;
    }
    cout << endl;

    //cout << i; -> Through error 

    cout << "Global variable :" << endl;
    cout << x;
    
}