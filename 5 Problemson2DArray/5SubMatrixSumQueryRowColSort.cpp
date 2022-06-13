#include<iostream>
using namespace std;
int x,y;
int sum=0;
void Suffix(int arr[10][10],int n)
{
	for(int i=n-1;i>=0;i--)
	{
		for(int j=n-2;j>=0;j--)
		{
			arr[j][i]=arr[j][i]+arr[j+1][i];
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=n-2;j>=0;j--)
		{
			arr[i][j]=arr[i][j]+arr[i][j+1];
		}
	}
}
void display(int arr[10][10],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<endl;
		}
	}
}
void Highest(int arr[10][10],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(arr[i][j]>sum)
			{
				sum=arr[i][j];
				x=i;
				y=j;
			}
		}
	}
}
int main()
{
	int n;
	int arr[10][10];
	cin>>n;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	Suffix(arr,n);
	Highest(arr,n);
	cout<<"The sum is "<<sum<<endl;
	cout<<"The highest Subarary is from "<<x<<" "<<y<<" To "<<n-1<<" "<<n-1<<endl;
}