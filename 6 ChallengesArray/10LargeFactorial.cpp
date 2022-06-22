#include<iostream>
using namespace std;
int arr[1000];
int ressize=1;
void multiply(int);
void factorial(int n)
{
	arr[0]=1;

	for(int i=2;i<=n;i++)
	{
		multiply(i);

	}

}
void multiply(int x)
{
	int product;
	int carry=0;
	for(int i=0;i<ressize;i++)
	{
		product=arr[i]*x+carry;
		arr[i]=product%10;
		carry=product/10;

	}
	while(carry)
	{
		arr[ressize]=carry%10;
		carry=carry/10;
		ressize++;
	}
}
void display()
{
	for(int i=ressize-1;i>=0;i--)
	{
		cout<<arr[i];
	}
}
int main()
{
	int n;
	cin>>n;
	factorial(n);
	cout<<"The factorial of the number is"<<endl;
	display();
	return 0;
}