// #include<iostream>
// using namespace std;
// int main()
// {
// 	int m,n;
// 	int arr[100][100];
// 	cin>>m>>n;

// 	for(int i=0;i<m;i++)
// 	{
// 		for(int j=0;j<n;j++)
// 		{
// 			cin>>arr[i][j];
// 		}
// 	}

//     int j=0;
// 	for(int i=0;i<n;i++)
// 	{
// 		if(j==0)
// 		{
// 			for(;j<m;j++)
// 			{
// 				// cout<<j<<i<<endl;
// 				cout<<arr[j][i]<<endl;
// 			}
// 			j=m-1;
// 		}
// 		else{
// 			for(;j>=0;j--)
// 			{
// 				cout<<arr[j][i]<<endl;
// 				// cout<<j<<i<<endl;
// 			}
// 			j=0;
// 		}

// 	}
// 	return 0;

// }

#include<iostream>
using namespace std;
int main()
{
	int m,n;
	int arr[100][100];
	cin>>m>>n;

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<n;i++)
	{
		if(i%2==0)
		{
			for(int j=0;j<m;j++)
			{
				// cout<<j<<i<<endl;
				cout<<arr[j][i]<<endl;
			}
		}
		else{
			for(int j=m-1;j>=0;j--)
			{
				cout<<arr[j][i]<<endl;
				// cout<<j<<i<<endl;
			}
		}

	}
	return 0;

}