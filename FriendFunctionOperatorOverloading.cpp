#include<iostream>
#include<conio.h>

using namespace std;

class loc
{
    private:
        int longitude,latitude;

    public:
        loc(){}

        loc(int lg,int lt)
        {
            longitude = lg;
            latitude = lt;
        }

        void show()
        {
            cout << longitude << " ";
            cout << latitude << "\n";
        }

        loc operator=(loc op2);
        friend loc operator++(loc &op);
        friend loc operator--(loc &op);
};

loc loc::operator=(loc op2)
{
    longitude = op2.longitude;
    latitude = op2.latitude;
    return *this;  //return object that generated during call
}

loc operator++(loc &op)
{
    op.longitude++;
    op.latitude++;
    return op;
}

loc operator--(loc &op)
{
    op.longitude--;
    op.latitude--;
    return op;
}

int main()
{
    loc ob1(10,20),ob2;
    ob1.show();
    ++ob1;
    ob1.show();
    ob2 = ++ob1;
    ob2.show();
    --ob2;
    ob2.show();
    getch();
    return 0;
}
