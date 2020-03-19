// codeforces : Bit ++ -

#include<iostream>
using namespace std;
int main()
{
    int n, x=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string op;
        cin>>op;
        if(op == "x++")
            x++;
        else if(op == "++x")
            ++x;
        else if(op == "x--")
            x--;
        else if(op == "--x")
            --x;
    }
    cout<<x;
    return 0;
}