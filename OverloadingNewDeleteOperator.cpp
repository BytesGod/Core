#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class loc
{
    private:
        int longitude,latitude;

    public:
        loc(){}

        loc(int lg,int lt)
        {
            longitude = lg;
            latitude = lt;
        }

        void show()
        {
            cout << longitude << " ";
            cout << latitude << "\n";
        }

        void *operator new(unsigned int size);
        void operator delete(void *p);
};

void *loc::operator new(unsigned int size)
{
    void *p;
    cout << "In overloaded new.\n";
    p = malloc(size);
    return p;
}

void loc::operator delete(void *p)
{
    cout << "In overloaded delete.\n";
    free(p);
}

int main()
{
    loc *p1,*p2;
    p1 = new loc(10,20);
    p2 =  new loc(-10,-20);
    p1->show();
    p2->show();
    delete p1;
    delete p2;
    getch();
    return 0;
}
