#include<iostream>
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
    int n;
    cout<<"enter number of elements : "<<endl;
    cin>>n;
    int a[100];
    cout<<"enter elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    selection_sort(a,n);
    cout<<"sorted elements : "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}