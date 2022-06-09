#include<iostream>
using namespace std;
int main()
{
	char a[][10]={{'b','o','y','\0'},{'g','r','e','a','t'}};
	cout<<a[0]<<endl;
	cout<<a[1]<<endl;

	char b[][10]={"hello","World"};
	cout<<b[0]<<endl;
	cout<<b[1]<<endl;
}