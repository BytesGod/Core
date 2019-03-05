#include<iostream>
#include<conio.h>
#include<fstream>

using namespace std;

int main()
{
    char name[200];
    fstream f;

    f.open("fav.txt",ios::out);

    if(!f)
    {
        cout << "Error occuring creating file.\n";
        return 0;
    }

    cout << "file created successfully";

    cout << "Enter your name : " ;
    cin.getline(name,sizeof(name));

    f << name;

    f.close();

    getch();
    return 0;
}
