//TCS codevita problem :

#include<iostream>
using namespace std;

int main()
{
    int S, R;
    scanf("%d%d", &S, &R);
    int samples[S];
    for(int i=0;i<S;i++)
        scanf("%d", &samples[i]);
    int min, max;
    for (int i = 0; i < R; i++)
    {
        int count=0;
        scanf("%d%d", &min, &max);
        for(int j=0;j<S;j++)
        {
            if(samples[j]<=max && samples[j]>=min)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
