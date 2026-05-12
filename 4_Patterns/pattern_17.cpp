#include<iostream>
using namespace std;

int main()
{
    for ( int i = 1 ; i <= 5 ; i++)
    {
        for (int j = 1 ; j <= 5-i ; j++)
        {
            cout << "  ";
        }
        for ( char  k = 'A' ; k <= 'A'+i-1 ; k++)
        {
            // char name = 'A'+k-1;
            cout << k << " ";
        }
        cout <<endl;
    }
    return 0;
}