#include<iostream>
using namespace std;
void Filter(string s,int n)
{
	int j=0;
	while(n>0)
	{
		int last_bit=n&1;
		if(last_bit==1)
		{
			cout<<s[j];
		}
		j++;
		n=n>>1;
	}
	cout<<endl;
}
void Calculate(string s)
{
	int n=s.size();

	for(int i=0;i<(1<<n);i++)
	{
		Filter(s,i);
	}
}
int main()
{
	string s;
	cin>>s;
	Calculate(s);
	return 0;
}