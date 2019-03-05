#include<iostream>
#include<conio.h>

using namespace std;

class atype
{
    private:
        int a[3];

    public:
        atype(int i,int j,int k)
        {
            a[0] = i;
            a[1] = j;
            a[2] = k;
        }

    int operator[](int i)
    {
        return a[i];
    }
};

int main()
{
    atype ob(1,2,3);
    cout << ob[1];
    getch();
    return 0;
}
