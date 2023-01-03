#include<iostream>
using namespace std;
int prime(int n,int arr[1000])
{
	int i=0;
	int j;
	for(i=3;i<=n;i+=2)
	{
		arr[i]=1;
	}
	for(i=3;i<=n;i+=2)
	{
		if(arr[i]==1)
		{
			for(j=i*i;j<=n;j=j+i)
			{
				arr[j]=0;
			}
		}
	}
	arr[0]=0;
	arr[1]=0;
	arr[2]=1;

}
int main()
{
	int n;
	cin>>n;
	int arr[1000]={0};
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