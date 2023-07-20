#include<iostream>
using namespace std;
void generateBrackets(char* arr,int n,int index,int open,int close)
{
	if(index==n*2)
	{
		arr[index]='\0';
		cout<<arr<<endl;
		return ;
	}

	if(open<n)
	{
		arr[index]='(';
		generateBrackets(arr,n,index+1,open+1,close);
	}

	if(close<open)
	{
		arr[index]=')';
		generateBrackets(arr,n,index+1,open,close+1);
	}
	return;
}
int main()
{
	int n=2;
	char arr[100];
	generateBrackets(arr,n,0,0,0);
	return 0;
}