#include <iostream>
using namespace std;

int main()
{
    int mark;

    cout << "enter your Marks:-" << endl;
    cin >> mark;

    if (mark >= 90){
        cout << "Grade :- A" << endl;
    } else if (mark >= 80 && mark < 90){
        cout << "Grade :- B" << endl;
    } else if (mark >= 70 && mark < 80){
        cout << "Grade :- C" << endl;
    } else if (mark >= 60 && mark < 70){
        cout << "Grade :- D" << endl;
    } else if (mark >= 50 && mark < 60){
        cout << "Grade :- E" << endl;
    } else {
        cout << "Fail!!" << endl;
    }
/*-------------------------------------------------------------------------*/
    char ch;

    cout << "Enter Character: " << endl;
    cin >> ch;
    
    if (ch >= 65 && ch <= 90) {
        cout << "Character is Uppercase." << endl;
    } else {
        cout << " Character is Lowercase." << endl;
    }
    return 0;
}