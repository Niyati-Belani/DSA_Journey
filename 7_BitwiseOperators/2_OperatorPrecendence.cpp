/*
    Operators                      Precedence

    ! , + , - (unary operators)    first   R to L
    * , / , %                      second  L to R
    + , -                          third   L to R
    < , <= , >= , >                fourth  L to R
    == , !=                        fifth   L to R
    &&                             sixth   L to R
    ||                             seventh L to R
    = (assignment operator)        last    R to L
*/

#include <iostream>
using namespace std;

int main ()
{
    cout << 7*5/8+4*6-2 << endl;
}