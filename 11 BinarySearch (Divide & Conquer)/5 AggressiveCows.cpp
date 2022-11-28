#include<iostream>
using namespace std;
bool canPlaceCow(int stalls[],int n,int c,int min_sep)
{
	int last_cow=stalls[0];
	int count=1;

	for(int i=1;i<n;i++)
	{
		if(stalls[i]-last_cow>=min_sep)
		{
			last_cow=stalls[i];
			count++;
			if(count==c)
			{
				return true;
			}
		}
	}
	return false;
}
int main()
{
	int stalls[]={1,2,4,8,9};
	int n=5;
	int ans;

	int cows=3;

	int s=0;
	int mid;
	int e=stalls[n-1]-stalls[0];

	while(s<=e)
	{
		mid=(s+e)/2;
		bool cowsRakhPaye=canPlaceCow(stalls,n,cows,mid);
		if(cowsRakhPaye)
		{
			ans=mid;
			s=mid+1;
		}
		else{
			e=mid-1;

		}
	}

	cout<<ans<<endl;
	return 0;
}