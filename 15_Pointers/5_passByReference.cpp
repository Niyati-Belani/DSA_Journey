#include <iostream>
using namespace std;

void changeA(int *ptr) // int &b
{
    *ptr  = 20; // b = 20
}
int main()
{
    int a = 10;

    cout << "Before function Call : " << a <<endl;

    changeA(&a); // a

    cout << "After function Call : " << a <<endl;

    return 0;
}