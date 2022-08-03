#include<iostream>
#include<algorithm>
using namespace std;
int nextPermutation(int arr[100],int n)
{
	int p=0;
	int q=0;
	for(int i=n-2;i>=0;i--)
	{
		if(arr[i]<arr[i+1])
		{
			p=i;
			break;
		}
	}

	for(int i=n-1;i>p;i--)
	{
		if(arr[i]>arr[p])
		{
			q=i;
			break;
		}
	}

	if(p==0 && q==0)
	{
		reverse(arr,arr+n);
		return 0;
	}
	int temp=arr[p];
	arr[p]=arr[q];
	arr[q]=temp;

	if(p<n-1)
	{
		reverse(arr+p+1,arr+n);
	}

}
void display(int arr[100],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
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
	nextPermutation(arr,n);
	display(arr,n);
	return 0;
	
}