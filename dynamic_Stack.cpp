#include<iostream>
using namespace std;
struct stack
{
    int info;
    struct stack*next;
};
typedef struct stack node;
node*top;
void push(int num)
{
    node*newnode;
    newnode=(node*)malloc(sizeof(node));
    newnode->info=num;
    newnode->next=top;
    top=newnode;
}
void pop()
{
    node*temp;
    if(top==NULL)
        cout<<"stack is empty";
    else
    {
        temp=top;
        cout<<"popped value="<<temp->info;
        top=top->next;
        free(temp);
    }
}
void display()
{
    node*temp;
    if(top==NULL)
        cout<<"stack is empty";
    else
    {
        temp=top;
        while(temp!=NULL)
        {
            cout<<temp->info<<endl;
            temp=temp->next;
        }
    }
}
int main()
{
    node*top=NULL;
    int num,choice;

    while(true)
    {
        cout<<"\n******************* MENU ***********************"<<endl;
        cout<<"1.Push"<<endl;
        cout<<"2.Pop"<<endl;
        cout<<"3.Display"<<endl;
        cout<<"4.Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"enter element to push : ";
                cin>>num;
                push(num);
                break;
            case 2:
                pop();
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
}