// facebook interview problem - given a sorted array , print squared sorted array  

#include<vector>
#include<iostream>

using namespace std;

vector<int> v;
vector<int> output;


void sort_task(vector<int> v1)
{
    for(int i=0,j=v1.size()-1;i<v1.size(),j>=0;i++,j--)
    {
        int sq1 = v1[i]*v1[i];
        int sq2 = v1[j]*v1[j];
        if(sq1>=sq2)
            output[j] = sq1;
        else
            output[j] = sq2;
    }
    for(int i=0;i<output.size();i++)
        cout<<output[i];
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        int num;
        cin>>num;
        v.push_back(num);
    }
    sort_task(v);
    return 0;
}

