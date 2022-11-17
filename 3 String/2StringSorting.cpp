#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool compare(string s1,string s2)
{
    if(s1.length()==s2.length())
    {
        return s1<s2;
    }
        return s1.length()>s2.length();
}
int main()
{
	int n;
	cin>>n;
	cin.get();


    string s[100];
    int i;
    for(i=0;i<n;i++)
    {
    	getline(cin,s[i]);
    }

    sort(s,s+n,compare);
    // sort(s,s+n);

    for(i=0;i<n;i++)
    {
    	cout<<s[i]<<endl;
    }
    return 0;
}



// Above compare function says that if we have two same strings that then you compare on the basis of
// asci value that is return the least ascive value first
// else return the string which has highest lenght

// x1<x2
// in any situation this is defined then x1 will get returned

// x1>x2
// in any of this situation x2 wil get retured