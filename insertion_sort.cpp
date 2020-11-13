#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=a[i];
        int j=i;
        
        while(j>0 && temp<a[j-1])
        {
            a[j]=a[j-1];
            j--;
        }
        a[j]=temp;
    }
}
int main()
{
    int n;
    cout<<"enter number of elements : "<<endl;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
        cin>>a[i];
    insertion_sort(a,n);
    cout<<"sorted elements : "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}