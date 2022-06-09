#include<iostream>
using namespace std;
int n;
int checkPrime(int x)
{
	if(x<=1)
	{
		return 0;
	}
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			return 0;
		}
	}
	if(i==x)
	{
		return 1;
	}
}
int main()
{
	cin>>n;
	int i;
	for(i=0;i<=n;i++)
	{
	if(checkPrime(i))
	{
		cout<<i<<endl;
	}
    }
	return 0;
}