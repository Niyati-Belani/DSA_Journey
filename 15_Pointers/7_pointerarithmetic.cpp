// Pointer Arithmetic
// Incrementing and decrementing pointers
// Add / Subtract Number
// Subtracting two pointers
// Compare (<,>,<=,>=,==,!=) two pointers

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1,2,3,4,5};

    int a = 10;
    int *ptr = &a;

    cout << ptr << endl; // address of a
    ptr++; // incrementing the pointer
    cout << ptr << endl; 
    ptr--;
    cout << ptr << endl;

    cout << "------------------------" << endl;
    cout << ptr << endl;
    ptr += 1;
    cout << ptr << endl;

    cout << "------------------------" << endl;
    cout << *arr << endl; // value of arr[0]
    cout << *(arr + 1) << endl; // value of arr[1]
    cout << *(arr + 2) << endl; // value of arr[2]
    cout << *(arr + 3) << endl; // value of arr[3]
    cout << *(arr + 4) << endl; // value of arr[4]

    cout << "------------------------" << endl;
    int *ptr2;
    int *ptr1 = ptr2 + 2;
    cout << ptr1 - ptr2 << endl; // 2   

    cout << "------------------------" << endl;
    int *ptr3;
    int *ptr4;

    cout << ptr3 << endl;
    cout << ptr4 << endl;

    cout << (ptr3 < ptr4) << endl;

    ptr4 = ptr3;

    cout << (ptr3 == ptr4) << endl;

    return 0; 
} 