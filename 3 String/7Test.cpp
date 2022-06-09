#include<iostream>
#include<algorithm>
using namespace std;

bool compare(string s1,string s2)
{
	return s1>s2;
}
int main()

{

	// how to sort the string 
	// string s1("hello");
	// sort(s1.begin(),s1.end());
	// cout<<s1<<endl;

    int n;
	string s[100];
	cout<<"Enter the number of strings\n"<<endl;
	cin>>n;
	cin.get();
    for(int i=0;i<n;i++)
    {
    	getline(cin,s[i]);
    }

    sort(s,s+n,compare);

    for(int i=0;i<n;i++)
    {
    	cout<<s[i]<<endl;
    }



	// return 0;

}