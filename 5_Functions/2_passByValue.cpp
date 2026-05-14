#include <iostream>
using namespace std;

int sum (int a , int b)
{
    a = a + 10;//22
    b = b + 10;//14
    return (a+b);
}

int main ()
{
    int a = 12, b = 4;
    cout << sum(a,b) << endl;//36
    cout << a << endl;//12
    cout << b << endl;//4
    return 0;
}

/*
    Pass By Value
    -copy of argument is passed to function.
*/