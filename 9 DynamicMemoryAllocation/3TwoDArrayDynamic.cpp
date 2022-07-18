#include<iostream>
using namespace std;
int main()
{
	int **ptr;
	int r,c;
	cout<<"Enter row"<<endl;
	cin>>r;
	cout<<"Enter column"<<endl;
	cin>>c;

	ptr=new int*[r];

	for(int i=0;i<r;i++)
	{
		ptr[i]=new int[c];
	}
	int sum=0;

	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			ptr[i][j]=sum;
			sum++;
		}
	}
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<ptr[i][j]<<endl;
		}
		cout<<endl;
	}

	return 0;
}