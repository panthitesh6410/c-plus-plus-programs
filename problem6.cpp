//codevita problem :
#include<iostream>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for(int j=1;j<=T;j++)
    {
        int N;
        cin>>N;
        int i,sum=0,count=0;
        i=1;
        while(sum<N)
        {
            sum=sum+i;
            i++;
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}