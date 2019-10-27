#include<iostream>
using namespace std;

int cqueue[5];
int front,rear;

void insert_cqueue(int num)
{
    if(front==(rear+1)%5)
        cout<<"queue is full";
    else
    {
        if(front==-1)
            front=0;
        rear=(rear+1)%5;
        cqueue[rear]=num;
    }
}
void delete_cqueue()
{
    if(front==-1)
        cout<<"queue is empty";
    else
    {
        cout<<"deleted value="<<cqueue[front];
        front=(front+1)%5;
        
        if(front==(rear+1)%5)
            front=-1;
    }
}
void display()
{
    if(front==-1)
        cout<<"queue is empty";
    else
    {
        if(rear>front)
        {
            for(int i=front;i<=rear;i++)
                cout<<cqueue[i]<<" ";
        }
        else
        {
            for(int i=front;i<4;i++)
                cout<<cqueue[i]<<" ";
            for(int i=0;i<=rear;i++)
                cout<<cqueue[i]<<" ";
        }
    }
}
int main()
{
    int num,choice;
    while(true)
    {
        cout<<"\n********************* MENU *********************"<<endl;
        cout<<"1.insertion"<<endl;
        cout<<"2.deletion"<<endl;
        cout<<"3.display queue"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice :";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"enter number to insert :";
                cin>>num;
                insert_cqueue(num);
                break;
            case 2:
                delete_cqueue();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                cout<<"invalid input";
                break;
        }
    }
    return 0;
}