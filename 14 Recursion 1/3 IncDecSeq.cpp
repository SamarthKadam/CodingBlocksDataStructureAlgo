#include<iostream>
using namespace std;
void Increasing(int n)
{
	if(n==0)
	{
		return;
	}
	else{
		cout<<n<<endl;
		Increasing(n-1);
	}
}
void Decreasing(int n)
{
	if(n==0)
	{
		return;
	}
	else{
		Decreasing(n-1);
		cout<<n<<endl;
	}

}
int main()
{
	int n;
	cin>>n;
	Increasing(n);
	cout<<endl;
	Decreasing(n);
	return 0;
}