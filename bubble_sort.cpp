#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j]=temp;
            }
        }
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
    bubble_sort(a,n);
    cout<<"sorted elements :"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}