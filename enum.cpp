// enum is used to assign names to integral constants


#include<iostream>
using namespace std;

enum values{
    amit, bam, chandu, danu, x=10, y=20, z=33, val
};

int main()
{
    enum values var1, var2, var3, var4, var5, var6, var7, var8;
    var1 = amit;         // by default - 0
    var2 = bam;          // by default - 1
    var3 = chandu;       // by default - 2
    var4 = danu;         // by default - 3
    cout<<var1<<endl;
    cout<<var2<<endl;
    cout<<var3<<endl;
    cout<<var4<<endl;
    // or we can also directly call these values without -
    // directly declaring enum variable
    cout<<x<<endl;        
    cout<<y<<endl;
    cout<<z<<endl;
    cout<<val<<endl;      // by-default value at previous var + 1

    return 0;
}