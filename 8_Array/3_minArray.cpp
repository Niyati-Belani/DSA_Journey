/*
    Find Smallest Number in Array.
*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int num[6];
    int min = INT_MAX;

    for(int i = 0; i < 6 ; i++)
    {
        cout << "Enter Number " << i << ": ";
        cin >> num[i];
    }

    for(int i = 0 ; i < 6 ; i++)
    {
        if(num [i] < min)
        {
            min = num[i];
        }
    }

    cout << "Smallest Number is:" << min << endl;
    return 0;
}