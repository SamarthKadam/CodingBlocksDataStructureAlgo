#include<iostream>
using namespace std;
int f(int n,int k)
{
	if(n==0)
	{
		return 1;
	}
	if(n<0)
	{
		return 0;
	}

    int ans=0;
	for(int i=1;i<=k;i++)
	{
		ans+=f(n-i,k);
	}
	return ans;
}
int main()
{
	int n;
	int k;
	cin>>n;
	cin>>k;
   cout<<f(n,k)<<endl;
	return 0;
}