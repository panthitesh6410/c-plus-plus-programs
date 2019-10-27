#include<iostream>
#include<stack>
using namespace std;

void reverse_string(string str, int len)
{
    stack<char> s;
    for(int i=0;i<len;i++)
        s.push(str[i]);
    for(int i=0;i<len;i++)
    {
        str[i] = s.top();
        s.pop();
    }
    cout<<"reversed string is : "<<str;
}

int main()
{
    string str;
    cout<<"enter a string : ";
    cin>>str;
    int len = str.length();
    reverse_string(str, len);
    return 0;
}