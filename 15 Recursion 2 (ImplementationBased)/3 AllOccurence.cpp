#include<iostream>
using namespace std;
int sub[100];
// int AllOccurence(int arr[],int n,int i,int key)
// {
// 	if(i==n)
// 	{
// 		return 0;
// 	}
// 	else{
// 		AllOccurence(arr,n,i+1,key);
// 		if(arr[i]==key)
// 		{
// 			cout<<i<<" ";
// 		}
// 	}
// }
//Above problem is calculatetd using tail recurion.
int AllOccurence(int arr[],int n,int i,int j,int key)
{
	if(i==n)
		return j;
	if(arr[i]==key)
	{
		sub[j]=i;
	  return  AllOccurence(arr,n,i+1,j+1,key);
	}
	else{
	return AllOccurence(arr,n,i+1,j,key);
	}
}
int main()
{
	int arr[]={1,2,3,5,3,6,7};
	int key=3;
	int n=sizeof(arr)/sizeof(arr[0]);
    int count=AllOccurence(arr,n-1,0,0,key);

    for(int i=0;i<count;i++)
    {
    	cout<<sub[i]<<" ";
    }

	return 0;
}