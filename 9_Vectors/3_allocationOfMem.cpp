/*
    Static Allocation Memory:
    - it allocated at compile time.
    - array has allocated static memory.
    - Fixed Size.
    - allocation is done in stack memory.

    Dynamic Allocation Memory:
    - it allocated at run time.
    - vectors has allocated dynamic memory.
    - Resize.
    - allocation is done in heap memory.

*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;
    return 0;
}