// HackerRank - Between Two Sets :

#include<iostream>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int a[n], b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    int count = 0;
    // for(int i=a[n-1];i<b[0];i++)
    // {
    //     if(n > m){
    //         for(int j=0;j<n;j++)
    //         {
    //             if(i % a[j] == 0 && b[j] % i == 0)
    //                 count++;
    //         }
    //     }
    //     else{
    //         for(int j=0;j<m;j++)
    //         {
    //             if(i % a[j] == 0 && b[j] % i == 0)
    //                 count++;
    //         }
    //     }
    // }

    cout<<count;
    return 0;
}

/*
    example :
        n = m = 2
        a = [2, 6], b = [42, 36]
        count = 2 (i.e. 6 and 12)
*/