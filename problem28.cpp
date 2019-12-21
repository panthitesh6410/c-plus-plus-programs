// program to accept string that contains consecutive 1's in it from domain (0,1).

#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    
    bool flag = false;

    for(int i=0;i<str.length()-1;i++)
    {
        if(str[i] == '1')
        {
            if(str[i] == str[i+1])
                flag = true;
        }
    }

    if(flag)
        cout<<"string is accepted";
    else
        cout<<"string is rejected";

    return 0;
}