//this method will help t o find pattern in string;

#include<iostream>
using namespace std;
int main()
{
    string str="substr is one of the important string methods";
    string find="one";

    int i;
    for( i=0;i<str.size();i++)
    {
        string res=str.substr(i,find.size());
        if(res==find)
        {
            cout<<"Yes the Given string  is present"<<endl;
        }
    }

    if(i==str.size())
    {
        cout<<"The given string is not present"<<endl;
    }




}