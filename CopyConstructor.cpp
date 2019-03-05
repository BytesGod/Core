#include<iostream>
#include<conio.h>

using namespace std;

class MyClass
{
    private:
        int x,y,z;

    public:
        MyClass(int a,int b,int c)
        {
            x = a;
            y = b;
            z = c;
        }

        MyClass(MyClass & ob)  // this is illegal
        {
            x = ob.x;
            y = ob.y;
            z = ob.z;
        }
};

int main()
{
    MyClass m1(2,3,5);  //call first constructor
    MyClass m2(m1);     //copy constructor
    MyClass m3 = m1;    //call copy constructor
    getch();
    return 0;
}
