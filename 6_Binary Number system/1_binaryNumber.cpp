#include <iostream>
using namespace std;

int decToBin (int n)
{
    int ans = 0;
    int rem;
    int pow = 1;

     while (n > 0)
    {
        rem = n % 2;
        n = n / 2;
        ans += (rem * pow);
        pow = pow * 10;
    }

    return ans;
}

int main()
{
    cout << "Decimal to Binary" << endl;
    int n = 50;
    
    cout << "Decimal Number is : " << n << endl;

    cout << "Binary number is : " << decToBin(n) << endl;

    cout << "Binary number of 1 to 10." << endl;

    for (int i = 1 ; i <= 10 ; i++)
    {
        cout << decToBin(i) << endl;
    }

    return 0;
}

/*
    Decimal to Binary

    50

    2 | 50  0
    2 | 25  1
    2 | 12  0
    2 | 6   0
    2 | 3   1
    2 | 1   1
      | 0

    50 = (110010)2
*/