#include<iostream>
using namespace std;
void Merge(int A[],int l,int mid,int h)
{
 int i=l,j=mid+1,k=0;
 int B[100];

 while(i<=mid && j<=h)
 {
 if(A[i]<A[j])
 B[k++]=A[i++];
 else
 B[k++]=A[j++];
 }
 for(;i<=mid;i++)
 B[k++]=A[i];
 for(;j<=h;j++)
 B[k++]=A[j];

k=0;
 for(i=l;i<=h;i++)
 A[i]=B[k++];
}
void MergeSort(int A[],int l,int h)
{
 int mid;
 if(l<h)
 {
 mid=(l+h)/2;
 MergeSort(A,l,mid);
 MergeSort(A,mid+1,h);
 Merge(A,l,mid,h);

 }
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[]={2,9,3,10,29,21};
	int n=sizeof(arr)/sizeof(arr[0]);
	MergeSort(arr,0,n-1);
	display(arr,n);
	return 0;
}