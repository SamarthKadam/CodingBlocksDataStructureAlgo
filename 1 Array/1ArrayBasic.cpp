#include<iostream>
using namespace std;
int main()
{
	int a[10]={1};          ////This basically means that I've declared an array of size 10 initializing the first value of array as 1 and rest as 0
    
    for(int i=0;i<10;i++)
    {
    	cin>>a[i];
    } 

    for(int i=0;i<10;i++)
    {
    	cout<<"The value of "<<i+1<<" indices is "<<a[i]<<endl;
    }
    return  0;

}



///Above is the program for reading and writing in the array