#include<iostream>
#include<vector>
#include<bitset>
using namespace std;
int n=10000000;
bitset<10000005> b;
vector<int> primes;

void sieve()
{
	//This would set all bits to 1,1,1,1,1
	b.set(); 
	b[0]=b[1]=0;
	for(long long int i=0;i<=n;i++)
	{
		if(b[i])
		{
			primes.push_back(i);
			for(long long int j=i*i;j<=n;j=j+i)
			{
				b[j]=0;
			}
		}
	}
}
bool IsPrime(long long No)
{
	if(No<=n)
	{
		return b[No]==1?true:false;
	}

	for(long long int i=0;primes[i]*(long long)primes[i]<=No;i++)
	{
		if(No%primes[i]==0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	sieve();
	if(IsPrime(2147483618))
	{
		cout<<"Yes it is";
	}
	else{
		cout<<"No its not";
	}
	return 0;
}