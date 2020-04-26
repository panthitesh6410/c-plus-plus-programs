// Various Sorting Techniques :

// Bubble Sort -
// void bubble_sort(int arr[], int n)
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

// Selection Sort -
// void selection_sort(int arr[], int n)
// {
//     for(int i=0;i<n-1;i++)
//     {
//         int min = i;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[j] < arr[min])
//                 min = j;
//             int temp = arr[i];
//             arr[i] = arr[min];
//             arr[min] = temp;
//         }
//     }
// }

// Insertion Sort - 
// void insertion_sort(int arr[], int n)
// {
//     for(int i=1;i<n;i++)
//     {
//         int key = arr[i];  // select 1st unsorted element
//         int j = i-1;
//         while(j >= 0 && arr[j] > key)
//         {
//     // this loop shift elements to right
//             arr[j+1] = arr[j];
//             j--;
//         }
//         arr[j+1] = key; // insert unsortted element to its corret position
//     }
// }



#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    insertion_sort(arr, n);
    cout<<"sorted array - "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}