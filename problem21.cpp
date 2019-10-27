#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int multiple[13]={40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100};
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=38)
        {
            for(int j=0;j<13;j++)
            {
                if(arr[i]<=multiple[j] && (multiple[j]-arr[i]<3))
                {
                    arr[i] = multiple[j];
                    break;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;

    return 0;
}