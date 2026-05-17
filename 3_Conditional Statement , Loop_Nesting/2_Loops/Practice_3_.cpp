#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of N: " << endl;
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n ; i++)
    {
        if (i % 3 != 0)
            continue;
        sum += i;
    }

    cout << sum;
    return 0;
}