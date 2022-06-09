#include<iostream>
#include<cstring> /////We have strtok inside it
using namespace std;
int main()
{
	char arr[100]="Today is rainy day";
	char *ptr=strtok(arr," ");
	cout<<ptr<<endl;

	while(ptr!=NULL)
	{
		ptr=strtok(NULL," ");
		cout<<ptr<<endl;
	}
	return 0;
}
