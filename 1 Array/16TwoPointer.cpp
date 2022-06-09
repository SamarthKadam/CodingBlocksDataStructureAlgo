#include<iostream>
using namespace std;
void TwoPointer(int arr[100],int n,int sum)
{
	int i=0;
	int j=n-1;
	while(i<j)
	{
		if(arr[i]+arr[j]<sum)
		{
			i++;
		}
		else if(arr[i]+arr[j]>sum)
		{
			j--;
		}
		else if(arr[i]+arr[j]==sum)
		{
			cout<<"The pair is "<<arr[i]<<" and "<<arr[j]<<endl;
			i++;
			j--;
		}
	}
}
int main()
{
	int n;
	int sum;
	int arr[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the the sum for which you need its pairs\n";
	cin>>sum;
	TwoPointer(arr,n,sum);
	return 0;

}