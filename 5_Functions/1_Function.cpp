#include <iostream>
using namespace std;

//Function Definition

void printHello(){
    cout << "Hello World!" << endl;
}

int print(){
    cout << "Hello !" << endl;
    return 3;
}

    // sum of two numbers
int sum(int a, int b) // Parameters
{
    int s = a + b;
    return s;
}
    //Minimum of two numbers
int minOFTwo (int a, int b)
{
    if (a > b)
    {
        return b;
    } else {
        return a;
    }
}

//Main Function
int main()
{
    //Function call / invoke
    
    printHello();
    printHello();
    printHello();

    cout << print() << endl;

    cout << sum(20,10) << endl; // Arguments
    
    cout << "Minimun of Two Numbers :- " << minOFTwo(6,3) << endl;

    return 0;
}

/*
    Function syntax

    returnType functionName (type p1 , type p2 , ...)
    {
        work;
    }
*/