#include <iostream>
using namespace std;
;
void prime(int n)
{
    bool isPrime = true;

    if (n <= 1)
    {
        isPrime = false;
    } else {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if(isPrime)
    {
        cout << n << " Number is Prime..";
    } else {
        cout << n << " Number is Not Prime..";
    }
}
int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;

    prime(n);

    return 0;
}