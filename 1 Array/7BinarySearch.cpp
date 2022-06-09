#include<iostream>
using namespace std;
int BinarySearch(int arr[100],int n,int key)
{
	int low=0;
	int high=n-1;
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
		{
			cout<<"Element Found at "<<mid<<" position"<<endl;
			return 0;
		}
		if(arr[mid]<key)
		{
			low=mid+1;
		}
		else{
			high=mid-1;
		}
	}

}
int main()
{
	int arr[100];
	int n;
	int key;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key"<<endl;
	cin>>key;
	BinarySearch(arr,n,key);
}