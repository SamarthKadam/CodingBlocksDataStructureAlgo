// #include<iostream>
// using namespace std;
// int arr[100];
// int l=0;
// int takeInput(int n)
// {
// 	if(n==1)
// 	{
// 		cin>>arr[0];
// 	}
// 	else{	
// 	takeInput(n-1);
// 	cin>>arr[n-1];
//      }
// }
// int check(int n)
// {
// 	if(l>=n)
// 	{
// 		return 1;
// 	}
// 	if(arr[n-1]!=arr[l++])
// 	{
// 		return 0;
// 	}
// 	else{
// 		check(n-1);
// 	}
// }
// int main()
// {
// 	int n;
// 	cin>>n;
// 	takeInput(n);
// 	int valid=check(n);
// 	if(valid)
// 	{
// 		cout<<"Your String is palindrome"<<endl;
// 	}
// 	else{
// 		cout<<"Yout String is not palindrome"<<endl;
// 	}
// 	return 0;
// }
#include<iostream>
using namespace std;
void input(int arr[], int n){
    if(n==1){cin>>arr[0];}
    else{
        input(arr,n-1);
        cin>>arr[n-1];
    }
}
bool check(int arr[],int n,int size){
    if(n==size/2) return true;
    if(arr[n]!=arr[size-n-1]) return false;
    check(arr,n+1,size);
}
int main() {
	int n,arr[100];
	cin>>n;
	input(arr,n);
	int x=check(arr,0,n);
	if(x) cout<<"true";
	else cout<<"false";
}
