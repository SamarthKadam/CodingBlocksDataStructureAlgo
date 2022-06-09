#include<iostream>
using namespace std;
int main()
{
	int m,n;
	int arr[100][100]={0};
	cin>>m>>n;

    int val=1;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			arr[i][j]=val;
			val=val+1;
			cout<<" "<<arr[i][j];
		}
		cout<<endl;
	}
	return 0;
}