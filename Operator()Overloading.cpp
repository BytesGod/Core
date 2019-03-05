#include<iostream>
#include<conio.h>

using namespace std;

class calculate
{
    private:
        int x,y;

    public:
        calculate()
        {
            x = 0;
            y = 0;
        }

        calculate(int a,int b)
        {
            x = a;
            y = b;
        }

        void show()
        {
            cout << x << " ";
            cout << y << "\n";
        }

        calculate operator+(calculate c1);
        calculate operator()(int i,int j);
};

calculate calculate::operator()(int i,int j)
{
    x = i;
    y = j;
    return *this;
}

calculate calculate::operator+(calculate c1)
{
    calculate temp;
    temp.x = x + c1.x;
    temp.y = y + c1.y;
    return temp;
}

int main()
{
    calculate ob1(4,8),ob2(5,5);
    ob1.show();
    ob1(3,3);
    ob1.show();
    ob1 = ob2 + ob1(10,10);
    ob1.show();
    getch();
    return 0;
}
