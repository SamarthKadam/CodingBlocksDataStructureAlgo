#include<iostream>
using namespace std;
string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int printInSpell(int n)
{
	if(n==0)
	{
		return 0;
	}
	printInSpell(n/10);
	int value=n%10;
	cout<<arr[value]<<" ";
}
int main()
{
	int n;
	cin>>n;
	printInSpell(n);
	return 0;
}