// hackerrank problem : reduce string

#include<iostream>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int size = s.length();
    int half = s.length()/2;
    while(size >= half)
    {
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i] == s[i+1])
            {
                s.erase(i, i+1);
                break;
            }
        }
        size--;
    }
    if(s.empty())
        cout<<"Empty String";
    else
        cout<<s;
    return 0;
}