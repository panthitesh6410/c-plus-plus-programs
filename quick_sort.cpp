#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int partition(int a[],int l,int h)
{
    int pivot=a[l];
    int i=l;
    int j=h;
    while(i<j)
    {
        do
        {
            i++;
        } while (a[i]<=pivot);
        do
        {
            j++;
        } while (a[j]>=pivot);
        if(i<j)
        {
           swap(a[i],a[j]); 
        }
    }
    swap(a[l],a[j]);
    return j;
}
void quick_sort(int a[],int l,int h)
{
    if(l<h)
    {
        int j=partition(a,l,h);
        quick_sort(a,l,j);
        quick_sort(a,j+1,h);
    }
}
int main()
{
    int n;
    cout<<"enter number of elements : "<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>a[i];
    quick_sort(a,0,n-1);
    cout<<"sorted elements : "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}