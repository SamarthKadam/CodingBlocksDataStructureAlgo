#include<iostream>
using namespace std;
int prime(int n,int arr[1000])
{
	int i=0;
	int j;
	for(i=3;i<=n;i+=2)
	{
		arr[i]=1;
	}
	for(i=3;i<=n;i+=2)
	{
		if(arr[i]==1)
		{
			for(j=i*i;j<=n;j=j+i)
			{
				arr[j]=0;
			}
		}
	}
	arr[0]=0;
	arr[1]=0;
	arr[2]=1;

}
int main()
{
	int arr[1000]={0};
	prime(100,arr);
	int cumm[1000]={0};


	for(int i=1;i<100;i++)
	{
		cumm[i]=cumm[i-1]+arr[i];
	}

	int query;
	cin>>query;

	while(query>0)
	{
		int a,b;
		cin>>a>>b;
		cout<<cumm[b]-cumm[a-1]<<" "<<endl;
		query--;
	}
	return 0;
}