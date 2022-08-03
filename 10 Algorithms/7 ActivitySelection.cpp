#include<iostream>
#include<algorithm>
using namespace std;
bool compare(pair <int,int> p1,pair <int,int> p2)
{
	return p1.second<p2.second;
}
int main()
{
	pair <int,int> p[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	 cin>>p[i].first;
	 cin>>p[i].second;
	}
	sort(p,p+n,compare);

    int count=1;
    int ans=0;
    for(int i=1;i<n;i++)
    {
    	if(p[i].first>=p[ans].second)
    	{
    		count++;
    		ans=i;
    	}

    }
    cout<<count<<endl;

	return 0;
	
}