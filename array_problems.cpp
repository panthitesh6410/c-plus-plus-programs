/* Problem - 1 : Remove duplicate number from an array */
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arr[n];
    cout<<"\nenter array elements : "<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
                // duplicate number found!
        }
    }
    
    return 0;
}

/* Problem - 2 : REverse an array */
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"\nenter array elements :"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int temp;
    for(int i=0;i<n/2;i++)
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    cout<<"reversed array is :"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;

    return 0;
}

/* Problem - 3 : Sort an array using Quick-Sort */

#include<iostream>
using namespace std;
int parition()
{

}
void quick_sort(int arr[], int n)
{

}
int main()
{
    int n;
    cout<<"enter size of array:";
    cin>>n;
    int arr[n];
    cout<<"enter array elements :"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    quick_sort(arr,n);
    cout<<"sorted array is :"<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    return 0;
}

/* Problem - 4 : Find 2nd largest number in an unsorted array */
/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"\nenter elements of array :"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    int max2 = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max2 && arr[i]<max)
            max2 = arr[i];
    }
    cout<<"\n2nd largest element is : "<<max2;
    return 0;
}
*/