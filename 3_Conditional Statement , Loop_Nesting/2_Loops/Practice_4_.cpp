#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Value of N: " << endl;
    cin >> n;
    
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    cout << "Factorial of " << n << " Is : " << fact << endl;
    return 0;
}