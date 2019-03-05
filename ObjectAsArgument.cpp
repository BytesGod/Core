#include<iostream>
#include<conio.h>

using namespace std;

class rupees
{
    private:
        int rs,paisa;

    public:
        void getdata(int x,int y)
        {
            rs = x;
            paisa = y;
        }

        void display()
        {
            cout << "Rupees = " << rs << "and Paisa = " << paisa;
        }

        void sum(rupees r1,rupees r2)            //rupees is a class name take here class name
        {
            rs = r1.rs + r2.rs;
            paisa = r1.paisa + r2.paisa;
        }
};

int main()
{
    rupees a,b,c,d;
    a.getdata(12,5);
    b.getdata(45,8);
    c.sum(a,b);
    c.display();
    getch();
    return 0;
}
