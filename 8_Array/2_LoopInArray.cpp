#include <iostream>
using namespace std;

int main()
{
    int price[7] = {100 , 250 , 650 , 700 , 960 , 690 , 870};

    //loops : 0 to size-1 OR
    int size = 7; //OR
    int sz = sizeof(price); // Total Array size = idata type value * array size
    cout << sz << endl;
    cout << sizeof(price) / sizeof(int) << endl; // gives actual array index size

    cout << "loop for Output : 0 to size-1" << endl; 
    for (int i = 0; i < size ; i++)
    {
        cout << price[i] << endl;
    }

    int size1 = 4;
    int price1[size1];
    cout << "loop for Input : 0 to size-1" << endl;
    for (int i = 0; i < size1 ; i++)
    {
        cin >> price1[i];
    }
    cout << "Price are :" << endl;
    for (int i = 0; i < size1 ; i++)
    {
        cout << price1[i] << endl;
    }
}