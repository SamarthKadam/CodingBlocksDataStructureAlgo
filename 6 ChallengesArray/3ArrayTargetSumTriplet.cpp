#include<iostream>
#include<algorithm>
using namespace std;
void FindTriplet(int arr[100],int n,int key)
{
	int start;
	int end;
	for(int i=0;i<n-2;i++)
	{
		int start=i+1;
		end=n-1;
		while(start<end)
		{
			if(arr[start]+arr[end]+arr[i]==key)
			{
				cout<<arr[start]<<" + "<<arr[end]<<" + "<<arr[i]<<endl;
				start++;
				end--;
			}
			else if(arr[start]+arr[end]+arr[i]<key)
			{
				start++;
			}
			else{
				end--;
			}
		}

	}
}
int main()
{
	int n;
	int arr[100];
	cin>>n;
	int key;
	cin>>key;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	FindTriplet(arr,n,key);
	return 0;

}