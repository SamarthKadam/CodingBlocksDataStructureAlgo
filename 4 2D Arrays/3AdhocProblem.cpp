#include<iostream>
using namespace std;
bool magicaPark(char arr[100][100],int m,int n,int k,int s)
{
	bool success=true;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			char ch=arr[i][j];
			if(s<k)
			{
				success=false;
				return success;
			}
			if(ch=='*')
			{
				s=s+5;
			}
			else if(ch=='.')
			{
				s=s-2;
			}
			else{
				break;
			}
			if(j!=n-1)
			{
				s--;
			}
		}
	}
	return success;

}
int main()
{
	int m,n,k,s;
	char arr[100][100];
	cin>>m>>n>>k>>s;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}
	if(magicaPark(arr,m,n,k,s))
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	
	return 0;
}