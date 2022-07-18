#include<iostream>
using namespace std;
int main()
{
	int arr[100];
	cout<<sizeof(arr)<<endl;
	
	int n;
	cin>>n;

	int *ptr=new int[n]{0};     //This statement makes all the values 0
	cout<<sizeof(ptr)<<endl;

	for(int i=0;i<n;i++)
	{
		ptr[i]=1;
	}
	for(int i=0;i<n;i++)
	{
		cout<<ptr[i]<<endl;
	}
	delete []ptr;
	return 0;
}