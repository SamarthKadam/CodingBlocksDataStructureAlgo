#include<iostream>
using namespace std;
int n;
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
int main()
{
	int value;
	int sum=0;
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


	for(int li=0;li<n;li++)
	{
		for(int lj=0;lj<n;lj++)
		{
			for(int Bi=li;Bi<n;Bi++)
			{
				for(int Bj=lj;Bj<n;Bj++)
				{
					 value=0;
					value=arr[Bi][Bj];
				   if((valid(li-1)))
				   {
				   	value=value-arr[li-1][Bj];
				   }
				   if(valid(lj-1))
				   {
				   	value=value-arr[Bi][lj-1];
				   }
				   if(valid(li-1)&&valid(lj-1))
				   {
				   	value=value+arr[li-1][lj-1];
				   }
				   sum=sum+value;
				}
			}
		}
	}
	cout<<sum<<endl;
}