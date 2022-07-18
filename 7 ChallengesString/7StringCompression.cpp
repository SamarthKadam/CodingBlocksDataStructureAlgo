#include<iostream>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	int n=s.length();
	int count=0;
	int i=0;
	int j;
	int low;
	int high;
	char ch;
	while(i<n)
	{
		ch=s[i];
		j=i;
		while(ch==s[j])
		{
			count++;
			j++;
		}
		i=j;
		cout<<ch<<count;
		count=0;
	}
	return 0;
}

///We also have alternate method that is using recursion