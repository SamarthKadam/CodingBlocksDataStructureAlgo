#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int arr[10][10];
	int max_Sum=INT_MIN;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	

	// for(int li=0;li<n;li++)
	// {
	// 	for(int lj=0;lj<n;lj++)
	// 	{
	// 		for(int Bi=0;Bi<n;Bi++)
	// 		{
	// 			for(int Bj=0;Bj<n;Bj++)
	// 			{
	// 				sum=0;
	// 				for(int i=li;i<=Bi;i++)
	// 				{
	// 					for(int j=lj;j<=Bj;j++)
	// 					{
	// 						sum=sum+arr[i][j];
	// 					}
	// 				}
	// 				// cout<<sum<<endl;
	// 				max_Sum=max(sum,max_Sum);
	// 			}
	// 		}
	// 	}
	// }
	for(int li=0;li<n;li++)
	{
		for(int lj=0;lj<n;lj++)
		{
			for(int Bi=li;Bi<n;Bi++)
			{
				for(int Bj=lj;Bj<n;Bj++)
				{
					sum=0;
					for(int i=li;i<=Bi;i++)
					{
						for(int j=lj;j<=Bj;j++)
						{
							sum=sum+arr[i][j];
						}
					}
					cout<<sum<<endl;
					max_Sum=max(sum,max_Sum);
				}
			}
		}
	}
	cout<<"The max sum is"<<max_Sum<<endl;
}