#include<iostream>
using namespace std;
void Insertion(int arr[100],int n)
{
	int j;
	int elem;
	for(int i=1;i<n;i++)
	{
		j=i-1;
		elem=arr[i];
		while(j>=0 and arr[j]>elem)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=elem;

	}
}
int main()
{
	int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Insertion(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}