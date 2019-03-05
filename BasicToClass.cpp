#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class myClass
{
    private:
        char *name;

    public:
        myClass(char *s)
        {
            strcpy(name,s);
        }
};

int main()
{
    myClass m("Hello");
    myClass m2;
    m2 = "Hello";
    getch();
    return0;
}
