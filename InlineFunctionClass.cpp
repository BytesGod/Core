#include<iostream>
#include<conio.h>

using namespace std;

class calculate
{
    private:
        int x,y;

    public:
        void data(int a,int b)
        {
            x = a;
            y = b;
        }

        inline int sum()
        {
            return x + y;
        }

        inline int mul()
        {
            return x * y;
        }
};

int main()
{
    calculate c;
    c.data(10,2);
    int sum = c.sum();
    int mul = c.mul();
    cout << "Addition and multipication is : " << sum << "  " << mul << endl;
    getch();
    return 0;
}
