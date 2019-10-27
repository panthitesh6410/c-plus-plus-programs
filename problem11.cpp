//GeeksForGeegs practice problem :

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> v;
int main()
{
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        int Q;
        cin>>Q;
        for(int j=1;j<=Q;j++)
        {
            char choice;
            cin>>choice;
            if(choice=='a')
            {
                int num;
                cin>>num;
                v.push_back(num);
            }
            else if(choice=='b')
            {
                sort(v.begin(),v.end());
            }
            else if(choice=='c')
            {
                reverse(v.begin(),v.end());
            }
            else if(choice=='d')
            {
                cout<<v.size()<<" ";
            }
            else if(choice=='e')
            {
                for(int i=0;i<v.size();i++)
                    cout<<v[i]<<" ";
            }
            else if(choice=='f')
            {
                sort(v.begin(),v.end(),greater<int>());
            }
        }
    }
    return 0;
}