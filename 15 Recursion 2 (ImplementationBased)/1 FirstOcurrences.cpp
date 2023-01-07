#include<iostream>
using namespace std;
// int FirstOccurences(int arr[],int n,int key)
// {
// 	if(n==0)
// 		return -1;
// 	if(arr[0]==key)
// 		return 0;
// 	else{
// 		int i=FirstOccurences(arr+1,n-1,key);
// 		if(i==-1)
// 			return -1;
// 		else
// 			return i+1;
// 	}
// }
int FirstOccurences(int arr[],int n,int i,int key)
{
	if(i==n)
		return -1;
	if(arr[i]==key)
		return i;
	else{
		return FirstOccurences(arr,n,i+1,key);
	}
}
int main()
{
	int arr[]={1,2,3,5,6,7};
	int key=7;
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<FirstOccurences(arr,n,0,key)<<endl;
	return 0;
}