#include<iostream>
using namespace std;
void Spiral(int arr[10][10],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<n;j++)
			{
				cout<<arr[i][j]<<endl;
			}
		}
		else{
			for(int j=n-1;j>=0;j--)
			{
				cout<<arr[i][j]<<endl;
			}
		}
	}
}
int main()
{
	int m,n;
	int arr[10][10];
	cin>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	Spiral(arr,m,n);
	return 0;
}