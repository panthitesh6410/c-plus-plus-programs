//  Tower Of Hanoi 

#include<stack>
#include<iostream>
using namespace std;

void display(stack<int> s)
{
    if(s.empty())
    {
        cout<<"  -  "<<endl;
        cout<<" ---"<<endl;
        cout<<"-----"<<endl;
    }
    if(!s.empty())
    {
        while(!s.empty())
        {
            cout<<s.top()<<endl;
            s.pop();
        }
    }
}

int main()
{
    stack<int> tower1, tower2, tower3;
    int ring1;
    cout<<"Enter size of 1st ring (the largest one) : "<<endl;
    cin>>ring1;
    tower1.push(ring1);
    int ring2;
    cout<<"Enter size of 2nd ring (the medium one) :  "<<endl;
    cin>>ring2;
    tower1.push(ring2);
    int ring3;
    cout<<"Enter size of 3rd ring (the smallest one) : "<<endl;
    cin>>ring3;
    tower1.push(ring3);
    // Shows Initial Position :
    cout<<"****************************************Initial Problem : *************************************"<<endl;
    cout<<"Tower 1 :"<<endl;
    display(tower1);
    cout<<"Tower 2 :"<<endl;
    display(tower2);
    cout<<"Tower 3 :"<<endl;
    display(tower3);
    // Step-1 :
    cout<<"**************************************Step-1 : ****************************************"<<endl;
    int element = tower1.top();
    tower1.pop();
    tower3.push(element);
    element = tower1.top();
    tower2.push(element);
    tower1.pop();
    // Show Step-1 :
    cout<<"Tower 1 :"<<endl;
    display(tower1);
    cout<<"Tower 2 :"<<endl;
    display(tower2);
    cout<<"Tower 3 :"<<endl;
    display(tower3);
    // Step-2 :
    cout<<"******************************************* Step-2 : ****************************************"<<endl;
    element = tower3.top();
    tower3.pop();
    tower2.push(element);
    element = tower1.top();
    tower1.pop();
    tower3.push(element);
    // Show Step-2 :
    cout<<"Tower 1 :"<<endl;
    display(tower1);
    cout<<"Tower 2 :"<<endl;
    display(tower2);
    cout<<"Tower 3 :"<<endl;
    display(tower3);
    // Step-3 :
    cout<<"************************************** Step-3 : *******************************************"<<endl;
    element = tower2.top();
    tower2.pop();
    tower1.push(element);
    element = tower2.top();
    tower2.pop();
    tower3.push(element);
    // Show Step-3 :
    cout<<"Tower 1 :"<<endl;
    display(tower1);
    cout<<"Tower 2 :"<<endl;
    display(tower2);
    cout<<"Tower 3 :"<<endl;
    display(tower3);
    // Step-4 :
    cout<<"***************************************** Step-4 *****************************************"<<endl;
    element = tower1.top();
    tower1.pop();
    tower3.push(element);
    // Show Step-4 :
    cout<<"Tower 1 :"<<endl;
    display(tower1);
    cout<<"Tower 2 :"<<endl;
    display(tower2);
    cout<<"Tower 3 :"<<endl;
    display(tower3);

    return 0;
}