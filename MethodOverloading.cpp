#include<iostream>
#include<conio.h>

using namespace std;

class human
{
    private:
        char name;
        int age;

    public:
        void getdata()
        {
            cout << "Name : ";
            cin >> name;
            cout << "\nEnter age : ";
            cin >> age;
        }

        void display()
        {
            cout << "\nName : " << name;
            cout << "\nAge : " << age << endl;
        }
};

class student : public human
{
    private:
        int roll_no;
        int mark;

    public:
        void getdata()
        {
            cout << "Enter roll no : ";
            cin >> roll_no;
            cout << "\nEnter mark : ";
            cin >> mark;
        }

        void display()
        {
            cout << "\nRoll No : " << roll_no << endl;
            cout << "Mark : " << mark;
        }
};

int main()
{
    student s;
    human h;
    s.getdata();
    h.getdata();
    s.display();
    h.display();
    getch();
    return 0;
}
