#include<iostream>
#include<conio.h>

using namespace std;

class employee
{
    private:
        int eid , deptid;
        string name;
        int salary;

    public:
        void info(int x,int y,string s,int z)
        {
            eid = x;
            deptid = y;
            name = s;
            salary = z;
        }

        void getdata()
        {
            cout << "Enter employee id : ";
            cin >> eid;

            cout << "Enter department id of employee : ";
            cin >> deptid;

            cout << "Enter name of employee : ";
            cin >> name;

            cout << "Enter salary of employee : ";
            cin >> salary;
        }

        void display()
        {
            cout << "Employee id : " << eid << endl;
            cout << "Department id of employee : " << deptid << endl;
            cout << "Employee name : " << name << endl;
            cout << "Employee salary : " << salary << endl;
        }
};

int main()
{
    employee manager[2];
    employee account[8];
    employee worker[20];

    manager[0].info(1,12,"raghav",45000);
    account[3].info(4,2,"nilam",2000);
    account[3].display();

    getch();
    return 0;
}
