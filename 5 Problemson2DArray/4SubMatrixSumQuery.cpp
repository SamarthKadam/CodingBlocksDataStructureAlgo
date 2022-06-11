
#include<iostream>
using namespace std;
int n;
int sum=0;
void cumalative(int arr[10][10])
{
	
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			arr[i][j]=arr[i][j]+arr[i][j-1];
		}
	}

	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			arr[j][i]=arr[j][i]+arr[j-1][i];
		}
	}
}
int valid(int x)
{
	if(x>=0 && x<n)
	{
		return 1;
	}
	else{
		return 0;
	}
}
void FindQuery(int a,int b,int c,int d,int arr[10][10],int n)
{
int value=0;

     value=arr[c][d]; 
	if(valid(b-1))
	{
		value=value-arr[c][b-1];
	}
	if(valid(a-1))
	{
		value=value-arr[a-1][d];
	}
	if(valid(a-1)&&valid(b-1))
	{
		value=value+arr[a-1][b-1];
	}
	cout<<value<<endl;
}
int main()
{
	int value;
	cin>>n;
	int arr[10][10];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	cumalative(arr);

	int a,b,c,d;
	cin>>a>>b>>c>>d;

	FindQuery(a,b,c,d,arr,n);
	return 0;
}