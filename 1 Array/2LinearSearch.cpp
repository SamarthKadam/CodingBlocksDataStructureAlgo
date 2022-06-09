#include<iostream>
using namespace std;
int main()
{
	int n;
	int i;
	int key;
	cin>>n;
	int arr[100];
	cout<<"Enter the elements one by one\n";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key you want to search\n";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			cout<<"Element found at "<<i<<"th position"<<endl;
			break;
		}
	}
	if(i==n)
	{
		cout<<"Element not found"<<endl;
	}
	return 0;


}