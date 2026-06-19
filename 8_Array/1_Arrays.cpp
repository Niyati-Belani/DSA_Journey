/*
    Array :- 
    - Data structure
    - Block of data 
    - Same Data type
    - Same variable
    - Contiguous in Memory
    - Linear Data Structure

    Data structure :- Store data

    Data:- 
        1. Linear 
        2. Hierarchical

    Array Syntax :-
        int marks[5];

        int - Data type of variable
        makrs - variable
        [5] - size of array

    Multiple type of defining array:- 
        1. int marks[5];
        2. int marks[5] = {99 , 100 , 85 , 65 , 52};
        3. int marks[] = {36, 40, 52};

    Access :-
        marks[0];

        marks - variable
        [0] - index of marks

*/

#include <iostream>
using namespace std;

int main()
{
    int marks[5]= {99 , 88 , 77 , 66 , 55} ;

    cout << marks[0] << endl;
    cout << marks[1] << endl;
    cout << marks[2] << endl;
    cout << marks[3] << endl;
    cout << marks[4] << endl;

    marks[1] = 44;

    cout << marks[1] << endl;

    cout << marks[-8] << endl; // give invalid values.

     return 0;

}