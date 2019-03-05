#include<iostream>
#include<conio.h>

using namespace std;

class date
{
    private:
        int day,month,year;

    public:
        date(char *d)
        {
            cin >> day >> month >> year;
        }

        date(int d,int m,int y)
        {
            day = d;
            month = m;
            year = y;
        }

        void show_date()
        {
            cout << day << "/" << month << "/" << year << "\n";
        }
};

int main()
{
    date d1(12,11,2018);
    d1.show_date();
    getch();
    return 0;
}
