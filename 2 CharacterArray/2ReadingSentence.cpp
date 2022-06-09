#include<iostream>
using namespace std;
void readline(char arr[100],int leng,char ending)
{
	int i=0;
	char ch=cin.get();
	while(ch!=ending)
	{
		arr[i]=ch;
		i++;
		if(i==(leng-1))
		{
			break;
		}
		ch=cin.get();
	}
	arr[i]='\0';
}
int main()
{
	char arr[100];
	readline(arr,100,'\n');
	cout<<arr<<endl;
	return 0;
}


// Above is a formal way of taking a sentence in array 
// cin.getline(arr,100,'$');       // This is inbuilt approach to take the setence in array