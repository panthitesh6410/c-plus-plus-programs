// Static Queue :

#include<iostream>
using namespace std;
int front, rear, n = 5;

void enqueue(int queue[], int num)
{
    if(rear == n-1)
        cout<<"Queue is Full"<<endl;
    else
    {
        if(front == -1)
            front++;
        rear++;
        queue[rear] = num;
    }
}

void dequeue(int queue[])
{
    if(front == -1)
        cout<<"Queue is Empty"<<endl;
    else
    {
        front++;
        if(front > rear)
            front = -1;
    }
}

void display(int queue[])
{
    if(front == -1)
        cout<<"Queue is Empty"<<endl;
    else
    {
        for(int i=front;i<=rear;i++)
            cout<<queue[i]<<" ";
        cout<<endl;
    }
}

int main()
{
    front = rear = -1;
    int queue[n];
    int choice, num;
    while(true)
    {
        cout<<"MENU"<<endl;
        cout<<"1. Enqueue(Insertion)"<<endl;
        cout<<"2. Dequeue(Deletion)"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Choose an Option : "<<endl;
        cin>>choice;
        
        switch(choice)
        {
            case 1:
                cout<<"Enter a number : "<<endl;
                cin>>num;
                enqueue(queue, num);
                break;
            case 2: 
                dequeue(queue);
                break;
            case 3:
                display(queue);
                break;
            case 4:
                exit(0);
            default:
                cout<<"Invalid Input"<<endl;
                break;
        }
    }
    return 0;
}