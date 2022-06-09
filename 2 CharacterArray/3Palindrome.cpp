#include<iostream>
#include<cstring>
using namespace std;
int Ispalindrome(char arr[100],int n)
{
	int i=0;
	int j=n-1;
	while(i<j)
	{
		if(arr[i]!=arr[j])
		{
			return 0;
		}
		i++;
		j--;
	}
	if(i==j)
	{
		return 1;
	}
}
int main()
{
	char arr[100];
	cin.getline(arr,100,'\n');
	int result;
	result=Ispalindrome(arr,strlen(arr));
	if(result)
	{
		cout<<"Your string is palindrome\n";
	}
	else{
		cout<<"Your string is not palindrome\n";
	}
	return 0;
}