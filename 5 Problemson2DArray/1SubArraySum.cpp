#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int arr[10][10];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	
	// for(int i=0;i<n;i++)
	// {
	// 	for(int j=0;j<n;j++)
	// 	{
	// 		cout<<arr[i][j];
	// 	}
	// 	cout<<endl;
	// }

	for(int li=0;li<n;li++)
	{
		for(int lj=0;lj<n;lj++)
		{
			for(int Bi=0;Bi<n;Bi++)
			{
				for(int Bj=0;Bj<n;Bj++)
				{
					for(int i=li;i<=Bi;i++)
					{
						for(int j=lj;j<=Bj;j++)
						{
							sum=sum+arr[i][j];
						}
					}
				}
			}
		}
	}
	cout<<sum<<endl;
}