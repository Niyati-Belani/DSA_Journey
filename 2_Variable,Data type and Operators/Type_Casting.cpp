#include <iostream>
using namespace std;

int main ()
{
    // Implicit Convertion (Type convertion)
    cout << "*Type Convertion*" << endl;
    char grade = 'A';

    int value = grade;
    cout << "  Value is: " << value << endl;

    //Explicit Convertion (Type Casting)
    cout << "*Type Casting*" << endl;
    double price = 100.99;

    int newPrice = (int)price;
    cout << "  New Price is: " << newPrice << endl;
    return 0;
}

/*
    Type Convertion:-
    -It is implicit convertion
    -Compiler converts itself small data type value into large


    Type Casting:-
    -Converting data from one type to another 
*/