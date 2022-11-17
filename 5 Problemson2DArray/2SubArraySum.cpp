#include<iostream>
using namespace std;
int n;
int sum;
void Cumul(int arr[10][10],int n)
{
for(int i=0;i<n;i++)
{
	for(int j=1;j<n;j++)
	{
		arr[i][j]+=arr[i][j-1];
	}

}
for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			arr[j][i]+=arr[j-1][i];
		}
	}	
}
int valid(int x)
{
	if(x>=0 && x<=n)
	{
		return 1;
	}
	else{
		return 0;
	}
}
void Print(int arr[10][10],int n)
{
	int value;
	for(int li=0;li<n;li++)
	{
		for(int lj=0;lj<n;lj++)
		{
			for(int ui=li;ui<n;ui++)
			{
				for(int uj=lj;uj<n;uj++)
				{
					value=arr[ui][uj];
					if(valid(li-1))
					{
						value=value-arr[ui-1][uj];
					}
					if(valid(lj-1))
					{
						value=value-arr[ui][uj-1];
					}
					if(valid(li-1)&& valid(lj-1))
					{
						value=value+arr[ui-1][uj-1];
					}
					// cout<<value<<endl;
					sum=max(value,sum);
				}
			}
		}
	}
}
int main()
{
	cin>>n;

	int arr[10][10];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}

	Cumul(arr,n);
	Print(arr,n);	
	cout<<sum<<endl;
}