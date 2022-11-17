#include<iostream>
#include<string>
using namespace std;
int main()
{
	//string init
	string s0;

	string s1("hello");

	string s2="hello world";

	string s3(s2);

    string s4=s3;

    char arr[10]={'a','b','c','\0'};
     
    string s5(arr);

     cout<<s0<<endl;
     cout<<s1<<endl;
     cout<<s2<<endl;
     cout<<s3<<endl;
     cout<<s4<<endl;
     cout<<s5<<endl;

     if(s0.empty())
     {
        cout<<"s0 is empty"<<endl;
     }


    // Append
     s0="Hello Samarth ";
     s0.append("Amazing world");
     s0.append(" and space");
     
     cout<<s0<<endl;


     // remove
     cout<<s0.length()<<endl;
     s0.clear();
     cout<<s0.length()<<endl;

     
     cout<<s0<<endl;

     s1="Apple";
     s2="Mango";

     cout<<s2.compare(s2)<<endl;

     if(s1<s2)
     {
        cout<<"S1 is greater"<<endl;
     }
     
     cout<<s2[0]<<endl;

     // Finding substring
     string s="I want to have apple juice";
     int idx=s.find("apple");
     cout<<idx<<endl;


    ///Remove the word from the string
     string word="apple";
     int len=word.length();
     s.erase(idx,len);
     cout<<s<<endl;

     ///Iterate over all the characters in string
     // one is using loop


     for(int i=0;s2[i]!='\0';i++)
     {
      cout<<s2[i]<<endl;
     }
     cout<<"--------"<<endl;

      // for each loop
     for(auto c:s1)
     {
        cout<<c<<".";
     }


     ////auto means it will check for the value and get its datatype 
 
}