#include<iostream>
using namespace  std;

struct queue
{
    int info;
    struct queue*next;
};
typedef struct queue node;
node*front,*rear;

void insert_queue(int num)
{
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->info=num;
    newnode->next=NULL;

    if(rear==NULL)
        front=rear=newnode;
    else
    {
        rear->next=newnode;
        rear=newnode;
    }
}
void delete_queue()
{
    node*temp;
    if(front==NULL)
        cout<<"queue is empty";
    else
    {
        temp=front;
        cout<<"deleted element="<<temp->info;
        front=front->next;
        free(temp);
    }
}
void display_queue()
{
    node*temp;
    if(rear==NULL)
        cout<<"queue is empty";
    else
    {
       temp=front;
       while(temp!=NULL)
       {
           cout<<temp->info<<" ";
           temp=temp->next;
       }
    }
}
int main()
{
    int num,choice;
    node*front=NULL,*rear=NULL;
    
    while(true)
    {
        cout<<"\n*********************** MENU ***********************"<<endl;
        cout<<"1.insertion"<<endl;
        cout<<"2.deletion"<<endl;
        cout<<"3.display queue"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice :";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"enter element to insert :";
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