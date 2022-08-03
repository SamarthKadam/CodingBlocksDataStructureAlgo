// #include<iostream>
// #include<algorithm>
// using namespace std;
// bool compare(int a,int b)
// {
//     /// a is value b is money
//     return a<=b;
//     ///b is 500 a is 240
// }
// int main()
// {
//     int money[]={1,2,5,10,20,50,100,200,500,2000};
//     int n=sizeof(money)/sizeof(money[0]);

//     int input=240;

//     auto lb=lower_bound(money,money+n,input,compare)-1;
//     cout<<lb-money<<endl;

// }


// #include<iostream>
// #include<algorithm>
// using namespace std;
// bool compare(int a,int b)
// {
//     /// a is value b is money
//     return a<=b;
//     ///b is 500 a is 500
// }
// int main()
// {
//     int money[]={1,2,5,10,20,50,100,200,500,2000};
//     int n=sizeof(money)/sizeof(money[0]);

//     int input=500;

//     auto lb=lower_bound(money,money+n,input,compare)-1;
//     cout<<lb-money<<endl;

// }

#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
    /// a is value b is money
    return a<=b;
    ///b is 500 a is 500
}
int main()
{
    int money[]={1,2,5,10,20,50,100,200,500,2000};
    int n=sizeof(money)/sizeof(money[0]);

    int input=168;

    while(input>0)
    {
    auto lb=lower_bound(money,money+n,input,compare)-money-1;
    int value=money[lb];
    cout<<value<<" ";
    input=input-value;
    }
    return 0;

}