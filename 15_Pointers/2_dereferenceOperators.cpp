/*
    Dereferencing Operator :- It is used to access the value stored at the memory address pointed to by a pointer.
*/

#include <iostream>
using namespace std;

int main()
{ 
    int m = 20;
    int *n = &m; 
    int **o = &n;

    cout << "Value of m: " << m << endl;
    cout << "Address of m: " << &m << endl;
    cout << "Value of n: " << n << endl;
    cout << "Address of n: " << &n << endl;
    cout << "Using Dereference operator for n: " << *(&n) << endl; 
    cout << "Value of o: " << o << endl;
    cout << "Address of o: " << &o << endl;
    cout << "Using Dereference operator for o: " << *(&o) << endl; 
} 