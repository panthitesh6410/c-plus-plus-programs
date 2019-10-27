#include<iostream>
using namespace std;
int queue[50],front,rear;

void insert_queue(int num)
{
    if(rear==49)
        cout<<"queue is full";
    else
    {
        if(front==-1)
            front++;
        rear++;
        queue[rear]=num;
    }
}
void delete_queue()
{
    if(front==-1)
        cout<<"queue is empty";
    else
    {
        cout<<"deleted value:"<<queue[front];
        front++;
    }
}
void display_queue()
{
    if(front==-1)
        cout<<"queue is empty";
    else
    {
        for(int i=front;i<=rear;i++)
            cout<<queue[i]<<" ";
    }
}
int main()
{
    int num,choice;
    while(true)
    {
        cout<<"\n*************************** MENU ***********************"<<endl;
        cout<<"1.insertion"<<endl;
        cout<<"2.deletion"<<endl;
        cout<<"3.display queue"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice:"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"enter number:";
                cin>>num;
                insert_queue(num);
                break;
            case 2:
                delete_queue();
                break;
            case 3:
                display_queue();
                break;
            case 4:
                exit(0);
            default:
                cout<<"invalid input";
        }
    }
    return 0;
}