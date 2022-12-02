#include<iostream>
#include<algorithm>
using namespace std;
bool isPossible(int arr[100],int n,int k,int min)
{
	int cursum=0;
	int painter=1;
	for(int i=0;i<n;i++)
	{
		cursum+=arr[i];
		if(cursum>min)
		{
			painter++;
			cursum=arr[i];
			if(painter>k)
				return false;

		}
	}
	return true;
}
int minTime(int arr[100],int n,int k)
{
	int low=0;
	int sum=0;

	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int high=sum;
	int mid;
	int ans=0;

	while(low<=high)
	{
		mid=(low+high)/2;
		if(isPossible(arr,n,k,mid))
		{
			ans=mid;
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
	int n;
	int k;
	int arr[100];
	cin>>n;
	cin>>k;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

  cout<<minTime(arr,n,k)<<endl;
	return 0;
}