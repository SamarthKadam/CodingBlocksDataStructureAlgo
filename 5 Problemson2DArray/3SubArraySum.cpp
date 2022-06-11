#include<iostream>
using namespace std;
int sum=0;
void Calc(int arr[10][10],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum=sum+arr[i][j]*(i+1)*(j+1)*(n-i)*(n-j);
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
	Calc(arr,n);
	cout<<"The sum of all subarray is "<<sum;
	return 0;
}