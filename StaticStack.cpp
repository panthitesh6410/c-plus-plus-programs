#include<iostream>
using namespace std;
int top;

void push(int stack[],int num)
{
    if(top==49)
        cout<<"stack is full";
    else
    {
        top++;
        stack[top]=num;
    }
}
void pop(int stack[])
{
    if(top==-1)
        cout<<"stack is empty";
    else
    {
        cout<<"popped value:"<<stack[top];
        top--;
    }
}
void display(int stack[])
{
    if(top==-1)
        cout<<"stack is empty";
    else
    {
        cout<<"elements are:"<<endl;
        for(int i=top;i>0;i--)
            cout<<stack[i]<<endl;
    }
}
int main()
{
    int stack[50];
    int num,choice;
    int top=-1;
    while(true)
    {
        cout<<"\n*************** MENU *******************"<<endl;
        cout<<"1.push"<<endl;
        cout<<"2.pop"<<endl;
        cout<<"3.display"<<endl;
        cout<<"4.exit"<<endl;
        cout<<"enter your choice : "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"enter number to push : ";
                cin>>num;
                push(stack,num);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                display(stack);
                break;
            case 4:
                exit(0);
            default:
                cout<<"invalid inupt";
        }
    }
    return 0;
}