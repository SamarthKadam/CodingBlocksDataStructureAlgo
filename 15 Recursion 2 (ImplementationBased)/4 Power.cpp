#include<iostream>
using namespace std;
int power(int a,int n)
{
	if(n==1)
		return a;

	int x=power(a,n/2);
	int value=x*x;

	if(n%2==1)
	{
		return a*value;
	}
	return value;
}
int main()
{
	int a;
	int n;
	cin>>a>>n;
  cout<<power(a,n)<<endl;
	return 0;
}