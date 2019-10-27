/* PROBLEM STATEMENT : 
There are 3 stacks ,pop elements from them until all three stacks come upto same elements. 
*/
#include<iostream>
using namespace std;
struct stack
{
    int info;
    struct stack*next;
};
typedef struct stack node;
node*top1,*top2,*top3;
void push1(int num)
{
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->info=num;
    newnode->next=top1;
    top1=newnode;
}
void pop1()
{
    node*temp;
    if(top1==NULL)
        cout<<"stack is empty";
    else
    {
        temp=top1;
        //cout<<"popped value="<<temp->info;
        top1=top1->next;
        free(temp);
    }
}
void display1()
{
    node*temp;
    if(top1==NULL)
        cout<<"stack is empty";
    else
    {
        temp=top1;
        while(temp!=NULL)
        {
            cout<<temp->info<<endl;
            temp=temp->next;
        }
    }
}
void push2(int num)
{
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->info=num;
    newnode->next=top2;
    top2=newnode;
}
void pop2()
{
    node*temp;
    if(top2==NULL)
        cout<<"stack is empty";
    else
    {
        temp=top2;
        //cout<<"popped value="<<temp->info;
        top2=top2->next;
        free(temp);
    }
}
void display2()
{
    node*temp;
    if(top2==NULL)
        cout<<"stack is empty";
    else
    {
        temp=top2;
        while(temp!=NULL)
        {
            cout<<temp->info<<endl;
            temp=temp->next;
        }
    }
}
void push3(int num)
{
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->info=num;
    newnode->next=top3;
    top3=newnode;
}
void pop3()
{
    node*temp;
    if(top3==NULL)
        cout<<"stack is empty";
    else
    {
        temp=top3;
        //cout<<"popped value="<<temp->info;
        top3=top3->next;
        free(temp);
    }
}
void display3()
{
    node*temp;
    if(top3==NULL)
        cout<<"stack is empty";
    else
    {
        temp=top3;
        while(temp!=NULL)
        {
            cout<<temp->info<<endl;
            temp=temp->next;
        }
    }
}
int size1()
{
    int count=0;
    node*temp;
    for(temp=top1;temp!=NULL;temp=temp->next)
        count=count+temp->info;
    return count;
}
int size2()
{
    int count=0;
    node*temp;
    for(temp=top2;temp!=NULL;temp=temp->next)
        count=count+temp->info;
    return count;
}
int size3()
{
    int count=0;
    node*temp;
    for(temp=top3;temp!=NULL;temp=temp->next)
        count=count+temp->info;
    return count;
}

int main()
{
    node*top1=NULL,*top2=NULL,*top3=NULL;
    int num,count1=0,count2=0,count3=0,result=0;
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    
    for(int i=0;i<n1;i++) 
    {
        cin>>num;
        push1(num);
    }
    for(int i=0;i<n2;i++) 
    {
        cin>>num;
        push2(num);
    }
    for(int i=0;i<n3;i++) 
    {
        cin>>num;
        push3(num);
    }
    count1=size1();
    count2=size2();
    count3=size3();
    while(count1 != count2 && count1 != count3)
    {
       /* pop1();
        pop2();
        pop3();
        count1=size1();
        count2=size2();
        count3=size3(); */
        if(count1>count2 && count1>count3)
            pop1();
        else if(count2>count1 && count2>count3)
            pop2();
        else if(count3>count1 && count3>count2)
            pop3();
        count1=size1();
        count2=size2();
        count3=size3();        
    
    }
    result=count1;
    cout<<result;
}