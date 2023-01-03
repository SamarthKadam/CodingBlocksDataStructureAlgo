#include<iostream>
using namespace std;
int countBits(int n)
{
	int count=0;
	while(n>0)
	{
		count=count+(n&1);
		n=n>>1;
	}
	return count;
}
int countBitsFast(int n)
{
	int count=0;
	while(n>0)
	{
		n=n&n-1;
		count++;
	}
	return count;
}
int main()
{
	int n=15;
   // cout<<countBits(n)<<endl;
   // cout<<countBitsFast(n)<<endl;
	cout<<__builtin_popcount(n)<<endl;
	return 0;
}