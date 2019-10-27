//TCS codevita problem :

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    int N,k;
    cin>>N>>k;
    vector<int> v;
    for(int i=1;i<=N;i++)
    {
        if(N % i == 0)
        {
            v.push_back(i);
        }
    }
    if(k>v.size())
        cout<<"1";
    else
        cout<<v[k];
    return 0;
}