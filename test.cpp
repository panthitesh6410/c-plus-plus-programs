#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int n;
    cin>>n;
    string ori = s;
    for(int i=1;i<n;i++)
        s = s + ori;
    int count = 0;
    for(int i=0;i<n;i++)
    {
      if(s[i] == 'a')
        count++;  
    }
    cout<<count;
    return 0;
}
