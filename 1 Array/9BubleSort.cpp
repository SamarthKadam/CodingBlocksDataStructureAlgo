#include<iostream>
using namespace std;
void swap(int *ptr1,int *ptr2)
{
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;

}
void BubbleSort(int arr[100],int n)
{
	int j;
	for(int i=0;i<n-i-1;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			swap(arr[j],arr[j+1]);	
			}
		}
	}
}
int main()
{
	int n;
	int arr[100];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	BubbleSort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}