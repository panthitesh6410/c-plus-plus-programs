//uncle jonny problem(codechef):
#include <iostream>
using namespace std;
void selection_sort(int a[],int n)
{
    int minimum;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        minimum=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[minimum])
                minimum=j;
        }
        temp=a[i];
        a[i]=a[minimum];
        a[minimum]=temp;
    }
}
int main() 
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int N;
        cin>>N;
        int songs[N];
        for(int j=1;j<=N;j++)
                cin>>songs[j];
        int K,pos;
        cin>>K;
        selection_sort(songs,N);
        /*for(int j=1;j<=N;j++)
                cout<<songs[j]<<endl;
        */
        for(int j=1;j<=N;j++)
        {
            if(songs[j]==K)
                pos=j;
        }
        cout<<pos<<endl;
    }
	return 0;
}
