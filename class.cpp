#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class student
{
    private:
        int roll_no;
        string name;
        float per;

    public:
        void getdata()
        {
            cout << "Enter your roll No. : ";
            cin >> roll_no;

            cout << "Enter your name : ";
            cin >> name;

            cout << "Enter your percentage : ";
            cin >> per;
        }

        void display()
        {
            cout << "Your roll No. is : " << roll_no << endl;
            cout << "Your name is : " << name << endl;
            cout << "Your percentage is : " << per << endl;
        }

};

int main()
{
    student s;
    s.getdata();
    system("cls");
    s.display();
    getch();
    return 0;
}
