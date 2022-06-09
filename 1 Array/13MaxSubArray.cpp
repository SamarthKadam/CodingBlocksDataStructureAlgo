#include<iostream>
#include<climits>
using namespace std;
void GenrateSubarrayMax(int arr[100],int n)
{
	int i;
	int j;
	int k;
	int value=INT_MIN;
	int result;
	int start;
	int end;

	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			result=0;
			for(k=i;k<=j;k++)
			{
				result=result+arr[k];
			}
			if(result>value)
			{
				start=i;
				end=j;
				value=result;

			}
		}
	}
	cout<<"The max Subarray is "<<value<<endl;
	cout<<"Which is starting from "<<start<<" to "<<end<<endl;
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
	GenrateSubarrayMax(arr,n);
}

