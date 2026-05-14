#include <iostream>
using namespace std;

void change(int x)
{
    x = 2*x;
    cout << "x = " << x << endl;
}

int main()
{
    int x = 20;
    change(x);

    cout << "x = " << x << endl;
    return 0;
}