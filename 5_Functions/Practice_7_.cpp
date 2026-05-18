#include <iostream>
using namespace std;

void prime(int n)
{
    for (int num = 2; num <= n; num++)
    {
        bool isPrime = true;

        // Check prime
        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        // Print prime number
        if (isPrime)
        {
            cout << num << " ";
        }
    }
} 
int main()
{
    int n;

    cout << "Enter N: ";
    cin >> n;

    prime(n);
    
    return 0;
}