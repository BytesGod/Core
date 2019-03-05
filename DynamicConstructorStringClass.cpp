#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class MyClass
{
    private:
        char *name;
        int length;

    public:
        MyClass()
        {
            length = 0;
            name = new char[length + 1];
        }

        MyClass(char *s)
        {
            length = strlen(s);
            name = new char[length + 1];
            strcpy(name,s);
        }
};

int main()
{
    string s = "Hello";
    string s1("World");
    getch();
    return 0;
}
