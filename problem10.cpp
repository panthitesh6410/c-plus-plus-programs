//codeforces contest problem :
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int n,x;
        scanf("%d%d",&n,&x);
        vector<int> v(n);
        for(int j=1;j<=n;j++)
            v[j]=j;
        int temp=0;
        while(temp!=x)
        {
            v.erase(v.begin());
            temp++;
        }        
        cout<<v[x]<<endl;
    }
    return 0;
}