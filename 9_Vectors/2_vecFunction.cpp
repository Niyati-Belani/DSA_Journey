/*
    size :- Gives Vector Size
    push_back :- insert element from back of vector
    pop_back :- remove element from back of vector
    front :- To display Front value
    back :- to display last value
    at :- getting indexed value
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {'m','n','d','b','y','a','s'};
    cout << "Size : " << v.size() << endl;
    cout << endl;

    vector<int> vec;
    cout << "Before Push, Size is : " << vec.size() << endl;
    vec.push_back(12);
    vec.push_back(4);
    vec.push_back(24);
    vec.push_back(19);
    for (int i : vec)
    {
        cout << i << endl;
    }
    cout << "After Push, Size is : " << vec.size() << endl;
    cout << endl;

    cout << "Now Remove From Vector." << endl;
    vec.pop_back();
    for (int i : vec)
    {
        cout << i << endl;
    }
    cout << "After POP, Size is : " << vec.size() << endl;
    cout << endl;

    cout << "Now Front." << endl;
    cout << vec.front() << endl;
    cout << endl;

    cout << "Now Back." << endl;
    cout << vec.back() << endl;
    cout << endl;

    cout << "Now At." << endl;
    cout << vec.at(2) << endl;
    cout << endl;

    return 0;
}