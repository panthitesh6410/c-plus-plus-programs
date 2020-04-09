// Stack Application - String Reversal :

#include<iostream>
using namespace std;
int top;
char stack[30];

void push(char c)
{
    if(top == 49)
        cout<<"Stack is Full"<<endl;
    top++;
    stack[top] = c;
}

char pop()
{
    if(top == -1)
        cout<<"Stack is Empty";
    char ch = stack[top];
    top--;
    return ch;
}

void StringReversal(string str)
{
    for(int i=0;i<str.length();i++)
        push(str[i]);
    for(int i=0;i<str.length();i++)
        str[i] = pop(); 
}

int main()
{
    top = -1;
    string str;
    cin>>str;
    cout<<"Original String : "<<str<<endl;
    StringReversal(str);
    cout<<"Reversed String : "<<str<<endl;
    return 0;
}