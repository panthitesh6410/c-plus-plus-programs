// Dynamic Queue :

#include<iostream>
using namespace std;

struct queue
{
    int info;
    struct queue *next;
};
typedef struct queue node;
node *front, *rear;

void enqueue(int num)
{
    node *newnode;
    newnode = (node*)malloc(sizeof(node));
    newnode->next = NULL;
    newnode->info = num;
    if(front == NULL)
        front = rear = newnode;
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}

void dequeue()
{
    node *temp;
    if(front == NULL)
        cout<<"Empty Queue"<<endl;
    else
    {
        temp = front;
        front = front->next;
        free(temp);
    }
}

void display()
{
    if(front == NULL)
        cout<<"Empty Queue"<<endl;
    else
    {
        node *temp = front;
        while(temp != NULL)
        {
            cout<<temp->info<<" ";
            temp = temp->next;
        }
        cout<<endl;
    }
}

int main()
{
    front = rear = NULL;
    int num, choice;
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
                enqueue(num);
                break;
            case 2: 
                dequeue();
                break;
            case 3:
                display();
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