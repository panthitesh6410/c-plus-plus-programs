/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++)
    {
        int a,b,c;
        scanf("%d %d %d\n",&a,&b,&c);
        int count=0;
        if(a==1)
        {
            if(b==1 || c==1)
                count++;
        }
        else if(b==1)
        {
            if(a==1 || c==1)
                count++;
        }
        else if(c==1)
        {
            if(a==1 || b==1)
                count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
*/

/*
#include<iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d\n",&n);
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0,result=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arr[i][j]==1)
                count++;
            if(count>=2)
                result++;
        }
    }
    cout<<result<<endl;
}
*/
#include<iostream>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int result=0;
    for(int i=1;i<=n;i++)
    {
        int count=0;
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        if(a==1)
        {
            if(b==1 || c==1)
                count++;
        }
        if(b==1)
        {
            if(a==1 || c==1)
                count++;
        }
        if(c==1)
        {
            if(a==1 || b==1)
                count++;
        }
        if(count>=2)
            result++;
    }
    cout<<result;
    return 0;
}