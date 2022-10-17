#include<iostream>
using namespace std;
int FindMax(int arr[],int n)
{
	int low=0;
	int high=n-1;
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]>arr[mid+1])
		{
			cout<<mid<<endl;
			return 0;
		}
		else if(arr[low]<=arr[mid])
		{
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}
}
int main()
{
	int arr[]={100,101,222,444,999};
	int n=sizeof(arr)/sizeof(arr[0]);
	 FindMax(arr,n);
	return 0;
}