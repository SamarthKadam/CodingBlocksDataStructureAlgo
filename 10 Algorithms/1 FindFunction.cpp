#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key=8;
    auto i=find(arr,arr+n,key); ////auto keyword means it will be automatically deducted from its initializer
    if(i-arr==n)
    {
        cout<<"The item is not present"<<endl;
    }
    else{    
    cout<<i-arr<<endl;
}

    return 0;
}