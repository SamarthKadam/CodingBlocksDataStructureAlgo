// #include<iostream>
// using namespace std;
// bool BinarySearch(int arr[],int low,int high,int key)
// {
// 	if(low>high)
// 		return false;

// 	int mid=low+(high-low)/2;
// 	if(arr[mid]==key)
// 		return true;
// 	else if(arr[mid]<key)
// 	BinarySearch(arr,mid+1,high,key);
// 	else
// 	BinarySearch(arr,low,mid-1,key);

// }
// int main()
// {
// 	int arr[]={1,2,3,6,9,10};
// 	int n=sizeof(arr)/sizeof(arr[0]);
//  cout<<BinarySearch(arr,0,n-1,4)<<endl;
// 	return 0;
// }

// #include<iostream>
// using namespace std;
// int POW(int a,int b)
// {
// 	if(b==0)
// 		return 1;
// 	else{
// 		return a*POW(a,b-1);
// 	}
// }
// int main()
// {
// 	int a;
// 	int b;
// 	cin>>a>>b;
// 	cout<<POW(a,b)<<endl;
// 	return 0;
// }

#include<iostream>
using namespace std;
int MULTIPLY(int a,int b)
{
	if(b==0){
	return 0;
     }
    else{
    	return a+MULTIPLY(a,b-1);
    }
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<MULTIPLY(a,b)<<endl;
	return 0;
}