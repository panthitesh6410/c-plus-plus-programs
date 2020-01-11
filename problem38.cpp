#include<vector>
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector<int> binary;
    for(int i=0;i<n;i++)
    {
        binary.push_back(calc_binary(arr[i]));
        for(int j=0;j<binary.size()-1;j++)
        {
            if(binary[j] == 0 && binary[j+1] == 1)
                swap(binary[j], binary[j+1]);
        }
        // cout<<binary<<endl;
    }
    return 0;
}
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
int calc_binary(vector<int> &binary)
{
    int b[20];
    int i = 0;
    while(num > 0)
    {
        b[i] = (b[i] * 10) + (num % 2);
        num = num / 2;
        i++;
    }
}