//This program created by Mr. D.
//Queue Using dynamic array

#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

class Queue
{
    public:
        int capacity;
        int front;
        int rear;
        int *arr;
};

class Que:public Queue
{
    private:
        Queue *Q;

    public:
        Queue *CreateQueue(int cap);
        int isEmptyQueue(Queue *Q);
        int isFullQueue(Queue *Q);
        int QueueCapacity(Queue *Q);
        void DoubleQueue(Queue *Q);
        void HalfQueue(Queue *Q);
        void enQueue(Queue *Q,int value);
        void deQueue(Queue *Q);
        Queue *DeleteQueue(Queue *Q);
};

Queue *Que::CreateQueue(int cap)
{
    Queue *temp;
    temp = new Queue;
    temp->capacity = cap;
    temp->front = -1;
    temp->rear = -1;
    temp->arr = (int*)malloc(sizeof(int)*temp->capacity);   //can't use type casting using new keyword one type of bug in c++
    return (temp);
}

int Que::isEmptyQueue(Queue *Q)
{
    if(Q->front == -1)
        return (1);
    else
        return 0;
}

int Que::isFullQueue(Queue *Q)
{
    if((Q->front == 0)  && (Q->rear = Q->capacity-1))
        return (1);
    else if(Q->front == Q->rear+1)
        return (1);
    else
        return (0);
}

int Que::QueueCapacity(Queue *Q)
{
    return (Q->capacity);
}

void Que::DoubleQueue(Queue *Q)
{
    int i,j;
    int *temp;
    Q->capacity = Q->capacity*2;
    temp = (int*)malloc(sizeof(int)*Q->capacity);
    for(i == Q->front,j = 0;i != Q->rear;j++)
    {
        temp[j] = Q->arr[i];
        if((i == Q->capacity/2) && (Q->rear != i))
            i = 0;
        else
            i++;
    }
    free(Q->arr);
    Q->arr = temp;
    Q->front = 0;
    Q->rear = Q->capacity/2-1;
}

void Que::HalfQueue(Queue *Q)
{
    int i,j,l;
    int *temp;
    temp = (int*)malloc(sizeof(int)*(Q->capacity/2));
    l = Q->capacity/2;
    for(i = 0,j = Q->front;i < l;i++)
    {
        temp[i] = Q->arr[j];
        if(j == Q->capacity-1)
            j == 0;
        else
            j++;
    }
    free(Q->arr);
    Q->arr = temp;
    Q->capacity = 1;
    Q->front = 0;
    Q->rear = Q->capacity-1;
}

void Que::enQueue(Queue *Q,int value)
{
    if(Q->capacity < 1)
        cout << "Invalid capacity" << endl;
    else
    {
         if(isEmptyQueue(Q))
        {
            Q->arr[0] = value;
            Q->front = 0;
            Q->rear = 0;
        }
        else if(isFullQueue(Q))
        {
            DoubleQueue(Q);
            Q->rear = Q->rear+1;
            Q->arr[Q->rear] = value;
        }
        else
        {
            if(Q->rear == Q->capacity-1)
                Q->rear = 0;
            else
            {
                Q->rear = Q->rear+1;
            }
            Q->arr[Q->rear] = value;
        }
    }
}

void Que::deQueue(Queue *Q)
{
    int i,size = 0;
    if(isEmptyQueue(Q))
        cout << "Queue is empty." << endl;
    else if(Q->front == Q->rear)
        Q->front = Q->rear = -1;
    else if(Q->front == Q->capacity-1)
        Q->front = 0;
    else
        Q->front = Q->front +1;

    if(Q->front > -1)
    {
        for(i = Q->front ; i != Q->rear; )
        {
            size++;
            if(i == Q->capacity-1)
                i = 0;
            else
                i++;
        }
        size++;

        if(size == Q->capacity/2)
        HalfQueue(Q);
    }
}

Queue *Que::DeleteQueue(Queue *Q)
{
    free(Q->arr);
    free(Q);
    return (NULL);
}

int menu()
{
    int ch;
    system("cls");
    cout << "Program created By Mr. D" << endl;
    cout << "***** Menu *****" << endl;
    cout << "1: See the status of Queue" << endl;
    cout << "2: Insert data in Queue" << endl;
    cout << "3: Remove data from Queue" << endl;
    cout << "0: Exit" << endl;
    cout << "Enter the choice : " ;
    cin >> ch;
    return (ch);
 }

int main()
{
    Queue *Q;
    Que D;
    Q = D.CreateQueue(4);
    while(1)
    {
        switch(menu())
        {
            case 1:
                cout << "\n Capacity : " << D.QueueCapacity(Q);
                cout << "\n Front : " << Q->front << " And " << "Rear : " << Q->rear << endl;
                getch();
                break;

            case 2:
                int value;
                cout << "Enter the number : ";
                cin >> value;
                D.enQueue(Q,value);
                getch();
                break;

            case 3:
                D.deQueue(Q);
                getch();
                break;

            case 0:
                D.DeleteQueue(Q);
                system("cls");
                cout << "Thank you.Press any key....";
                getch();
                return 0;

            default :
                cout << "Invalid choice.";
                getch();
                break;
        }
    }
    getch();
    return 0;
}
