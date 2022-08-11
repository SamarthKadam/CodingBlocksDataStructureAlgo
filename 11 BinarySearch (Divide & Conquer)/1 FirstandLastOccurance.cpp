#include<iostream>
using namespace std;
int SearchFirst(int arr[],int n,int key)
{
	int low=0;
	int high=n-1;
	int mid;
	int ans=-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
		{
			ans=mid;
			high=mid-1;
		}
		else if(arr[mid]>key)
		{
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}
int SearchLast(int arr[],int n,int key)
{
	int low=0;
	int high=n-1;
	int mid;
	int ans=-1;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
		{
			ans=mid;
			low=mid+1;
		}
		else if(arr[mid]>key)
		{
			high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}
int main()
{
	int arr[]={1,2,5,8,8,8,8,8,10,12,15,20};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=9;
	cout<<SearchFirst(arr,n,key)<<endl;
	cout<<SearchLast(arr,n,key)<<endl;
	return 0;
}