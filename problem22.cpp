#include<iostream>
using namespace std;

bool isprime(int num)
{
    int count=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i == 0)
            count++;
    }
    if(count == 2)
        return true;
    else
        return false;
}
int SumOfDigits(int num)
{
    int sum=0,d;
    while(num!=0)
    {
        d=num%10;
        sum=sum+d;
        num=num/10;
    }
    return sum;
}
int main()
{
    int A, B, K;
    cin>>A>>B>>K;
    int count = 0,sum;
    for(int i=A;i<=B;i++)
    {
        sum = SumOfDigits(i);
        if(isprime(sum) && i%K==0)
            count++;
    }
    cout<<count;
    return 0;
}/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
