#include<iostream>
using namespace std;
void GenrateSubarray(int arr[100],int n)
{
	int i;
	int j;
	int k;

	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			for(k=i;k<=j;k++)
			{
				cout<<arr[k];
			}
			cout<<endl;
		}
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	GenrateSubarray(arr,n);
}


// Above program is used to generate the subarray of the given array