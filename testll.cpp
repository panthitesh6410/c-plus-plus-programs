#include<iostream>
using namespace std;
struct single_list
{
    int info;
    struct single_list*next;
};
typedef struct single_list node;
node*insert_end(node*start,int num)
{
    node*newnode,*temp;
    newnode=(node*)malloc(sizeof(node));
    newnode->info=num;
    newnode->next=NULL;
    if(start==NULL)
        start=newnode;
    else
    {
        temp=start;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=newnode;
    }
    return start;
}
void middle_list(node*start)
{
    node*temp;
    int count=0;
    int i,mid;
    if(start==NULL)
        cout<<"empty list";
    else
    {
        node*p;
        {
            temp=start;
            while(temp!=NULL)
            {
                count++;
                temp=temp->next;
            }
            cout<<"count="<<count<<endl;
            mid=(count/2)+1;
            p=start;
            i=0;
            while(i<=mid)
            {
                p=p->next;
            }  
            cout<<"data at mid = "<<p->info;
        }
    }
}
void display(node*start)
{
    node*temp;
    if(start==NULL)
        cout<<"empty list";
    else
    {
        temp=start;
        while(temp!=NULL)
        {
            cout<<temp->info<<"->";
            temp=temp->next;
        }
    }
}
int main()
{
    int num,pos;
    node *start=NULL;
    while(1)
    {
        cout<<"\n************* MENU : *************"<<endl;
        cout<<"1.insert at end"<<endl;
        cout<<"2.find middle"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice : ";
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"enter element to insert : ";
                cin>>num;
                start=insert_end(start,num);
                break;
            case 2:
                middle_list(start);
                break;
            case 3:
                display(start);
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