#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n, x;
        cin>>n>>x;
        int arr[n];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        int sum = 0;
        for(int j=0;j<n;j++)
            sum = sum + arr[j];
        int res = sum / x;
        int diff = sum - (x * res);
        int count = 0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<diff)
                count++;
        }
        if(count > 0)
        {
            res = -1;
            cout<<res<<endl;
        }
        else
            cout<<res<<endl;
    }
	return 0;
}
