#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string str;
    cout<<"enter a string : "<<endl;
    cin>>str;
    int size=str.size();
    int mid=size/2;
    string str1,str2;
    if(size%2==0)
    {
        str1=str.substr(0,mid);
        str2=str.substr(mid,size);
    }
    else
    {
        str1=str.substr(0,mid);
        str2=str.substr(mid+1,size);
    }
    
    char*p;
    char*s1;
    s1=str1;
    char*s2=
    p=strstr(str1,str2);
    if(p)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    
    return 0;
}