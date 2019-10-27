#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;

void display(stack<int> s)
{
    if(s.empty())       //check whether stack si empty or not.
        cout<<"stack si empty";
    else
    {
        cout<<"stack is :"<<endl;
        while(!s.empty())
        {
            cout<<s.top()<<endl;
            s.pop();
        }
    }
}
int main()
{
    stack<int> s;       //declaring stack
    for(int i=1;i<=3;i++)
        s.push(i*10);
    s.push(40);     //push elements into stack.
    s.push(50);

    display(s);

    int size=s.size();      //determines size 
    cout<<"size of stack : "<<size<<endl;

    int top_element=s.top();      //returns top value
    cout<<"top element is : "<<top_element<<endl;

    s.pop();
    s.pop();

    display(s);
    return 0;
}