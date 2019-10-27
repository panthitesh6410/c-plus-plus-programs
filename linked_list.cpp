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
node*insert_beg(node*start,int num)
{
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->info=num;
    newnode->next=NULL;
    if(start==NULL)
        start=newnode;
    else
    {
        newnode->next=start;
        start=newnode;
    }
    return start;
}
node*insert_pos(node*start,int num,int pos)
{
    node*newnode,*temp;
    newnode=(node*)malloc(sizeof(node));
    newnode->info=num;
    newnode->next=NULL;
    if(start==NULL)
        start=newnode;
    else
    {
        int i=1;
        temp=start;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    return start;
}
node*delete_end(node*start)
{
    node*temp,*prev;
    if(start==NULL)
        cout<<"empty list";
    else
    {
        prev=NULL;
        temp=start;
        while(temp->next!=NULL)
        {
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
        free(temp);
    }
    return start;
}
node*delete_beg(node*start)
{
    node*temp;
    if(start==NULL)
        cout<<"empty list";
    else
    {
        temp=start;
        start=start->next;
        free(temp);
    }
    return start;
}
node*delete_pos(node*start,int pos)
{
    node*temp,*prev;
    int i;
    if(start==NULL)
        cout<<"empty list";
    else
    {
        i=1;
        prev=NULL;
        temp=start;
        while(i<pos)
        {
            prev=temp;
            temp=temp->next;
            i++;
        }       
        prev->next=temp->next;
        free(temp); 
    }
    return start;
}
int search_list(node*start,int num)
{
    node*temp;
    if(start==NULL)
        cout<<"empty list"<<endl;
    else
    {
        temp=start;
        while(temp!=NULL)
        {
            if(temp->info==num) 
                return 1;
            temp=temp->next;
        }
    }
     return 0;
}
void sort_list(node*start)
{
    node*temp1,*temp2;
    int temp;
    for(temp1=start;temp1!=NULL;temp1=temp1->next)
    {
        for(temp2=temp1->next;temp2!=NULL;temp2=temp2->next)
        {
            if(temp1->info > temp2->info)
            {
                temp=temp1->info;
                temp1->info=temp2->info;
                temp2->info=temp;
            }
        }
    }
}
node*reverse_list(node*start)
{
    node*temp,*prev,*nextnode;
    prev=NULL;
    temp=start;
    while(temp!=NULL)
    {
        nextnode=temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextnode;
    }
    start=prev;
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
        cout<<"2.insert at beginning"<<endl;
        cout<<"3.insert at given position"<<endl;
        cout<<"4.delete from end"<<endl;
        cout<<"5.delete from beginning"<<endl;
        cout<<"6.delete from given position"<<endl;
        cout<<"7.search for an element"<<endl;
        cout<<"8.sort the list"<<endl;
        cout<<"9.reverse the list"<<endl;
        cout<<"10.display"<<endl;
        cout<<"11.exit"<<endl;
        cout<<"enter your choice : ";
        int choice,result;
        cin>>choice;
        switch(choice)
        {
            case 1:
                cout<<"enter element to insert : ";
                cin>>num;
                start=insert_end(start,num);
                break;
            case 2:
                cout<<"enter element to insert : ";
                cin>>num;
                start=insert_beg(start,num);
                break;
            case 3:
                cout<<"enter element to insert : "<<endl;
                cin>>num;
                cout<<"enter position : "<<endl;
                cin>>pos;
                start=insert_pos(start,num,pos);
                break;
            case 4:
                start=delete_end(start);
                break;
            case 5:
                start=delete_beg(start);
                break;
            case 6:
                cout<<"enter position : "<<endl;
                cin>>pos;
                delete_pos(start,pos);
                break;
            case 7:
                cout<<"enter element to search : ";
                cin>>num;
                result=search_list(start,num);
                if(result==1)
                    cout<<num<<" found";
                else
                    cout<<num<<" not found";
                break;
            case 8:
                sort_list(start);
                break;
            case 9:
                reverse_list(start);
                break;
            case 10:
                display(start);
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