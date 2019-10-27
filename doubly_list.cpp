#include<iostream>
using namespace std;
struct doubly_list
{
    struct doubly_list*left;
    int info;
    struct doubly_list*right;
};
typedef struct doubly_list node;
node*start,*last;
void insert_beg(int num)
{
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->left=NULL;
    newnode->info=num;
    newnode->right=NULL;
    if(start==NULL)
        start=last=newnode;
    else
    {
        newnode->right=start;
        start->left=newnode;
        start=newnode;
    }
}
void insert_end(int num)
{
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->info=num;
    if(start==NULL)
        start=last=newnode;
    else
    {
        last->right=newnode;
        newnode->left=last;
        last=newnode;
    }
}
void insert_pos(int num,int pos)
{
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->left=NULL;
    newnode->info=num;
    newnode->right=NULL;
    if(start==NULL)
        start=last=newnode;
    else
    {
        node*temp=start;
        node*prev=NULL;
        int i=1;
        while(i<=pos-1)
        {
            prev=temp;
            temp=temp->right;
            i++;
        }
        newnode->right=prev->right;
        newnode->left=prev;
        prev->right=newnode;
        temp->left=newnode;
    }
}
void delete_beg()
{
    node*temp;
    if(start==NULL)
        cout<<"empty list";
    else
    {
        temp=start;
        start->right->left=NULL;
        start=start->right;
        free(temp);   
    }
}
void delete_end()
{
    node*temp;
    if(start==NULL)
        cout<<"empty list";
    else
    {
        temp=last;
        temp->left->right=NULL;
        last=temp->left;
        free(temp);
    }
}
void delete_pos(int pos)
{
    node*temp,*prev;
    if(start==NULL)
        cout<<"empty list";
    else
    {
        prev=NULL;
        int i=1;
        temp=start;
        while(i<=pos-1)
        {
            prev=temp;
            temp=temp->right;
            i++;
        }
        prev->right=temp->right;
        temp->right->left=prev;
        free(temp);
    }   
}
void display_front()
{
    node*temp;
    if(start==NULL)
        cout<<"empty list";
    else
    {
        temp=start;
        while(temp!=NULL)
        {
            cout<<temp->info<<"<->";
            temp=temp->right;
        }
    }
}
void display_back()
{
    node*temp;
    if(start==NULL)
        cout<<"empty list";
    else
    {
        temp=last;
        while(temp!=NULL)
        {
            cout<<temp->info<<"<->";
            temp=temp->left;
        }
    }
}
int main()
{
    int num,choice,pos;
    while(1)
    {
        cout<<"\n***************** MENU ********************"<<endl;
        cout<<"1.insert at beginning"<<endl;
        cout<<"2.insert at end"<<endl;
        cout<<"3.insert at given position"<<endl;
        cout<<"4.delete from beginning"<<endl;
        cout<<"5.delete from end"<<endl;
        cout<<"6.delete from given position"<<endl;
        cout<<"7.search an element"<<endl;
        cout<<"8.sort the list"<<endl;
        cout<<"9.forward display"<<endl;
        cout<<"10.backward display"<<endl;
        cout<<"11.exit"<<endl;
        cout<<"enter your choice : "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"enter number to insert : ";
                cin>>num;
                insert_beg(num);
                break;
            case 2:
                cout<<"enter number to insert : ";
                cin>>num;
                insert_end(num);
                break;
            case 3:
                cout<<"enter number to insert : "<<endl;
                cin>>num;
                cout<<"enter position : ";
                cin>>pos;
                insert_pos(num,pos);
                break;
            case 4:
                delete_beg();
                break;
            case 5:
                delete_end();
                break;
            case 6:
                cout<<"enter position : ";
                cin>>pos;
                delete_pos(pos);
                break;
            case 9:
                display_front();
                break;
            case 10:
                display_back();
                break;
            case 11:
                exit(0);
            default:
                cout<<"invalid input";
                break;
        }   
    }
    return 0;
}