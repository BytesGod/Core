#include<iostream>
#include<conio.h>

using namespace std;

class myClass
{
    public:
        int i;

    myClass *operator->()
    {
        return this;
    }
};

int main()
{
    myClass obj;
    obj-> i =10;
    cout << obj.i << " " << obj->i;
    getch();
    return 0;
}
