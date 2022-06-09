#include<iostream>
using namespace std;
int prime(int n,int arr[1000])
{
	int i=0;
	int j;
	arr[0]=0;
	arr[1]=0;
	for(i=2;i<=n;i++)
	{
		arr[i]=1;
	}
	for(i=2;i*i<=n;i++)
	{
		if(arr[i]==1)
		{
			for(j=2*i;j<=n;j=j+i)
			{
				arr[j]=0;
			}
		}
	}

}
int main()
{
	int n;
	cin>>n;
	int arr[1000];
	prime(n,arr);
	cout<<"The prime number from 0 to"<<n<<"are"<<endl;
	for(int i=0;i<=n;i++)
	{
		if(arr[i]==1)
		{
			cout<<i<<endl;
		}
	}
	return 0;
}