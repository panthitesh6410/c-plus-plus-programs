#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
void heapify(int a[],int n,int i)
{
    int root=i;
    int lc=2*i+1;
    int rc=2*i+2;
    if(lc<n && a[lc]>a[root])
        root=lc;
    if(rc<n && a[rc]>a[root])
        root=rc;
    if(root!=i)
    {
        swap(a[i],a[root]);
        heapify(a,n,root);
    }
}

void heap_sort(int a[],int n)
{
    for(int i=n/2-1;i>0;i--)
        heapify(a,n,i);
    for(int  i=n-1;i>0;i--)
    {
        swap(a[i],a[0]);
        heapify(a,i,0);
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
    heap_sort(a,n);
    cout<<"sorted elements : "<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    return 0;
}