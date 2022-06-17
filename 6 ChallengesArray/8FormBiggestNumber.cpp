#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool compare(string X, string Y)
{
    cout<<"The string x is "<<X<<endl;
    cout<<"The string y is "<<Y<<endl;
    string XY = X.append(Y);

    string YX = Y.append(X);

    return XY.compare(YX) > 0 ? 1: 0;

}
void printlargest(string arr[100],int n)
{
    sort(arr,arr+n,compare);
    for (int i=0; i < n ; i++)
        cout << arr[i];
    cout<<"\n";
}
int main()
{
    int n;
    cin>>n;

    string arr[100];
    cin.get();

    for(int i=0;i<n;i++)
    {
        getline(cin,arr[i]);
    }

    printlargest(arr,n);
    return 0;
 
}