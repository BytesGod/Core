/* 
     PC No:SRKI_054
     Faculty Name: rupal nikunj
     Student Name : Utkarsh Patil
     Roll_No: E17111920310101 
     Class : SY Bsc CS Sem-4
     Div : A
     Date: 01/12/2018
     Sub : data structure
     Assignment: 1/2
     Assignment Aim: sorting
     Program Title:1/2
*/

#include<iostream.h>
#include<conio.h>

class Array
{
    public:
	int a[10];
	int size,i;
	int j,temp,num;
	int first,mid,last;

    void getdata()
    {
	cout << "Enter the size of elements:";
	cin >> size;
	cout << "\nEnter the elements:";

	for(int i=0;i<size;i++)
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

    void search()
    {
	cout << "\nEnter number for search : ";
	cin >> num;
	first = 0;
	last = size - 1;
	mid = (first+last)/2;

	while(first<=last)
	{
	    if(a[mid]<num)
	    {
		first = mid + 1;
	    }
	    else if(a[mid]==num)
	    {
		cout << num << " is loacated at position : " << mid + 1;
		break;
	    }
	    else
	    {
		last = mid - 1;
	    }
	    mid =(first + last)/2;
	}
	if(first>last)
	{
	    cout << "Not found" << num << "is not present is the list.";
	}
    }
};


void main()
{
    clrscr();
    Array a;
    a.getdata();
    a.sort();
    a.search();
    getch();
}
