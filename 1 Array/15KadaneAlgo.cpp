#include<iostream>
using namespace std;
void KadaneAlgo(int arr[100],int n)
{
	int i;
	int currentsum=0;
	int maxsum=0;
	for(i=0;i<n;i++)
	{
		currentsum+=arr[i];
		if(currentsum<0)
		{
			currentsum=0;
		}
		maxsum=max(currentsum,maxsum);
	}

	cout<<"The max sum is "<<maxsum<<endl;
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
	KadaneAlgo(arr,n);
	return 0;
}



///Kadane Algorithm Doesn't gives you where the indices start and end