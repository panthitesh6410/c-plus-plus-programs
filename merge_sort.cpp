#include<iostream>
using namespace std;
void merge(int arr[], int l, int mid, int r)
{
    int n1=mid-l+1; // elements in left arr
    int n2=r-mid; // elements in right arr
    int left[n1], right[n2];
    // copying data to left and right sub arrays
    for(int i=0;i<n1;i++)
        left[i] = arr[i];
    for(int i=0;i<n2;i++)
        right[i] = arr[mid+1+i];
    // merging
    int i=0, j=0;
    int k=0;
    while(i<n1 && j<n2)
    {
        if(left[i] <= right[j])
        {
            arr[k] = left[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = right[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}
void merge_sort(int arr[], int l, int r)
{
    if(l<r)   // more than 1 element
    {
        int mid = (l+r)/2;
        merge_sort(arr, l, mid);
        merge_sort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    merge_sort(arr, 0, n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
    return 0;
}
