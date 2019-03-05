#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class student
{
    private:
        int roll_no;
        char *name;

    public:
        student()
        {
            roll_no = 0;
            strcpy(name,"");
        }

        student(int n,char *r)
        {
            roll_no = n;
            strcpy(name,r);
        }
};

int main()
{
    student s1;
    student s2(12,"Utkarsh");
    getch();
    return 0;
}
