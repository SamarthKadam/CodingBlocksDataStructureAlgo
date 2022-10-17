#include<iostream>
using namespace std;
float squareRoot(int n,int p)
{
	int low=0;
	int high=n;
	int mid;
	float ans;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(mid*mid==n)
		{
			return mid;
		}
		else if(mid*mid<n)
		{
			ans=mid;
			low=mid+1;
		}
		else{
			high=mid-1;

		}
	}

	float inc=0.1;
	for(int times=1;times<=p;times++)
	{
		while(ans*ans<=n)
		{
			ans=ans+inc;
		}
		ans=ans-inc;
		inc=inc/10;
	}
	return ans;

}
int main()
{
	int n;
	cin>>n;
   cout<<squareRoot(n,3)<<endl;
}