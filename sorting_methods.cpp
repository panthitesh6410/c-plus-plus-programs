// Sorting Techniques :

// void bubble_sort(int *arr, int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         for(int j=0;j<n-i-1;j++)
//         {
//             if(arr[j] > arr[j+1])
//             {
//                 int temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }         
//         }
//     }
// }

// void selection_sort(int *a, int n)
// {
//     int minimum;
//     for(int i=0;i<n-1;i++)
//     {
//         minimum=i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(a[j]<a[minimum])
//                 minimum=j;
//         }
//         int temp=a[i];
//         a[i]=a[minimum];
//         a[minimum]=temp;
//     }
// }

void insertion_sort(int *arr, int n)
{
    int key;
    for(int i=1;i<n;i++)
    {
        key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
    }
}

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"unsorted array - "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    insertion_sort(arr, n);
    cout<<"\nsorted array - "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}