#include<iostream>
#include<conio.h>

using namespace std;

class OverLoading
{
    private:
        int x,y;

    public:
        int sum(int a,int b)
        {
            return a + b;
        }

        int sum(int a)
        {
            int b;
            cout << "Enter the missing value : ";
            cin >> b;
            return a + b;
        }
};

int main()
{
    OverLoading obj;
    cout << obj.sum(12);
    cout << "\n";
    cout << obj.sum(10,12);
    getch();
    return 0;
}
