#include<iostream>
using namespace std;

int main()
{ 
    int a,b;
    std::cout<<"enter two numbers : "<<endl;
    std::cin>>a>>b;
    int c;
    c=(a>b) ? a:b;
    while(1)
    {
        if(c%a==0 && c%b==0)
        {
            std::cout<<"LCM of "<<a<<" & "<<b<<" is "<<c;
            break;
        }
        c++;
    }
    return 0;
}