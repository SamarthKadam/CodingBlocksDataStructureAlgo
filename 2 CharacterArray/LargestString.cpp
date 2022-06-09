#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char arr[100];
	char largest[100];
	int len=0;
	int largestlen=0;
	cin.get();
	for(int i=0;i<n;i++)
	{
		cin.getline(arr,1000);
		len=strlen(arr);
		if(largestlen<len)
		{
			largestlen=len;
			strcpy(largest,arr);
		}

	}
	cout<<largest<<endl;
	return 0;
}