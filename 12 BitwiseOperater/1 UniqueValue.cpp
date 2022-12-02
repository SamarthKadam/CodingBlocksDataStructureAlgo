#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n;
  int x;
  cin>>n;
  int ans=0;
  vector<int> v;
  
  for(int i=0;i<n;i++)
  {
    cin>>x;
    v.push_back(x);
  }

  for(int i=0;i<n;i++)
  {
  	ans^=v[i];
  }
  cout<<ans<<endl;
  return 0;
}