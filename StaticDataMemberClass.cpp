#include<iostream>
#include<conio.h>

using namespace std;

class simple
{
    private:
        int x,y;
        static int count;           // declaration of static variable

    public:
        void getdata(int a,int b)
        {
            x = a;
            y = b;
            count++;
        }

        void display()
        {
            cout << "x = " << x << " and y = " << y;
        }

        calculate()           // when we use static variable as a return value
        {                     // then can't use data-type before function
            return count;
        }
};

int simple::count;        //static variable must be defined outside the class with class name

int main()
{
    simple x1,x2,x3,x4,x5;
    x1.getdata(1,2);
    x2.getdata(3,3);
    x3.getdata(2,1);
    x4.getdata(3,6);
    x5.getdata(5,4);
    int total = x5.calculate();
    cout << "Total number of object is : " << total;
    getch();
    return 0;
}
