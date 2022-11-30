// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
//  int compress(vector<char>& chars) {
        
//         vector<string> result;
//         string stemp="";
//         int n=chars.size();
//         int count;
//         char temp='0';


//         for(int i=0;i<n;i++)
//         {
//         	if(temp=='0')
//         	{
//         		temp=chars[i];
//         		count=1;
//         		continue;
//         	}
//         	if(temp==chars[i])
//         	{
//         		count++;
//         	}
//         	else{
//         		result.push_back(to_string(chars[i-1]));
//         		result.push_back(to_string(count));
//         		count=1;
//         		temp=chars[i];
//         	}
//         }

//         result.push_back(to_string(chars[n-1]));
//         result.push_back(to_string(count));

//         for(int i=0;i<result.size();i++)
//         {
//           stemp+=result[i];
//         }
//         return stemp.size();

//         // result.clear();
        
//         // for(int i=0;i<stemp.size();i++)
//         // {
//         // 	if(stemp[i]>=65 && stemp[i]<=122)
//         // 	{
//         // 		result.push_back(stemp[i]);
//         // 	}
//         // }


//         // cout<<stemp<<endl;
//     }
// int main()
// {
//   int n;
//   char x;
//   cin>>n;
//   vector<char> v;
  
//   for(int i=0;i<n;i++)
//   {
//     cin>>x;
//     v.push_back(x);
//   }
//   compress(v);
//   return 0;
// }


// #include<iostream>
// #include<climits>
// #include<vector>
// #include<algorithm>
// using namespace std;
//  int longestMountain(vector<int>& arr) {
//  int n=arr.size();
//  int count;
//  int maxCount=0;

//   for(int i=1;i<n-1;)
//   {
//   	if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
//   	{
//   		int j=i;
//   		count=1;
//   		while(j>0 && arr[j-1]<arr[j])
//   		{
//   			count++;
//   			j--;
//   		}
//   		while(i<n-1 && arr[i]>arr[i+1])
//   		{
//   			count++;
//   			i++;
//   		}
//   		maxCount=max(maxCount,count);
//   	}
//   	else{
//   		i++;
//   	}
//   }
//   return maxCount;
//  }
// int main()
// {
//   int n;
//   int x;
//   cin>>n;
//   vector<int> v;
  
//   for(int i=0;i<n;i++)
//   {
//     cin>>x;
//     v.push_back(x);
//   }

//    cout<<longestMountain(v)<<endl;
//   return 0;
// }


// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int isPossible(vector<int>& weights,int days,int min)
// {
// 	int n=weights.size();
// 	int curdays=1;
// 	int transfering=0;

// 	for(int i=0;i<n;i++)
// 	{
// 		if(transfering+weights[i]>min)
// 		{
// 			curdays++;
// 			transfering=weights[i];
// 			if(curdays>min)
// 				return false;
// 		}
// 		else{
// 			transfering+=weights[i];
// 		}

// 	}
// 	return true;

// }
// int shipWithinDays(vector<int>& weights, int days) {

//     int n=weights.size();
// 	int low=0;
//     int sum=0;
//     int ans=INT_MAX;

//     if(n<days)
//     	return -1;

//     for(int i=0;i<n;i++)
//     {
//     	sum+=weights[i];
//     }

// 	int high=sum;
// 	int mid;

// 	while(low<=high)
// 	{
// 		mid=(low+high)/2;
// 		if(isPossible(weights,days,mid))
// 		{
// 			ans=min(ans,mid);
// 			high=mid-1;
// 		}
// 		else{
// 			low=mid+1;
// 		}
// 	}
// 	return ans;
        
// }

// int main()
// {
//   int n;
//   int days;
//   int x;
//   cin>>n;
//   cin>>days;
//   vector<int> v;
  
//   for(int i=0;i<n;i++)
//   {
//     cin>>x;
//     v.push_back(x);
//   }

//  cout<<shipWithinDays(v,days)<<endl;
//   return 0;
// }



#include<iostream>
#include<algorithm>
using namespace std;
bool isPossible(int arr[100],int n,int k,int min)
{
	int cursum=0;
	int painter=1;
	for(int i=0;i<n;i++)
	{
		cursum+=arr[i];
		if(cursum>min)
		{
			painter++;
			cursum=arr[i];
			if(painter>k)
				return false;

		}
	}
	return true;
}
int minTime(int arr[100],int n,int k)
{
	int low=0;
	int sum=0;

	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	int high=sum;
	int mid;
	int ans=0;

	while(low<=high)
	{
		mid=(low+high)/2;
		if(isPossible(arr,n,k,mid))
		{
			ans=mid;
			high=mid-1;
		}
		else{
			low=mid+1;
		}

	}
	return ans;
}
int main()
{
	int n;
	int k;
	int arr[100];
	cin>>n;
	cin>>k;

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

  cout<<minTime(arr,n,k)<<endl;
	return 0;
}