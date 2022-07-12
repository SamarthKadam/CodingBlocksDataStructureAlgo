#include<iostream>
using namespace std;
int ans(string s,int n,char ch)
{
	int left=0;
	int right=0;
	int count=0;
	int ans=0;

	for(right;right<s.length()-1;right++)
	{
		if(s[right]!=ch)
		{
			count++;
		}
		if(count==n)
		{
			break;
		}
	}

	while(left<right)
	{
		while(s[right+1]==ch and right<s.length()-1)
		{
			right++;
		}
		int curlen=right-left+1;
		ans=max(ans,curlen);
		left++;
		if(s[left-1]!=ch && right<s.length()-1)
		{
			right++;
		}

	}
	return ans;
}
int main()
{
	int n;
	string s;
	cin>>n;

	cin.get();
	getline(cin,s);

	if(n>s.length())
	{
		cout<<s.length()<<endl;
		return 0;
	}
	int AnsA=ans(s,n,'a');
	int AnsB=ans(s,n,'b');

	cout<<max(AnsA,AnsB)<<endl;
	return 0;
}