#include<iostream>
#include<algorithm>
using namespace std;
int key;
void findPair(int arr[100],int n)
{
	int low=0;
	int high=n-1;
	while(low<high)
	{
		if(arr[low]+arr[high]==key)
		{
			cout<<arr[low]<<" + "<<arr[high]<<endl;
			low++;
			high--;
		}
		else if(arr[low]+arr[high]<key)
		{
			low++;
		}
		else{
			high--;
		}
	}
}
int main()
{
	int arr[100];
	int n;
	cin>>n;
	cin>>key;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	findPair(arr,n);
	return 0;

}