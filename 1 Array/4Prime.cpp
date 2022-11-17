// #include<iostream>
// using namespace std;
// int n;
// int checkPrime(int x)
// {
// 	if(x<=1)
// 	{
// 		return 0;
// 	}
// 	int i;
// 	for(i=2;i<n;i++)
// 	{
// 		if(n%i==0)
// 		{
// 			return 0;
// 		}
// 	}
// 	if(i==n)
// 	{
// 		return 1;
// 	}
// }
// int main()
// {
// 	cin>>n;
// 	if(checkPrime(n))
// 	{
// 		cout<<"Your number is Prime"<<endl;
// 	}
// 	else{
// 		cout<<"Yournumber is Not prime Number"<<endl;
// 	}
// 	return 0;
// }

#include<iostream>
#include<cmath>
using namespace std;
int n;
int checkPrime()
{
	if(n<=1)
	{
		return 0;
	}
	int i;
	int t=sqrt(n);
	for(i=2;i<=t;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	if(i==n)
	{
		return 1;
	}
}
int main()
{
	cin>>n;
	if(checkPrime())
	{
		cout<<"Your number is Prime"<<endl;
	}
	else{
		cout<<"Your number is Not prime Number"<<endl;
	}
	return 0;
}

//Point to be noted normal function call defaulty returns 1;
// Above is Slowest Approach then below is little slightly better approach