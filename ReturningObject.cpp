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
            cout << "Rupees = " << rs << " and paisa = " << paisa;
        }

        rupees sum(rupees r1,rupees r2)
        {
            rupees temp;
            temp.rs = r1.rs + r2.rs;
            temp.paisa = r1.paisa + r2.paisa;
            return temp;
        }
};

int main()
{
    rupees a,b,c;
    a.getdata(25,3);
    b.getdata(25,8);
    c = b.sum(a,b);
    c.display();
    getch();
    return 0;
}
