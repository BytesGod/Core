#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

int vol(int);
double vol(double,int);
long vol(long int,int,int);

int main()
{
    cout << "Cube = " << vol(10) << endl;
    cout << "Cylinder = " << vol(2,5,8) << endl;
    cout << "RectangleBox = " << vol(100,75,15) << endl;
    getch();
    return 0;
}

int vol(int s)
{
    return (s*s*s);
}

double vol(double r,int h)
{
    return (3.14,r*r*h);
}

long vol(long l,int b,int h)
{
    return (l*b*h);
}
