// codeforces :way too long words -

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        if(s.size() > 10)
        {
            int size = s.size();
            cout<<s[0]<<size-2<<s[size-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}