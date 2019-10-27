#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void display(vector<int> v)
{
    if(v.empty())
        cout<<"Vector is Empty";
    else
    {
        cout<<"elements are :"<<endl;
        for(int i=0;i<v.size();i++)
            cout<<v[i]<<endl;
    }    
}
int main()
{
    vector<int> v1;     //declaring vector
    
    v1.push_back(30);   //storing numbers in vector
    v1.push_back(20);
    v1.push_back(80);
    v1.push_back(10);
    v1.push_back(70);
    v1.push_back(60);

    display(v1);       //display vector elements
    
    v1.pop_back();      //pop elements out of vector from back-side
    v1.pop_back();

    display(v1);

    v1.erase(v1.begin());    //removing first element from vector     
    
    display(v1);

    int f=v1.front();       //gives first element of vector
    int l=v1.back();        //gives last element of vector
    cout<<"first element: "<<f<<"\t"<<"last element: "<<l<<endl;

    int size=v1.size();     //gives the number of elements stored  in vector.
    cout<<"size of vector: "<<size<<endl;

    bool tell=v1.empty();       //tells whether vector is empty or not
    if(tell)    cout<<"Vector is empty"<<endl;
    else    cout<<"Vector is not empty"<<endl;

    v1.push_back(40);

    sort(v1.begin(),v1.end());      //sort vector elements in ascending order
    cout<<"After sorting:"<<endl;
    display(v1);

    sort(v1.begin(),v1.end(),greater<int>());        //sort vector in descending order
    cout<<"After sorting :"<<endl;
    display(v1);

    reverse(v1.begin(),v1.end());       //reverse the vector
    cout<<"after reversing :"<<endl;
    display(v1);

    v1.clear()  ;        //to make vector empty

    display(v1);

    return 0;
}