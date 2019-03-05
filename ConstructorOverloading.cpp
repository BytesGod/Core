#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class date
{
    private:
        int day,month,year;

    public:
        date(char* dt)
        {
            sscanf(dt,"%d %*c %d %*c %d",&day,&month,&year);  //sscanf declared in the stdio.h header file
        }

        date(int dd,int mm,int yy)
        {
            day = dd;
            month = mm;
            year = yy;
        }

        void display()
        {
            cout << day << "/" << month << "/" << year << endl;
        }
};

int main()
{
    date d1(12,3,2018);
    date d2("12/3/2018");
    d1.display();
    d2.display();
    getch();
    return 0;
}
