// #include<iostream>
// #include<climits>
// using namespace std;
// int cs[100];
// void GenrateSubarrayMax(int arr[100],int n)
// {
// 	int i;
// 	int j;
// 	int k;
// 	int value=INT_MIN;
// 	int result;
// 	int start;
// 	int end;

// 	for(i=0;i<n;i++)
// 	{
// 		for(j=i;j<n;j++)
// 		{
// 			result=0;
// 			result=cs[j]-cs[i-1];
			
// 			if(result>value)
// 			{
// 				start=i;
// 				end=j;
// 				value=result;

// 			}
// 		}
// 	}
// 	cout<<"The max Subarray is "<<value<<endl;
// 	cout<<"Which is starting from "<<start<<" to "<<end<<endl;
// }
// int main()
// {
// 	int n;
// 	cin>>n;
// 	int arr[100];
// 	cin>>arr[0];
// 	cs[0]=arr[0];
// 	for(int i=1;i<n;i++)
// 	{
// 		cin>>arr[i];
// 		cs[i]=cs[i-1]+arr[i];
// 	}
// 	GenrateSubarrayMax(arr,n);
// 	return 0;
// }

// Above is Coding BlocksAproach I found some Bug there so I've modified it

#include<iostream>
#include<climits>
using namespace std;
int cs[100];
void GenrateSubarrayMax(int arr[100],int n)
{
	int i;
	int j;
	int k;
	int value=INT_MIN;
	int result;
	int start;
	int end;

	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			result=0;
			if(i==j)
			{
				result=arr[i];
			}
			else if(i==0)
			{
				result=cs[j];
			}
			else{
			result=cs[j]-cs[i-1];
		     }
			
			if(result>value)
			{
				start=i;
				end=j;
				value=result;

			}
		}
	}
	cout<<"The max Subarray is "<<value<<endl;
	cout<<"Which is starting from "<<start<<" to "<<end<<endl;
}
int main()
{
	int n;
	cin>>n;
	int arr[100];
	cin>>arr[0];
	cs[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		cin>>arr[i];
		cs[i]=cs[i-1]+arr[i];
	}
	GenrateSubarrayMax(arr,n);
	return 0;
}