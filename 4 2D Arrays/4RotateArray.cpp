#include<iostream>
#include<algorithm>
using namespace std;
int arr[100][100];
int m,n;
void swaping(int *p,int* q)
{
	int temp=*p;
	*p=*q;
	*q=temp;
}
void displayRes()
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
void swapRow()
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n/2;j++)
		{
			swaping(&arr[i][j],&arr[i][n-1-j]);
		}
	}

}
void AgSwap()
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(i!=j)
			{
				swap(arr[i][j],arr[j][i]);
			}
		}
	}
}
void Rotate()
{
	// swapRow();
	for(int i=0;i<m;i++)
	{
	reverse(arr[i],arr[i]+n);
    }
	// displayRes();
	AgSwap();
	displayRes();
}
int main()
{
	cin>>m>>n;

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	Rotate();
}