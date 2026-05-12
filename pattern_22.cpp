#include <iostream>
using namespace std;

int main()
{
    for (int i = 5 ; i >= 1 ; i--)
    {
        for (int j = 1 ; j <= i ; j++)
        {
            cout << "*" << " ";
        }
        for (int k = 1 ; k <= 10-2*i ; k++)
        {
            cout << "  ";
        }
        for (int l = 1 ; l <= i ; l++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }

    for (int i = 1 ; i <= 5 ; i++)
    {
        for (int j = 1 ; j <= i ; j++)
        {
            cout << "*" << " ";
        }
        for (int k = 1 ; k <= 10-2*i ; k++)
        {
            cout << "  ";
        }
        for  (int l = 1 ; l <= i ; l++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}