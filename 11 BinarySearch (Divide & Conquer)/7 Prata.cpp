#include<iostream>
#include<climits>
using namespace std;
bool isPossible(int arr[100],int n,int orders,int min)
{
	int time=0;
	int paratha=0;

	for(int i=0;i<n;i++)
	{
		time=0;
		int j=1;
		while(time+arr[i]*j<=min)
		{
			paratha++;
			time+=arr[i]*j;
			j++;
		}
		if(paratha>=orders)
			return true;
	}
	return false;
}
int FindMin(int arr[100],int n,int orders)
{
	int low=0;
	int high=INT_MAX;
	int mid;
	int ans=INT_MAX;

	while(low<=high)
	{
		mid=(low+high)/2;
		if(isPossible(arr,n,orders,mid))
		{
			high=mid-1;
			ans=min(ans,mid);
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}
int main()
{
	int arr[100];
	int n;
	int orders;
	cin>>n;
	cin>>orders;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
  cout<<FindMin(arr,n,orders)<<endl;
	return 0;
}

