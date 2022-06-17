#include<iostream>
using namespace std;
int main()
{
    int arr[10][10];
    int m,n;
    cin>>m>>n;
    int sr=0;
    int er=m-1;
    int sc=0;
    int ec=n-1;


    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    while(sr<=er && sc<=ec)
    {
    for(int i=sr;i<=er;i++)
    {
        cout<<arr[i][sc]<<endl;
    }
    sc++;
    for(int i=sc;i<=ec;i++)
    {
        cout<<arr[er][i]<<endl;
    }
    er--;

    if(ec>sc)
    {
    for(int i=er;i>=sr;i--)
    {
        cout<<arr[i][ec]<<endl;
    }
    ec--;
    }

    if(er>sr)
    {
    for(int i=ec;i>=sc;i--)
    {
        cout<<arr[sr][i]<<endl;
    }
    sr++;
    }
    }
    return 0;

}