#include<iostream>
using namespace std;
int main()
{
	///This is the syntax for declaring the pairs
	pair <int,int> p1;
	pair <int,int> p2;
	  

     ///1>This is the syntax for inputing the pairs
	// cin>>p1.first;
	// cin>>p1.second;

	// cin>>p2.first;
	// cin>>p2.second;


     //2>This is another syntax for inputing the pairs
	// p1.first=2;
	// p1.second=33;

	// p2.first=323;
	// p2.second=89;


    // 3>This is another syntax for inputing the pairs
	// pair <int,int> P2(12,38);

	// cout<<P2.first<<endl;
	// cout<<P2.second<<endl;

	         
	  // 4>This is another way      
   // pair <int,int> P;
   // P=make_pair(1,2);
   // cout<<P.first<<P.second<<endl; 


 
  //    p1.first=2;
	 // p1.second=33;

	 // p2.first=323;
	 // p2.second=89;


	 // // This is for swapping the pairs
	 // swap(p1,p2);


	// cout<<p1.first<<endl;
	// cout<<p1.second<<endl;

	// cout<<p2.first<<endl;
	// cout<<p2.second<<endl;


      p1.first=2;
	  p1.second=5;

	  p2.first=9;
	  p2.second=99;

             ///////We can use the comparaters by putting them inside the bracket      
      cout<<(p1==p2)<<endl;
      


	return 0;
}