#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class Employee;

class Student
{
    private:
        int sid;
        char *name;

    public:
        Student(int s,char *n)
        {
            sid = s;
            strcpy(name,s);
        }

        int getid()
        {
            return sid;
        }

        char *getname()
        {
            return name;
        }

        Student(Employee E1)
        {
            sid = E1.getid();
            name = E1.getname();
        }

        void display()
        {
            cout << "Student id : " << sid << endl;
            cout << "Name : " << name;
        }
};

class Employee
{
    private:
        int eid;
        char *name;

    public:
        Employee(int s,char *n)
        {
            eid = s;
            name = n;
        }

        int getid()
        {
            return eid;
        }

        char *getname()
        {
            return name;
        }

        void display()
        {
            cout << "Employee id : " << eid << endl;
            cout << "Employee naem : " << name;
        }
};

int main()
{
    Student s(1,"Utkarsh");
    Employee e(1,"Amit");
    Student s2;
    s2.display();
    getch();
    return 0;
}
