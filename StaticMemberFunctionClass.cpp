#include<iostream>
#include<conio.h>

using namespace std;

class simple
{
    private:
        static int i;

    public:
        static void init(int x)       //for static function we can use only static variable
        {
            i = x;
        }

        void show()
        {
            cout << "x = " << i;
        }
};
int simple::i;

int main()
{
    simple::init(100);
    simple a;
    a.show();
    getch();
    return 0;
}
