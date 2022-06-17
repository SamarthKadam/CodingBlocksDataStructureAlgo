#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int res=0;
	int r;

    while(n>0)
    {
    	r=n%10;
    	if(r<5 || r==0)
    	{
    		r=r;
    	}
    	else{
    		r=9-r;
    		}
    		res=res*10+r;

    		n=n/10;
    }

    cout<<res<<endl;


}