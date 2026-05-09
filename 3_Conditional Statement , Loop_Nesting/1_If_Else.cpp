#include <iostream>
using namespace std;

int main()
{
    int n = -5;

    if(n >= 0){
        cout << "N is Positive!" << endl;
    } else {
        cout << "N is Negative!" << endl;
    }
/*-------------------------------------------------------------------------*/
    int age;

    cout << "Enter your Age: " << endl;
    cin >> age ;

    if (age <= 18){
        cout << "You Are not Able for vote. \n" << endl;
    } else {
        cout << "You Are Able for vote. \n" << endl;
    }
/*-------------------------------------------------------------------------*/
    int num;

    cout << "Enter number:-" << endl;
    cin >> num;

    if (num % 2 == 0){
        cout << "Even Number." << endl;
    } else {
        cout << "Odd Number." << endl;
    }
/*-------------------------------------------------------------------------*/
    char ch;

    cout << "Enter Character: " << endl;
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "Character is Lowercase." << endl;
    } else {
        cout << "Character is Uppercase." << endl;
    }
    return 0;
}