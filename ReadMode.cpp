#include<conio.h>
#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    char ch[100];
    fstream f;

    f.open("fav.txt",ios::in);
    f.getline(ch,sizeof(ch));

    if(!f)
    {
        cout << "Error occuring during open file.\n";
        return 0;
    }

    cout << ch;

    f.close();

    getch();
    return 0;
}
