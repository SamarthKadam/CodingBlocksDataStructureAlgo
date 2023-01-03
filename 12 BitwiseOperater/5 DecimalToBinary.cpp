#include<iostream>
using namespace std;
void DecimalToBinary(int n)
{
	int ans=0;
	int p=1;
	int last_bit;

	while(n>0)
	{
		last_bit=n&1;
		ans+=p*last_bit;
		p=p*10;
		n=n>>1;
	}
	cout<<ans<<endl;
}
int main()
{
	int n=13;
	DecimalToBinary(n);
	return 0;
}