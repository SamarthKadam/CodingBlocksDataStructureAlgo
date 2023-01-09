#include<iostream>
using namespace std;
int PlaceTile(int n)
{
	if(n<=3)
		return 1;
	else{
		return PlaceTile(n-1)+PlaceTile(n-4);
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<PlaceTile(n)<<endl;
	return 0;
}