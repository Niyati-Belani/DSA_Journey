#include <iostream>
using namespace std;

int main ()
{
    //Convert Operation into Reverse
    cout << (3<5) << endl;
    cout << !(3<5) << endl;

    //If both side operations are true then gives true else false
    cout << ((3<5) && (2<5)) << endl;
    cout << ((3<5) && (2>5)) << endl;
    
    // If any of one is true from both side then gives true
    cout << ((3<5) || (2<5)) << endl;
    cout << ((3<5) || (2>5)) << endl;


    /*
        Logical Operators:-
            || OR
            && AND
            ! NOT
    */
    return 0;
}