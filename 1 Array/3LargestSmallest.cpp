#include<iostream>
#include<climits>
using namespace std;
int main()
{
	int n;
	int largest=INT_MIN;
	int smallest=INT_MAX;
	int arr[100];
	cout<<"Enter the size of the array"<<endl;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	for(int i=0;i<n;i++)
	{
		largest=max(largest,arr[i]);
		smallest=min(smallest,arr[i]);
	}

	cout<<"The largest number is "<<largest<<endl;
	cout<<"The smallest number is "<<smallest<<endl;
	return 0;

}