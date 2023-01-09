#include<iostream>
#include<cstring>
using namespace std;
int i=0;
int GlobalN;
void ShiftArray(int start,char arr[100],int n)
{
	int temp=n;

	while(temp>=start)
	{
		arr[temp+2]=arr[temp];
		temp--;
	}
}
char* CoverttoPi(char arr[100],int n)
{
	if(i>=n)
	{
		return arr;
	}
	if(arr[i]=='p' && arr[i+1]=='i')
	{
		int start=i+2;
		if(start>=n)
		{
			arr[i]='3';
			arr[i+1]='.';
			arr[i+2]='1';
			arr[i+3]='4';
			n=n+2;
			GlobalN=n;
		}
		else{
		ShiftArray(start,arr,n);
		arr[i]='3';
		arr[i+1]='.';
		arr[i+2]='1';
		arr[i+3]='4';
		i=i+4;
		n=n+2;
		GlobalN=n;
	    }
	}
	else{
		i++;
	}
	CoverttoPi(arr,n);
}
int main()
{
	char arr[100]="xpi";
	int n=strlen(arr);
	char *ptr=CoverttoPi(arr,n);
	for(int i=0;i<GlobalN;i++)
	{
		cout<<ptr[i]<<" ";
	}


	return 0;
}