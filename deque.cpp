#include<iostream>
#include<deque>
using namespace std;

void display(deque<int> d)
{
    deque<int> :: iterator i;

    if(d.empty())               //return true if deque is empty
        cout<<"deque is empty";
    else
        for(i=d.begin();i!=d.end();++i)
            cout<<*i<<" ";
}
int main()
{
    deque<int> d;       //declaring deque

    d.push_back(20);        //inserting element from back
    d.push_back(30);
    d.push_back(40);
    d.push_back(50);
    d.push_back(60);
    
    d.push_front(10);       //inserting element at front of queue
    d.push_front(5);    

    display(d); 

    d.pop_front();
    d.pop_back();       

    cout<<endl;
    display(d);

    int size=d.size();          //determines the size of deque
    cout<<endl<<"size = "<<size;

    return 0;
}