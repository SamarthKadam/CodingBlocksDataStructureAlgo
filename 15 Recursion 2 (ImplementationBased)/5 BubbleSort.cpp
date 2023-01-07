#include<iostream>
using namespace std;
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void BubbleSort(int arr[],int n)
{
	if(n==1)
	{
		return;
	}
	else{
		for(int j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
		BubbleSort(arr,n-1);
	}
}
void BubbleSortRec(int arr[],int j,int n)
{
	if(n==1)
		return;
	if(j==n-1)
	{
		 BubbleSortRec(arr,0,n-1);
	}
	else{
		if(arr[j]>arr[j+1])
		{
			swap(arr[j],arr[j+1]);
		}
		 BubbleSortRec(arr,j+1,n);
	}
}
int main()
{
	int arr[]={2,5,79,1,9,3,4,44};
	int n=sizeof(arr)/sizeof(arr[0]);
	// BubbleSort(arr,n);
	BubbleSortRec(arr,0,n);
    display(arr,n);

	return 0;
}
