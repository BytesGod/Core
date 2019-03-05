/* 
     PC No:SRKI_054
     Faculty Name: rupal nikunj
     Student Name : Utkarsh Patil
     Roll_No: E17111920310101 
     Class : SY Bsc CS Sem-4
     Div : A
     Date: 01/12/2018
     Sub : data structure
     Assignment: 1
     Assignment Aim: sorting 
     Program Title: 1/1
*/

#include<iostream.h>
#include<conio.h>

class Array
{
    public:
	int a[10];
	int size,i;
	int j,temp;

    void getdata()
    {
	cout << "Enter the size of elements:";
	cin >> size;
	cout << "\nEnter the elements:";

	for(i=0;i<size;i++)
	{
	    cin >> a[i];
	}
    }

    void sort()
    {
	for(i=0;i<size;i++)
	{
	    for(j=i+1;j<size;j++)
	    {
		if(a[i]>a[j])
		{
		    temp = a[i];
		    a[i]=a[j];
		    a[j]=temp;
		}
	    }
	}
	cout << "Sorted array : " << endl;
	for(i=0;i<size;i++)
	{
	    cout << a[i] << "\t";
	}
    }
};


void main()
{
    clrscr();
    Array a;
    a.getdata();
    a.sort();
    getch();
}
