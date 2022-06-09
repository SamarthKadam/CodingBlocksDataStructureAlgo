#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a,int b){
	return a>b;
}
int main()
{
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n,compare);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}



// Inbuilt Sort is the function which is used to sort the container.For that we 
// should be inlcuding algorithm header file. Sort function accepts two parameter
// starting address and ending+1 address.we can also pass the third parameter that
// is comparator function to decided wheather the sorting should happen on the order
// of assceding or descending