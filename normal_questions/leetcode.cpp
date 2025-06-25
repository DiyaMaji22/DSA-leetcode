// Finding duplicates in an arrray
#include <bits/stdc++.h>
using namespace std;
// int findduplicate(vector<int> &nums)
// {
//   int length=nums.size();
//   unordered_map<int,int>frequency;
//   for(int num:nums)
//   {
//     frequency[num]++;
//   }  
// unordered_set<int>duplicates;
// for(auto& [value,count]:nums)
// {
//     if(count>2)
//     {
//         return value;
//     }
// }
// }
// Finding the first occurence and last occurence 
// int firstoccurence(int arr[],int n,int key)
// {
//   int start=0;
//   int end=n-1;
//   int mid=start+(end-start)/2;
//   int ans=-1;
//   while(start<=end)
//   {
//     if(arr[mid]==key )
//     {
//       ans=mid;
//       end=mid-1;
      
//     }
//     if(arr[mid]<key)
//     {
//       start=mid+1;
//     }
//     if(arr[mid]>key)
//     {
//       end=mid-1;
//     }
//     mid=start+(start-end)/2;
//   }
//   return ans;
// }
// int lastoccurence(int arr[],int n,int key)
// {
//   int start=0;
//   int end=n-1;
//   int mid=start+(end-start)/2;
//   int ans=-1;
//   while(start<=end)
//   {
//     if(arr[mid]==key )
//     {
//       ans=mid;
//       start=mid+1;
//     }
//     if(arr[mid]<key)
//     {
//       start=mid+1;
//     }
//     if(arr[mid]>key)
//     {
//       end=mid-1;
//     }
//     mid=start+(start-end)/2;
//   }
//   return ans;
// }
// int main()
// {
//   int even[5]={1,2,3,5,5};
//   cout<<"Firstoccurence "<<firstoccurence(even,5,5);
//   cout<<"lastoccurence "<<lastoccurence(even,5,5);
// }
// Find the pivot(finding the smallest)
int findingpivot(vector<int>arr)
{
  int length=arr.size();
  int start=0;
  int end=length-1;
  int mid=start+(end-start)/2;
  while(start<end)
  {
    if(arr[mid]>=arr[0])
    {
      start=mid+1;
    }
    if(arr[mid]<arr[0])
    {
      end=mid-1;
    }

  }
  
}