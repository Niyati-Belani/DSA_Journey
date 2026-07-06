// Pointer :- Special Variable that stores the address of another variable. 
// It is a variable that points to the memory location of another variable.

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x = 10;
    cout << &x << endl;

    int* ptr = &x;
    cout << ptr << endl;

    int **ptr1 = &ptr;
    cout << ptr1 << endl;

    return 0;
}