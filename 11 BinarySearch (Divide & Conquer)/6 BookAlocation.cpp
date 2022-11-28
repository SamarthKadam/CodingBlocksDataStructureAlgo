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

#include<iostream>
#include<climits>
using namespace std;
bool isPossible(int arr[100],int n,int m,int min)
{
	int studentUsed=1;
	int pagesReading=0;

	for(int i=0;i<n;i++)
	{
		if(pagesReading+arr[i]>min)
		{
			studentUsed++;
			pagesReading=arr[i];
			if(studentUsed>m)
			{
				return false;
			}
		}
		else{
			pagesReading=pagesReading+arr[i];
		}
	}

}
int findPages(int arr[100],int n,int m)
{
	int sum=0;
	if(n<m)
	return -1;

    for(int i=0;i<n;i++)
    {
    	sum+=arr[i];
    }
    int low=0;
    int ans=INT_MAX;
    int high=sum;

    while(low<=high)
    {
    	int mid=(low+high)/2;

    	if(isPossible(arr,n,m,mid))
    	{
    		high=mid-1;
    		ans=min(ans,mid);
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
	int m;
	cin>>n;
	cin>>m;
	int arr[100];

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<findPages(arr,n,m);
	return 0;
}