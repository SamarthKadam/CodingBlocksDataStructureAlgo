//This is 0(n2)approach

// #include<iostream>
// using namespace std;
// int CountWaters=0;
// void RainWater(int arr[100],int n)
// {
// 	int left;
// 	int right;
//   for(int i=1;i<n-1;i++)
//   {
//   	left=arr[i];
//   	for(int j=0;j<i;j++)
//   	{
//   		left=max(left,arr[j]);
//   	}
//   	right=arr[i];
//   	for(int j=i+1;j<n;j++)
//   	{
//   		right=max(right,arr[j]);
//   	}
//   	CountWaters+=min(left,right)-arr[i];
//   }	
// }
// int main()
// {
// 	int n;
// 	int arr[100];
// 	cin>>n;
// 	for(int i=0;i<n;i++)
// 	{
// 		cin>>arr[i];
// 	}
// 	RainWater(arr,n);
// 	cout<<CountWaters<<endl;
// }




///////////////
// Below is 0(n) aproach

// #include<iostream>
// using namespace std;
// int main()
// {
// 	int n;
// 	int arr[100];
// 	int left[100];
// 	int right[100];

//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//     	cin>>arr[i];
//     }

//     left[0]=arr[0];

//     for(int i=1;i<n;i++)
//     {
//     	left[i-1]=max(left[i-1],arr[i]);
//     }
//     right[n-1]=arr[n-1];

//     for(int i=n-2;i>=0;i--)
//     {
//     	right[i]=max(right[i+1],arr[i]);
//     }
//     int water=0;
//     for(int i=0;i<n;i++)
//     {
//     	water+=min(left[i],right[i])-arr[i];
//     }
//     cout<<water<<endl;

// }