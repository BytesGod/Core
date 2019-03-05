#include<iostream>
#include<conio.h>

using namespace std;

class student
{
    private:
        int roll_no;

    public:
        void put(int x)
        {
            roll_no = x;
        }

        void display()
        {
            cout << "Roll no : " << roll_no;
        }
};

class marks
{
    private:
        int mark;
        student s1;  // class object as member

    public:
        marks(int m)
        {
            mark = m;
            s1.put(1);
        }

        void display()
        {
            s1.display();
            cout << "Mark : " << mark;
        }
};

int main()
{
    marks m(80);
    m.display();
    getch();
    return 0;
}
