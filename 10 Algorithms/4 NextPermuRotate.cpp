
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    rotate(arr,arr+2,arr+n);
    // display(arr,n);

     ////We can apply the same in the vector
    vector<int> v{1,2,3};
    // rotate(v.begin(),v.begin()+1,v.end());

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    cout<<endl;

    ///We can also find next permutatin according to lexicographical order

   next_permutation(v.begin(),v.end());
   for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    return 0;

}