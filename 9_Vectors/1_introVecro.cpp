/*
    Vectors:
    - it is looking like Array.
    - it is dynamic in nature it means they haven't fixed size.
    
    STL : Standard Templete Library

    Syntax :
    1. vector<int>vec;
    2. vector<int> vec = {1,2,3}
    3. vector<int> vec(3,0)
*/

#include <iostream>
#include <vector> // #include <bits/c++.h> - not recommended
using namespace std;

int main()
{
    vector<int> vec = {1,2,3}; 
    cout << vec[0] << endl; 
    
    vector<int> vec1(4,0);
    // cout << vec1[0] << endl;
    // cout << vec1[1] << endl;
    // cout << vec1[2] << endl;
    // cout << vec1[3] << endl;

    for(int i : vec1)
    {
        cout << i << endl;
    }

    vector<char> v = {'a','b','m','n','d'};
    for(char val : v)
    {
        cout << val <<endl;
    }
    return 0;
}