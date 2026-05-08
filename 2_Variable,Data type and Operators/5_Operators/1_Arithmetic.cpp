#include <iostream>
using namespace std;

int main()
{
    int a = 20 , b = 10;
    int c = 5 , d = 2;

    cout << "Sum of a & b is : " << (a+b) << endl;
    cout << "Difference of a & b is : " << (a-b) << endl;
    cout << "Product of a & b is : " << (a*b) << endl;
    cout << "Division of a & b is : " << (a/b) << endl;
    cout << "Modulo of a & b is : " << (a%b) << endl;

    cout << "Division of c & d is : " << (c/d) << endl;
    /*
        int / int = int
        int / float = float
        int  / double = double
        float / int = float
        double / int = double

        Also applied in multiplication.
    */
    return 0;
}