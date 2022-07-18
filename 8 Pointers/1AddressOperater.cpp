#include<iostream>
using namespace std;
int main()
{
	int x=7;
	// cout<<&x<<endl;

	float y=9.8;
	// cout<<&y<<endl;


	 //This is the exception for getting its address you need to typeconvert it
	char ch='A';
	// cout<<(void*)&ch<<endl;

///  Next we concept of address. We talked about declaration and
///	initialization 
///	All type of pointers have same size
/// We should not assign int values address to character pointer

	int *ptr=&x;
	cout<<*ptr<<endl;

	return 0;
}