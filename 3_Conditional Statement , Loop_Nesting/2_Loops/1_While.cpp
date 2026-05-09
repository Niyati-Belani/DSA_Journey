#include <iostream>
using namespace std;

int main()
{
    int count = 1;
    int n;

    cout << "Enter N: " << endl;
    cin >> n;

    while (count <= n) {
        cout << count << " ";
        count++;
    }

    /*
        Infinite loop:-
        -Never close

        while (count <= n){
        cout << count << " ";
        }

    */
    return 0;
}