#include<iostream>
#include<climits>
using namespace std;
bool isPossible(int arr[100],int n,int m,int min)
{
	int studentUsed=1;
	int pagesReading=0;

	for(int i=0;i<n;i++)
	{
		if(pagesReading+arr[i]>min)
		{
			studentUsed++;
			pagesReading=arr[i];
			if(studentUsed>m)
			{
				return false;
			}
		}
		else{
			pagesReading=pagesReading+arr[i];
		}
	}
	return true;

}
int findPages(int arr[100],int n,int m)
{
	int sum=0;
	if(n<m)
	return -1;

    for(int i=0;i<n;i++)
    {
    	sum+=arr[i];
    }
    int low=0;
    int ans=INT_MAX;
    int high=sum;

    while(low<=high)
    {
    	int mid=(low+high)/2;

    	if(isPossible(arr,n,m,mid))
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
	int n;
	int m;
	cin>>n;
	cin>>m;
	int arr[100];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<findPages(arr,n,m);
	return 0;
}