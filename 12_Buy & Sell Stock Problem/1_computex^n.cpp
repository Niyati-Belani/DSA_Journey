// Binary Exponentiation
#include <iostream>
#include <vector>
using namespace std;

double myPow(double x, int n)
{
    if(n == 0) return 1;
    if(x == 0) return 0;
    if(x == 1) return 1;
    if(x == -1 && n%2 == 0) return 1;
    if(x == -1 && n%2 != 0) return -1;
    
    long binForm = n;
    if (n < 0)
    {
        binForm = -1 * binForm;
        x = 1 / x;
    }
    double ans = 1;

    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main()
{
    double x = 2.00000;
    int n = 10;
    cout << myPow(x, n) << endl;
    return 0;
}