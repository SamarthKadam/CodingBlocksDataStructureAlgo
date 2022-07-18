#include<iostream>
using namespace std;
string s;
int count=0;
int arr[100]={0};
int Divi(int x)
{
	int arr[]={2,3,5,7,11,13,17,19,23,29};
	int fake=0;
	for(int i=0;i<10;i++)
	{
		if(x==arr[i])
		{
			continue; 
		}
		if(x%arr[i]!=0)
		{
			continue;
		}
		else{
			fake=1;
		}
	}

	if(fake==1)
	{
		return 0;
	}
	else{
		return 1;
	}
}
int check(int x,int y)
{
	int num=0;
	int r=0;
	int digit;
	for(int i=x;i<=y;i++)
	{
		digit=s[i]-'0';
		num=num*10+digit;
	}
	if(num==0||num==1)
	{
		return 0;
	}
	else 
	{
		if(Divi(num))
	{
		return 1;
	}
	else{
		return 0;
        }
	}
}
int valid(int x,int y)
{
	for(int i=x;i<=y;i++)
	{
		if(arr[i]==1)
		{
			return 0;
		}
	}
	return 1;
}
int Calculate(string s)
{
	int n=s.length();
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(check(i,j) && valid(i,j))
			{
				int n=j;
				for(int m=i;m<=n;m++)
				{
					arr[m]=1;
				}
				count++;

			}
		}
	}
}
int main()
{
	getline(cin,s);
	Calculate(s);
	cout<<count<<endl;
}