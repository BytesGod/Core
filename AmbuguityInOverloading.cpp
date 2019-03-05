#include<iostream>
#include<conio.h>

using namespace std;

float myFunction(float i);
double myFunction(double i);

int main()
{
    cout << myFunction(3.14) << endl; //call my function double
    cout << myFunction(10);  //create ambiguity
    getch();
    return 0;
}
