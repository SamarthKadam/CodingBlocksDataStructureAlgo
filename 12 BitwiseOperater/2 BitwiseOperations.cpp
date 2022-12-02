#include<iostream>
using namespace std;
bool isOdd(int n)
{
	return (n&1);
}
int getbit(int n,int i)
{
	int x=1;
	x=x<<i;
	int value=(n&x)>0?1:0;
	return value;
}
void setbit(int n,int i)
{
 int x=1<<i;
 int y=n|x;

 cout<<y<<endl;
}
void clearbit(int n,int i)
{
	int x=~(1<<i);
	int y=n&x;
	cout<<y<<endl;
}
void updatebit(int n,int i,int value)
{
	int x=~(1<<i);
	int y=n&x;
	int res=y|(value<<i);
	cout<<res<<endl;	
}
int main()
{
	// cout<<isOdd(6)<<endl;
	// cout<<getbit(8,2)<<endl;
    // setbit(0,4);
    // clearbit(22,2);
    updatebit(7,1,0);
	return 0;
}