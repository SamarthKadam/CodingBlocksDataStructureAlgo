#include<iostream>
using namespace std;
void printIt(string s)
{
	int n=s.length();
	int i=0;
	int j=0;


	while(i<n)
	{
		if(s[i]>=65 and s[i]<=90)
		{
			j=i+1;
			while(!(s[j]>=65 and s[j]<=90)and j<n)
			{
				j++;
			}
			
			for(int x=i;x<j;x++)
			{
				cout<<s[x];
			}
			i=j;
			cout<<endl;
	}
	}
}
int main()
{
	string s;
	getline(cin,s);
	printIt(s);
	return 0;
}