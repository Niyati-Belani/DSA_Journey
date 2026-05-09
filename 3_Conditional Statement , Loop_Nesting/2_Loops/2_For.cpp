#include <iostream>
using namespace std;

int main()
{
    for (int i = 1 ; i <= 10 ; i++)
    {
        cout << i << " ";
    }
    cout << endl;

/*-------------------------------------------------------------------------*/
    for (int j = 1 ; j <= 10 ; j += 2)
    {
        cout << j << " ";
    }
    cout << endl;

/*-------------------------------------------------------------------------*/
    int sum = 0; 
    int n;
    cout << "Sum of N Number.." << endl;
    cout << "Enter N: " << endl;
    cin >> n;
    for (int i = 1 ; i <= n ; i++){
        sum = sum + i;
    }
    cout << "Sum = " << sum;
    cout << endl;
    
/*-------------------------------------------------------------------------*/

    /*
        for (initialisation , condition , updation)
        {
            work
        }
    */
    return 0;
}