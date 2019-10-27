#include<iostream>
using namespace std;

struct stack
{
    int info;
    struct stack*next;
};
typedef struct stack node;

node*topA,*topB;

void pushA(int num)
{
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->info=num;
    newnode->next=topA;
    topA=newnode;
}
int popA()
{
    node*temp;
    int num;
    if(topA==NULL)
        cout<<"stack is empty";
    else
    {
        temp=topA;
        num=temp->info;
        //cout<<"popped value="<<temp->info;
        topA=topA->next;
        free(temp);
    }
    return num;
}
void pushB(int num)
{
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->info=num;
    newnode->next=topB;
    topB=newnode;
}
int popB()
{
    node*temp;
    int num;
    if(topB==NULL)
        cout<<"stack is empty";
    else
    {
        temp=topB;
        num=temp->info;
        //cout<<"popped value="<<temp->info;
        topB=topB->next;
        free(temp);
    }
    return num;
}
int main()
{
    int g;
    cin>>g;
    for(int i=1;i<=g;i++)
    {
        int n,m,x,num,count,sum=0,popped_value;
        cin>>n>>m>>x;
        int stackA[n],stackB[m],topA,topB;
        for(int j=0;j<n;j++)
        {
            cin>>num;
            pushA(num);
        }
        for(int j=0;j<m;j++)
        {
            cin>>num;
            pushB(num);
        }
        int U=x;
        while(sum<=U)
        {
            if(stackA[topA]>stackB[topB])
            {
                popped_value=popA();
                sum=sum+popped_value;
                U=U-popped_value;
                count++;
            }
            else
            {
                popped_value=popB();
                sum=sum+popped_value;
                U=U-popped_value;
                count++;    
            }  
        }
        cout<<count<<endl;
    }
    return 0;
}