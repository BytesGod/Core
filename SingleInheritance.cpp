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
        student(int r,char *n)
        {
            roll_no = r;
            strcpy(name,n);
        }

        void display()
        {
            cout << "Roll no : " << roll_no << endl;
            cout << "Name : " << name << endl;
        }
};

class exam: public student
{
    private:
        char sub;
        float per;

    public:
        exam(char s,float p)
        {
            strcpy(sub,s);
            per = p;
        }

        void show()
        {
            cout << "Subject name : " << sub;
            cout << "Percentage : " << per;
        }
};

int main()
{
    student s(1,"Hemant");
    exam e("jave",78.8);
    e.display();
    e.show();
    getch();
    return 0;
}
