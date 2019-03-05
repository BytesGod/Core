#include<iostream>
#include<conio.h>

using namespace std;

class cal
{
    private:
        int n1,n2;

    public:
        cal()
        {
            n1 = 0;
            n2 = 0;
        }

    cal(int x,int y)
    {
        n1 = x;
        n2 = y;
    }

    void display()
    {
        cout << "\n n1 = " << n1 << " and n2 = " << n2 << endl;
    }

    cal operator++()
    {
        cal temp;
        temp.n1 =++n1;
        temp.n2 =++ n2;
        return temp;
    }

    cal operator++(int x)
    {
        cout << "\n Post Increment : ";
        cal temp;
        temp.n1 =++n1;
        temp.n2 =++n2;
        return temp;
    }
};

int main()
{
    cal n1(10,20);
    cal res;
    res =++ n1;
    res.display();
    res = n1++;
    res.display();
    getch();
    return 0;
}
