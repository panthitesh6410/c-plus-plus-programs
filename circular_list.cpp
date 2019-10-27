#include<iostream>
using namespace std;

struct circular_list
{
    struct circular_list*next;
    int info;
};
typedef struct circular_list node;
node* insert_end(node*start,int num)
{
    node*newnode,*temp;
    newnode=(node*)malloc(sizeof(node));
    newnode->next=NULL;
    newnode->info;
    if(start==NULL)
    {
        start=newnode;
        newnode->next=start;
    }
    else
    {
        temp=start;
        while(temp->next!=start)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=start;
    }
    return start;
}
void display(node*start)
{
    node*temp;
    if(start==NULL)
        cout<<"empty list";
    else
    {
        temp=start;
        do
        {
            cout<<temp->info<<"->";
            temp=temp->next;
        }while(temp->next!=start);        
    }
}
int main()
{
    node*start;
    int num,pos,choice;
    while(true)
    {
        cout<<"\n******************* MENU *****************"<<endl;
        cout<<"1.insert node @ end"<<endl;
        cout<<"5.dispaly list"<<endl;
        cout<<"6.exit"<<endl;
        cout<<"enter your choice : "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"enter element to insert :";
                cin>>num;
                start=insert_end(start,num);
                break;
            case 5:
                display(start);
                break;
            case 6:
                exit(0);
            default:
                cout<<"invalid input"<<endl;
                break;
        }
    }

    return 0;
}