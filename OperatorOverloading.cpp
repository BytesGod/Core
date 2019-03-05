#include<iostream>
#include<conio.h>

using namespace std;

class myClass
{
    private:
        int x;
        int y;

    public:
        myClass(int a,int b)
        {
            x = a;
            y = b;
        }

        myClass operator+(myClass &);
        myClass operator-(myClass &);
        myClass operator/(myClass &);

        void display()
        {
            cout << "x is : " << x << " and y is : " << y << endl;
        }
};

myClass myClass::operator+(myClass & m)
{
    myClass temp;
    temp.x = x + m.x;
    temp.y = y + m.y;
    return temp;
}

myClass myClass::operator-(myClass & m)
{
    myClass temp;
    temp.x = x - m.x;
    temp.y = y - m.y;
    return 0;
}

myClass myClass::operator/(myClass &m)
{
    myClass temp;
    temp.x = x / m.x;
    temp.y = y / m.y;
    return 0;
}

int main()
{
    myClass m1(3,8);
    myClass m2(6,2);
    myClass m3 = m1 + m2;
    m2 = m1 / m3;
    m1 = m2 - m3;
    m3.display();
    m2.display();
    m1.display();
    getch();
    return 0;
}
