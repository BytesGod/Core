#include<iostream>
#include<conio.h>
#include<stdio.h>
const int size = 3;

using namespace std;

class vector
{
    private:
        int x,y;

    public:
        vector()
        {
            x = 0;
            y = 0;
        }

        friend istream & operator>>(istream &,vector &);
        friend ostream & operator<<(ostream &,vector &);
};

istream & operator>>(istream &din,vector &b)
{
    cout << "Enter the Two value : ";
    din >> b.x;
    din >> b.y;
    return din;
}

ostream & operator<<(ostream &dout,vector &b)
{
    dout << "Value of x : " << b.x << endl;
    dout << "Value of y : " << b.y;
    return dout;
}

int main()
{
    vector v;
    cin >> v;
    cout << v;
    getch();
    return 0;
}
