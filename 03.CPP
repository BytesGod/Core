/* 
     PC No:SRKI_054
     Faculty Name: rupal nikunj
     Student Name : Utkarsh Patil
     Roll_No: E17111920310101 
     Class : SY Bsc CS Sem-4
     Div : A
     Date: 08/01/2019
     Sub : data structure
     Assignment: 2
     Program Defination :  Write a C++ program to implement the        following operations on Stack
        a) PUSH
        b) POP
        c) PEEP
        d) DISPLAY.

*/

#include <iostream.h>
#include <conio.h>

class stack
{

 int toss;
 int x;
 int a[10];
 int i;
 int c;
 public:
 stack()
 {
  toss=-1;


 }

 void push()
 {
  if(toss>5)
  {
   cout<<"Stack overflow"<<endl;

  }
  else
  {
  cout<<endl;
  cout<<"Enter element to push: ";
  cin>>x;
  toss++;
  a[toss]=x;

  }
 }

 void pop()
 {
  if(toss==-1)
  {
   cout<<"Underflow";
  }
  else
  {
  cout<<endl<<"Element "<<a[toss]<<" is deleted"<<endl;
  toss--;
  }
 }
 void disp()
 {
   if(toss==-1)
   {
    cout<<endl<<"UnderFlow"<<endl;
   }
   else
   {
    for(i=0;i<=toss;i++)
    {
     cout<<endl<<a[i]<<endl;
    }
   }
 }

 void peep()
 {
  int p;
  cout<<"Enter element to search:";
  cin>>p;

  int flag=0;

	for(i=0;i<=toss;i++)
	{
	 if(a[i]==p)
	 {
	  cout<<"Found";
	  flag++;
	  break;

	 }
       }
	 if(flag==0)
	 {
	  cout<<"Not found";
	 }



	}

 };

void main()
{
    stack s;
    clrscr();
    int c;
    do
    {
	cout <<endl<<"1. Push"<<endl;
	cout <<"2.Pop"<<endl;
	cout <<"3 Display"<<endl;
	cout <<"4. Search"<<endl;
	cout << "5. Exit" <<endl;
	cout << "Enter your choice : ";
	cin>>c;

	switch(c)
	{
	    case 1:
		s.push();
		break;
	    case 2:
		s.pop();
		break;
	    case 3:
		s.disp();
		break;
	    case 4:
		s.peep();
		break;
	    case 5:
		clrscr();
		cout<<endl<<"Thanking for use this application."<<endl;
		break;

	    default:
		cout<<endl<<"Enter valid choice"<<endl;
		clrscr();
	}
     }while(c!=5);
 getch();
}
