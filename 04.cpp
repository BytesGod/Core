/* 
     PC No:SRKI_054
     Faculty Name: rupal snehkunj
     Student Name : Utkarsh Patil
     Roll_No: E17111920310101 
     Class : SY Bsc CS Sem-4
     Div : A
     Date: 29/01/2019
     Sub : data structure
     Assignment: 4/Q1
     Program Defination :  Write a C++ program using simple linklist
        a) insert
        b) delete
        c) display
        d) search
	e) update
*/

#include<iostream.h>
#include<conio.h>

class Node
{
    public:
	int info;
	Node *next;
};

class List:public Node
{
    Node *first,*last;

    public:
	List()
	{
	    first=NULL;
	    last=NULL;
	}

	void create();
	void insert();
	void display();
	void del();
	void search();
	void update();
};

void List::create()
{
    Node *temp;
    temp=new Node;

    int n;

    cout << "\nEnter an element : ";
    cin >> n;

    temp->info=n;
    temp->next=NULL;

    if(first==NULL)
    {
	first=temp;
	last=first;
    }
    else
    {
	last->next=temp;
	last=temp;
    }
}

void List::insert()
{
    Node *prev,*cur;
    prev=NULL;
    cur=first;

    int count=1,pos,ch,n;
    Node *temp=new Node;

    cout << "Enter a element : ";
    cin >> n;

    temp->info=n;
    temp->next=NULL;

    cout << "\nInsert As \n 1:First Node \n 2:Last Node \n 3:In between First & Last Nodes ";
    cout << "\nEnter your choice : ";
    cin >> ch;

    switch(ch)
    {
	case 1:
	    temp->next=first;
	    first=temp;
	    break;

	case 2:
	    last->next=temp;
	    last=temp;
	    break;

	case 3:
	    cout << "\nEnter the position to insert : ";
	    cin >> pos;

	    while(count!=pos)
	    {
		prev=cur;
		cur=cur->next;
		count++;
	    }
	    if(count!=pos)
	    {
		prev->next=temp;
		temp->next=cur;
	    }
	    else
	    {
		cout << "\nNot able to insert.";
	    }
	    break;

	default:
	    cout << "Invalid choice.";
	    break;
    }

}

void List::display()
{
    Node *temp=first;

    if(temp==NULL)
    {
	cout << "\n List is empty.";
    }
    while(temp!=NULL)
    {
	cout << temp->info;
	cout << "-->";
	temp=temp->next;
    }
    cout << "MULL";
}

void List::del()
{
    Node *prev=NULL,*cur=first;
    int count=1,pos,ch;

    cout << "\n Delete As \n 1: First Node \n 2:Last Node \n 3: In Between First & Last Nodes";
    cout << "\n Enter your choice : ";
    cin >> ch;

    switch(ch)
    {
	case 1:
	    if(first!=NULL)
	    {
		cout << "\n Deleted element is : " << first->info;
		first=first->next;
	    }
	    else
	    {
		cout << "\n Not able to delete.";
	    }
	    break;

	case 2:
	    while(cur!=last)
	    {
		prev=cur;
		cur=cur->next;
	    }
	    if(cur==last)
	    {
		cout << "\n Deleted element is : " << cur->info;
		prev->next=NULL;
		last=prev;
	    }
	    else
	    {
		cout << "\n Not able to delete.";
	    }
	    break;

	case 3:
	    cout << "\n Enter the position of deletion : ";
	    cin >> pos;

	    while(count!=pos)
	    {
		prev=cur;
		cur=cur->next;
		count++;
	    }
	    if(count==pos)
	    {
		cout << "\n Deleted element is : " << cur->info;
		prev->next=cur->next;
	    }
	    else
	    {
		cout << "\n Not able to delete.";
	    }
	    break;

	default:
	    cout << "\n Invalid choice.";
	    break;
    }
}

void List::search()
{
    int value,pos=0;
    if(first==NULL)
    {
	cout<<"List is Empty";
	return;
    }
    cout<<"Enter the Value to be Searched:";
    cin>>value;
    Node *temp;
    temp=first;
    while(temp!=NULL)
    {
	pos++;
	if(temp->info==value)
	{
	    cout<<"Element "<<value<<" is Found at "<<pos<<" Position";
	    return;
	}
	temp=temp->next;
    }
}

void List::update()
{
    int value,pos=0,n;
    if(first==NULL)
    {
	cout<<"List is Empty";
	return;
    }
    cout<<"Enter the position to be update:";
    cin>>pos;
    cout << "Enter new value : ";
    cin >> value;
    last=first;
    while(first->next!=NULL)
    {
	cout << first->info;
	pos++;
	if(first->info==value)
	{
	    first->info=n;
	    cout<<"Element "<<value<<" is Found at "<<pos<<" Position , replaced with " << n << endl;
	    return;
	}
	first=first->next;
    }
    cout << "can't not exist.";
}

int main()
{
    clrscr();
    List l;

    int ch;

    while(1)
    {
	clrscr();
	cout << "\n ***** MENU *****";
	cout << "\n 1:Create \n 2:Insert \n 3:Display \n 4:Delete \n 5:Search \n 6:Update \n 0:Exit \n";
	cout << "\n Enter your choice : ";
	cin >> ch;

	switch(ch)
	{
	    case 1:
		l.create();
		getch();
		break;

	    case 2:
		l.insert();
		getch();
		break;

	    case 3:
		l.display();
		getch();
		break;

	    case 4:
		l.del();
		getch();
		break;
	    case 5:
		l.search();
		getch();
		break;

	    case 6:
		l.update();
		getch();
		break;

	    case 0:
		return 0;
	    default:
		cout << "\n Invalid choice.";
		break;
	}
    }
    getch();
}
