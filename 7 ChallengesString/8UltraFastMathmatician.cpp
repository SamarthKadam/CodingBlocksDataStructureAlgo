#include<iostream>
using namespace std;
int main()
{
	int n; 
	string s1;
	string s2;
	string ans="";

	getline(cin,s1);
	getline(cin,s2);
	n=s1.length();


    int i;
    for(i=0;i<n;i++)
    {
    	if(s1[i]!=s2[i])
    	{
    		ans+='1';
    	}
    	else{
    		ans+='0';
    	}
    }

     cout<<ans<<endl;
	return 0;
}