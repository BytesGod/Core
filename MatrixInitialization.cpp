#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

class matrix
{
    private:
        int **mat;
        int ROW,COL;

    public:
        matrix(int r,int c)
        {
            ROW = r;
            COL = c;

            mat = new int *[ROW];
            for (int i=0;i<=ROW;i++)
            {
                mat[i] = new int[COL];
            }
        }

        void show()
        {
            cout << "Your entered matrix is : " << endl;
            for (int i=0;i<ROW;i++)
            {
                for (int j=0;j<COL;j++)
                {
                    cout << " " << mat[i][j];
                }
                cout << "\n";
            }
        }

        void insert()
        {
            for (int i=0;i<ROW;i++)
            {
                for (int j=0;j<COL;j++)
                {
                    cout << "Enter the value for Mat[" << i << "," << j << "] : ";
                    cin >> mat[i][j];
                }
            }
        }
};

int main()
{
    int r,c;

    cout << "Enter the row : ";
    cin >> r;

    cout << "Enter the column : ";
    cin >> c;

    matrix mat1(r,c);
    mat1.insert();
    system("cls");
    mat1.show();

    getch();
    return 0;
}
