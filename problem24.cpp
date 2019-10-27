// codechef problem (easy) :


// ***************************************wrong answer********************************************

#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    int count[n]={0};
	    int result = 0;
	    for(int j=0;j<n;j++)
	        cin>>arr[j];
	    for(int j=0;j<n;j++)
	    {
	        for(int k=j%5;k<j;k++)
	        {
	            if(arr[j]<arr[k])
	                count[j]++;
	        }
	    }
	    for(int j=0;j<n;j++)
	    {
	        if(arr[j] == 5)
	            result++;
	    }
	    cout<<result<<endl;
	}
	return 0;
}

// ***************************************wrong answer********************************************