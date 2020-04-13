// Double-Ended Queue :

#include<iostream>
using namespace std;
int front, rear;

void insertion_begining(int dqueue[], int num)
{
    if(front == -1)
    {
        front++;
        rear++;
        dqueue[rear] = num;
    }
    else if(front != 0){
        front--;
        dqueue[front] = num;
    }
    else{
        cout<<"Queue is Full"<<endl;
    }
}
    

void insertion_end(int dqueue[], int num)
{   
    if(front == 4)
        cout<<"Queu is Full"<<endl;
    else{
        if(front == -1)
        {    front++;
            rear++;
        }
        else{
            rear++;
        }
        dqueue[rear] = num;
    }
}

void deletion_begining(int dqueue[])
{
    if(front == -1) 
        cout<<"Empty Queue"<<endl;
    else{
        if(front == rear)
            front = rear = -1;
        else
            front++;
    }
}

void deletion_end(int dqueue[])
{
    if(front == -1)
        cout<<"Empty Queue"<<endl;
    else{
        if(front == rear)
            front = rear = -1;
        else
            rear--;
    }
}

void display(int dqueue[])
{
    if(front == -1)
        cout<<"Empty Queue"<<endl;
    else
    {
        for(int i=front;i<=rear;i++)
            cout<<dqueue[i]<<" ";
        cout<<endl;
    }
    
}

int main()
{
    int num,choice;
    int dqueue[5];
    front = rear = -1;
    while(true)
    {
        cout<<"MENU"<<endl;
        cout<<"1. Insertion from Begining"<<endl;
        cout<<"2. Insertion from End"<<endl;
        cout<<"3. Deletion from Begining"<<endl;
        cout<<"4. Deletion from End"<<endl;
        cout<<"5. Display"<<endl;
        cout<<"6. EXIT"<<endl;
        cout<<"Choose an Option :"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"Enter a number : "<<endl;
                cin>>num;
                insertion_begining(dqueue, num);
                break;
            case 2:
                cout<<"Enter a number : "<<endl;
                cin>>num;
                insertion_end(dqueue, num);
                break;
            case 3:
                deletion_begining(dqueue);
                break;
            case 4:
                deletion_end(dqueue);
                break;
            case 5:
                display(dqueue);
                break;
            case 6:
                exit(0);
            default:
                cout<<"Invalid Input"<<endl;
                break;
        }
    }
    return 0;
}