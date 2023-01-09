#include<iostream>
using namespace std;
int ConvertToInt(char arr[],int n)
{
	if(n<0)
	{
		return 0;
	}
	int val=arr[n]-'0';
    return ConvertToInt(arr,n-1)*10+val;
}
int main()
{
	char arr[]="1234";
	int n=4;
	cout<<ConvertToInt(arr,n-1)<<endl;
	return 0;
}