#include<iostream>
using namespace std;
int Bitonic(int arr[100],int n)
{
    int left[100]={0};
    int right[100]={0};

    left[0]=1;
    right[n-1]=1;

    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
        {
            left[i]=left[i-1]+1;
        }
        else{
            left[i]=1;
        }
    }

    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>arr[i+1])
        {
            right[i]=right[i+1]+1;
        }
        else{
            right[i]=1;
        }
    }



    int sum=0;

    for(int i=0;i<n;i++)
    {
        if(sum<left[i]+right[i]-1)
        {
            sum=left[i]+right[i]-1;
        }

    }
    return sum;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<Bitonic(arr,n)<<endl;

}