#include<iostream>
using namespace std;
int main()
{
	int arr[100]={0};
	string s;
	getline(cin,s);
	int max=0;
	char ch;

	for(int i=0;i<s.length();i++)
	{
		arr[s[i]-'A']++;
	}

	for(int i=0;i<100;i++)
	{
		if(arr[i]!=0)
		{
			if(arr[i]>max)
			{
				max=arr[i];
				ch='A'+i;
			}
		}

	}
	cout<<"The letter "<<ch<<" has repeated "<<max<<" times"<<endl;
	return 0;
}