#include<iostream>
#include<conio.h>

using namespace std;

class student
{
    private:
        int mark,per;

    public:
        student()
        {
            mark = 0;
            per = 0;
        }

        student(int x,int y)
        {
            mark = x;
            per = y;
        }

        void show()
        {
            cout << mark << " ";
            cout << per << "\n";
        }

        student operator,(student s2);
};

student student::operator,(student s2)
{
    student temp;
    temp.mark = s2.mark;
    temp.per = s2.per;
    cout << s2.mark << " " << per << "\n";
    return temp;
}

int main()
{
    student s1(10,20),s2(5,30),s3(1,1);
    s1.show();
    s2.show();
    s3.show();
    cout << "\n";
    s1 = (s1,s2,s2);
    s1.show();
    s1 = (s1,s2);
    s1.show();
    getch();
    return 0;
}
