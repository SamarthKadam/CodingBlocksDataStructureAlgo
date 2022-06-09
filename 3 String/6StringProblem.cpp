#include<iostream>
#include<algorithm>
#include <cstring>
using namespace std;

string ExtractStringAtKey(string str,int key)
{
	char *s=strtok((char*)str.c_str()," ");
	while(key>1)
	{
		s=strtok(NULL," ");
		key--;
	}
	return (string)s;
}

int convertoInt(string s)
{
	int ans=0;
	int p=1;

	for(int i=s.length();i>=0;i--)
	{
		ans+=(s[i]-'0')*p;
		p=p*10;
	}
	return ans;

}

bool  numericCompare(pair<string,string> s1,pair<string,string> s2)
{
	string key1,key2;
	key1=s1.second;
	key2=s2.second;

	return convertoInt(key1) < convertoInt(key2);
}

bool  lexioCompare(pair<string,string> s1,pair<string,string> s2)
{
	string key1,key2;
	key1=s1.second;
	key2=s2.second;

	return key1<key2;
}

int main()
{



	int n;
	cin>>n;

	cin.get();
	string a[100];

	for(int i=0;i<n;i++)
	{
		getline(cin,a[i]);
	}

	int key;
	cin>>key;
	cin.get();
	string reversal,ordering;
	cout<<"Ordering?"<<endl;
	getline(cin,ordering);
	cout<<"reversal?"<<endl;
	getline(cin,reversal);

    pair <string,string> strPair[100];

    for(int i=0;i<n;i++)
    {
    	strPair[i].first=a[i];
    	strPair[i].second=ExtractStringAtKey(a[i],key);
    }

    if(ordering=="numeric")
    {
    	sort(strPair,strPair+n,lexioCompare);
    }
    else{
    	sort(strPair,strPair+n,lexioCompare);
    }


    if(reversal=="true")
    {
    	for(int i=0;i<n/2;i++)
    	{
    		swap(strPair[i],strPair[n-i-1]);
    	}
    }


    for(int i=0;i<n;i++)
    {
    	cout<<strPair[i].first<<endl;
    }


}