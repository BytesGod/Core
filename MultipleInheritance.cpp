#include<iostream>
#include<conio.h>

using namespace std;

class base1
{
    protected:
        int x;

    public:
        void showx()
        {
            cout << "X : " << x << endl;
        }
};

class base2
{
    protected:
        int y;

    public:
        void showy()
        {
            cout << "Y : " << y << endl;
        }
};

class derived : public base1,public base2
{
    public:
        void set(int i,int j)
        {
            x = i;
            y = j;
        }
};

int main()
{
    derived ob;
    ob.set(10,20);
    ob.showx();
    ob.showy();
    getch();
    return 0;
}
