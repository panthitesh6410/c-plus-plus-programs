#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool check_balance(string str, int len)
{
    stack<char> s;
    for(int i=0;i<len;i++)
    {
        if(str[i]=='(' || str[i]=='{' || str[i]=='[')
            s.push(str[i]);
        else if(str[i]=='}' || str[i]==')' || str[i]==']')
        {
            if(s.empty())
            {
                return false;
            }
            else
                s.pop();
        }
    }
    if(!s.empty())
        return false;
    return true;
}
int main()
{
    string str;
    cout<<"enter string : ";
    cin>>str;
    int len = str.length();
    bool result = check_balance(str, len);
    if(result)
        cout<<"string is balanced";
    else
        cout<<"string is not balanced";
    return 0;
}
