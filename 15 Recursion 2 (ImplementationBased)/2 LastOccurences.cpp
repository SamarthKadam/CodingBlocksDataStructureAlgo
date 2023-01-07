#include<iostream>
using namespace std;
// int LastOccurence(int arr[],int n,int key)
// {
// 	if(n==0)
// 		return -1;
// 	if(arr[n]==key)
// 	{
// 		return n;
// 	}
// 	else{
// 		return LastOccurence(arr,n-1,key);
// 	}
// } 
///use n-1 while calling from main for above function

int LastOccurence(int arr[],int n,int key)
{
	if(n==0)
		return -1;
	else{
		int x=LastOccurence(arr+1,n-1,key);
		if(x==-1)
		{
			if(arr[0]==key)
			{
				return 0;
			}
			else{
				return -1;
			}
		}
		return x+1;
	}
}
int main()
{
	int arr[]={1,2,3,5,3,6,7};
	int key=3;
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<LastOccurence(arr,n,key)<<endl;
	return 0;
}