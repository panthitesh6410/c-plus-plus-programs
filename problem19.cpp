// HackerRank problem :
#include<iostream>
using namespace std;

int sum_matrix(int mat[3][3], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum = sum + mat[i][j]; 
        }
    }
    sum = sum - (mat[1][0] + mat[1][2]);
    return sum;
}

int main()
{
    int arr[6][6], sum = 0;
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
            cin>>arr[i][j];

    /*  printing matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
    int result;
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
             
        }
    }
    
    int sum = sum_matrix(arr, 3);
    printf("%d", sum);

    return 0;
}