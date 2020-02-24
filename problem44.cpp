// Problem - Utopian Tree :
// The Utopian Tree goes through 2 cycles of growth every year. Each spring, it doubles in height. Each summer, its height increases by 1 meter.
// Laura plants a Utopian Tree sapling with a height of 1 meter at the onset of spring. How tall will her tree be after
// growth cycles?
// For example, if the number of growth cycles is n = 5,the calculations are as follows:
// Period  Height
// 0          1
// 1          2
// 2          3
// 3          6
// 4          7
// 5          14
// Input - t(testcases) , next t lines have n(cycles)
// Output - Height after n cycles for each n.

#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int height=1, j=1;
        while(j<=n)
        {
            if(j%2 != 0)
            {
                height=height*2;
                j++;
            }
            else{
                height++;
                j++;
            }
        }
        cout<<height<<endl;
    }
    return 0;
}
