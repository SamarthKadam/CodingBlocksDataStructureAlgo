#include<iostream>
#include<climits>
using namespace std;
int KadaneCircu(int arr[100],int n)
{
	int maxSofar=INT_MIN;
	int maxEndingHere=0;
	int totalSum=0;

	for(int i=0;i<n;i++)
	{
		maxEndingHere+=arr[i];
		if(maxSofar<maxEndingHere)
		{
			maxSofar=maxEndingHere;
		}
		if(maxEndingHere<0)
		{
			maxEndingHere=0;
		}
		totalSum=totalSum+arr[i];
	}

	return -(totalSum-maxSofar);

}
int main()
{
	int n;
	int arr[100];
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		arr[i]=-arr[i];
	}
	cout<<KadaneCircu(arr,n)<<endl;
}