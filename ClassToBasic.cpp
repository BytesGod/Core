#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class myClass
{
    private:
        char *name;
        int length;

    public:
        myClass(char *s)
        {
            strcpy(name,s);
        }

        operator int()
        {
            return length;
        }
};

int main()
{
    myClass m1 = "hello world";
    int len = m1;
    cout << "Length of string : " << len;
    getch();
    return 0;
}
