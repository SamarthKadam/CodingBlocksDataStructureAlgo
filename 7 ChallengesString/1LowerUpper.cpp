#include<iostream>
using namespace std;
int main()
{
	char ch;
  ch=cin.get();
  if(ch>=65 && ch<=90)
  {
  	cout<<"YOU ENTERED CAPITAL LETTERS"<<endl;
  }
  else if(ch>=97 && ch<=122)
  {
  	cout<<"YOU ENTERED SMALLCASE LETTER"<<endl;
  }
  else{
  	cout<<"INVALID CHARACTERS"<<endl;
  }
  return 0;
}