#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

class cover
{
    public:
        cover(char *title)
        {
            strcpy(cover::title,title);
        }

    protected:
        char title[256];
};

class page
{
    public:
        page(int line = 55)
        {
            page::line = line;
        }

    protected:
        int line;
        char *text;
};

class book : public cover ,public page
{
    public:
        book(char *auther,char *title,float cost):cover(title),page(60)
        {
            strcpy(book::auther,auther);
            strcpy(book::title,title);
            book::cost cost;
        }

        void show_book(void)
        {
            cout << title << endl;
            cout << auther << "\t" << cost;
        }

    private:
        char author[256];
        float cost;
};

int main()
{
    book text("A","B",49.95);
    text.show_book();
    getch();
    return 0;
}
