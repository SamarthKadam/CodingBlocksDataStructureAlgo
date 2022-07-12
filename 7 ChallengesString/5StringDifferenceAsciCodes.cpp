#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int k=0;
	char arr[100];
	int res[100];
	cin>>arr;
	for(int i=0;i<n-1;i++)
	{
		res[k++]=int(arr[i+1]-arr[i]);
	}
	cout<<arr[0];
	for(int i=0;i<k;i++)
	{
		cout<<res[i];
		cout<<arr[i+1];
	}
	return 0;
}