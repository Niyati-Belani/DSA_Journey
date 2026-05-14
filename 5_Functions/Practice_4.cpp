#include  <iostream>
using namespace std;

int main ()
{
    int num = 143;
    int digitSum = 0;
    int r;

    while(num > 0)
    {
        r = num % 10;
        num = num / 10;
        digitSum += r;
        cout << r << endl;
    }
    cout << "Sum of digits of Number : " << digitSum << endl;
    return 0;
}