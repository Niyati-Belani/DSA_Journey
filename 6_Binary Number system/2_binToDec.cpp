#include <iostream>
using namespace std;

int bintoDec(int n)
{
    int ans = 0, pow = 1;

    while (n > 0)
    {
        int rem = n % 10;
        ans += rem * pow;

        n /= 10;
        pow *= 2;
    }
    return ans;
}
int main()
{
    int binNum = 110010;

    cout << "Binary Number : " << binNum << endl;
    cout << "Binary to Decimal: " << bintoDec(binNum);
    return 0;
}

/*
    Binary to Decimal

    110010

    =(1*2^5) + (1*2^4) + (0*2^3) + (0*2^2) + (1*2^1) + (0*2^0)
    =   32   +    16   +    0    +    0    +    2    +    0
    =   50
*/