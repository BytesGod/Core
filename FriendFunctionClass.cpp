#include<iostream>
#include<conio.h>

using namespace std;

class myclass
{
    private:
        int a,b;

    public:
        friend int sum(myclass x);   //not a member function of any class
        void set_ab(int i,int j)
        {
            a = i;
            b = j;
        }
};

int sum(myclass x)
{
    return x.a + x.b;
}

int main()
{
    myclass n;
    n.set_ab(3,4);
    cout << "Sum of two number : " << sum(n);
    getch();
    return 0;
}
