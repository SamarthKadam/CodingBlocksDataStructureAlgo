#include<iostream>
using namespace std;
int a[100];
int b[100];
int m,n;
void Calculate()
{
	int number1=0;
	int number2=0;

	for(int i=0;i<m;i++)
	{
		number1=number1*10+a[i];
	}

	for(int i=0;i<n;i++)
	{
		number2=number2*10+b[i];
	}
	cout<<number1+number2<<endl;
}
int main()
{
	cin>>m;
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	Calculate();
	return 0;
}