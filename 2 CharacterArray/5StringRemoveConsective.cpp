#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char arr[100];
	cin.getline(arr,100,'\n');
	int n=strlen(arr);
	int i=0;
	int j=i+1;
	if(n==0 || n==1)
	{
		cout<<arr<<endl;
	}
	while(j<n)
	{
		if(arr[i]!=arr[j])
		{
			i++;
			arr[i]=arr[j];
		}
		j++;
	}
	arr[i+1]='\0';
	cout<<arr<<endl;
	return 0;
}