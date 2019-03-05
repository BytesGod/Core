#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class employee
{
    private:
        int eno,deptno,salary;
        string name;

    public:
        void getdata();
        float net_salary(int amt);
        void display();
};

void employee::getdata()
{
    cout << "Enter employee no : ";
    cin >> eno;

    cout << "Enter employee department no : ";
    cin >> deptno;

    cout << "Enter employee salary : ";
    cin >> salary;

    cout << "Enter employee name : ";
    cin >> name;
}

float employee::net_salary(int amt)
{
    return amt + salary;
}

void employee::display()
{
    cout << "Employee No : " << eno << endl;
    cout << "Employee department No : " << deptno << endl;
    cout << "Employee salary : " << salary << endl;
    cout << "Employee name : " << name << endl;
}


int main()
{
    employee e;
    e.getdata();
    float salary;
    salary = e.net_salary(2000);
    system("cls");
    e.display();
    cout << "Net salary is : " << salary;
    getch();
    return 0;
}
