#include<iostream>
using namespace std;
int InversionCount=0;
void Merge(int arr[],int low,int mid,int high)
{
	int temp[1000];
	int k=0;
	int i=low;
	int j=mid+1;

	while(i<=mid && j<=high)
	{
		if(arr[i]<=arr[j])
		{
			temp[k++]=arr[i++];
		}
		else{
			InversionCount+=mid-i+1;
			temp[k++]=arr[j++];
		}
	}

	while(i<=mid)
	{
		temp[k++]=arr[i++];
	}
	while(j<=high)
	{
		temp[k++]=arr[j++];
	}

    k=0;
	for(int i=low;i<=high;i++)
	{
		arr[i]=temp[k++];
	}

}
void MergeSort(int arr[],int low,int high)
{
	if(low>=high)
		return;
	int mid=(low+high)/2;
	MergeSort(arr,low,mid);
	MergeSort(arr,mid+1,high);
	Merge(arr,low,mid,high);
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
int main()
{
	int arr[]={11,5,7,9,2,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	MergeSort(arr,0,n-1);
	display(arr,n);
	cout<<"InversionCount is"<<InversionCount<<endl;
	return 0;
}