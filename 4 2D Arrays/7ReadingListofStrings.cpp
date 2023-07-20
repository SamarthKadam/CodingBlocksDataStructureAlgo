#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	char a[100][100];
	cin>>n;

	cin.get();

	for(int i=0;i<n;i++)
	{
		// getline(cin,a[i]);
		cin.getline(a[i],100);
	}

	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}