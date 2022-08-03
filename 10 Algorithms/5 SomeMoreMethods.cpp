
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a=5;
    int b=8;
    swap(a,b);
    cout<<a<<b<<endl;
    cout<<min(a,b)<<max(a,b)<<endl;

    cout<<endl;

    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(arr,arr+3);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    return 0;

}