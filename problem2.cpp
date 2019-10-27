#include<iostream>
using namespace std;

void sum(int d,int n)
{
	int result,temp;
	temp=n;
	while(d>0)
	{
		result=(temp*(temp+1))/2;
		temp=result;
		d--;
	}
	cout<<temp<<endl;
}
int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		int d,n;
		cin>>n>>d;
		sum(d,n);
		
	}
	return 0;
}