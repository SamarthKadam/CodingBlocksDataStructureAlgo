#include<iostream>
using namespace std;
void swap(int *ptr1,int *ptr2)
{
	int temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;

}
void SelectionSort(int arr[100],int n)
{
	int i;
	int j;
	int index;
	for(i=0;i<n-1;i++)
	{
		index=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[index]>arr[j])
			{
				index=j;
			}
		}
		swap(arr[i],arr[index]);
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
	SelectionSort(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}