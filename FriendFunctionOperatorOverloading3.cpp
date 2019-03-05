#include<iostream>
#include<conio.h>

using namespace std;

class time
{
    private:
        int hh;
        int mi;
        int sec;

    public:
        time(int a,int b,int c)
        {
            hh = a;
            mi = b;
            sec = c;
        }

        friend time operator+(time t,int x)
        {
            t.hh += x;
            return t;
        }

        void display()
        {
            cout << "time : " << hh << ":" << mi << ":" << sec;
        }
};

int main()
{
    time t1 = time(3,12,23);
    time t2 = t1 + 3;
    t2.display();
    getch();
    return 0;
}
