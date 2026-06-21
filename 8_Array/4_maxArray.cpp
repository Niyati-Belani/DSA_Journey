/*
    Find Largest Number in Array.
*/

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int num[6];
    int max = INT_MIN;

    for(int i = 0; i < 6 ; i++)
    {
        cout << "Enter Number " << i << ": ";
        cin >> num[i];
    }

    for(int i = 0; i < 6 ; i++)
    {
        if(num[i] > max)
        {
            max = num[i];
        }
    }

    cout << "Largest Number is : " << max << endl;

    return 0;


}