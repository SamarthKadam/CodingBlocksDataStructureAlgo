#include<iostream>
#include<algorithm>
using namespace std;
void convert(int arr[],int n)
{
	for(int i=0;i<n;i+=2)
	{
		if(i!=0 and arr[i]<arr[i-1])
		{
			swap(arr[i],arr[i-1]);
		}

		if(i!=n-1 and arr[i]<arr[i+1])
		{
			swap(arr[i],arr[i+1]);
		}
	}
}
int main()
{
  int a[]={1,3,4,2,7,4};
  int n=sizeof(a)/sizeof(a[0]);
  convert(a,n);

  for(int i=0;i<n;i++)
  {
  	cout<<a[i]<<" ";
  }

	return 0;
}