// Circular Queue : (static)

#include<iostream>
using namespace std;
int front, rear;

void enqueue(int cqueue[], int num)
{
    if(front == (rear+1)%5)
        cout<<"Queue is Full"<<endl;
    else
    {
        if(front == -1)
            front = 0;
        rear = (rear+1)%5;
        cqueue[rear] = num;
    }
    
}

void dequeue(int cqueue[])
{
    if(front == -1) 
        cout<<"Queue is Empty"<<endl;
    else
    {
        front = (front+1)%5;
        if(front == (rear + 1)%5)
            front = -1;
    }
}

void display(int cqueue[])
{
    if(front == -1)
        cout<<"Queue is Empty"<<endl;
    else
    {
        if(rear > front)
        {
            for(int i=front;i<=rear;i++)
                cout<<cqueue[i]<<" ";
            cout<<endl;
        }
        else{
            for(int i=front;i<5;i++)
                cout<<cqueue[i]<<" ";
            for(int i=0;i<=rear;i++)
                cout<<cqueue[i]<<" ";
            cout<<endl;
        }
    }
}

int main()
{
    front = rear = -1;
    int num, choice;
    int cqueue[5];
    while(true)
    {
        cout<<"MENU"<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequque"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Choose an Option"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter a number : "<<endl;
                cin>>num;
                enqueue(cqueue, num);
                break;
            case 2:
                dequeue(cqueue);
                break;
            case 3:
                display(cqueue);
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