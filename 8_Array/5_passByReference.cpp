/*
    Pass by Reference:
    - Reference is a an alternative name for an object or function.
    - It address is the address of the object or function it refers to.
    - We can call it address for simplicity.
*/

#include <iostream>
using namespace std;

void changeArr (int arr[], int size)
{
    cout << "In Function: " << endl;
    for(int i= 0 ; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{
    int arr[] = {1,2,3};

    changeArr(arr,3);

    cout << "In Main Function: " << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}