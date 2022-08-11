#include<iostream>
using namespace std;
int SearchSorted(int arr[],int n,int key)
{
	int low=0;
	int high=n-1;
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
		{
			cout<<"Element found at"<<mid<<" position"<<endl;
			return 0;
		}
		else if(arr[low]<=arr[mid])
		{
			if(key>=arr[low] and key<=arr[mid])
			{
				high=mid-1;
			}
			else{
				low=mid+1;
			}

		}
		else{
			if(key>=arr[mid] and key<=arr[high])
			{
				low=mid+1;
			}
			else{
				high=mid-1;
			}

		}

	}
}
int main()
{
	int arr[]={4,5,1,2,3};
	int n=sizeof(arr)/sizeof(arr[0]);
	int key=5;
	SearchSorted(arr,n,key);
	return 0;
}