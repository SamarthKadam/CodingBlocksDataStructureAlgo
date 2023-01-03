#include<iostream>
using namespace std;
int clearRangeBits(int n,int i,int j)
{
	int a=-1<<(j+1);
	int b=1<<(i-1);
	int mask=a|b;
	return n&mask;

	///2powi-1 = 1<<i-1
}
int replacebits(int n,int i,int j,int m)
{
	int n1=clearRangeBits(n,i,j);
	int ans=n1|(m<<i);
	return ans;
}
int main()
{
	int n=15;
	int i=1;
	int j=3;
	int m=2;
   cout<<replacebits(n,i,j,m)<<endl;
	return 0;
}