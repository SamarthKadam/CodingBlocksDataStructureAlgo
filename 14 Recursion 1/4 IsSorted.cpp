#include<iostream>
using namespace std;
bool Isorted(int arr[],int n)
{
	if(n==0 || n==1)
	{
		return true;
	}
	else{
		if(arr[0]<=arr[1] && Isorted(arr+1,n-1))
		{
			return  true;
		}
		else{
			return false;
		}

	}
}
int main()
{
	int arr[]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
   cout<<Isorted(arr,n)<<endl;
	return 0;
}
