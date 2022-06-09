#include<iostream>
using namespace std;
int arr[100][100];
int m,n;
int StairSearch(int key)
{
	int i=0;
	int j=n-1;

	while(j>=0)
	{
		if(arr[i][j]==key)
		{
			cout<<"Element Found"<<endl;
			return 0;
		}
		else if(arr[i][j]<key)
		{
			i++;
		}
		else if(arr[i][j]>key)
		{
			j--;
		}

	}
	cout<<"Element not found"<<endl;
	return 0;
}
int main()
{
	int key;
	cin>>key>>m>>n;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}

	StairSearch(key);
	return 0;
}