#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int arr[]={1,2,3,3,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);

    int key=3;
    bool p=binary_search(arr,arr+n,key);

    if(p)
    {
        cout<<"Element is present"<<endl;

        auto lb=lower_bound(arr,arr+n,key);//This finds the element <=key
        auto up=upper_bound(arr,arr+n,key); //This finds the element >key
        cout<<lb-arr<<endl;
        cout<<up-arr<<endl;

        ///You can even find the frequency of element in logn times
        cout<<"The frequenc of the number is"<<up-lb<<endl;
    }
    else{
        cout<<"Element is not present"<<endl;
        auto lb=lower_bound(arr,arr+n,key);
        auto up=upper_bound(arr,arr+n,key);
        cout<<lb-arr<<endl;
        cout<<up-arr<<endl;
    }

}