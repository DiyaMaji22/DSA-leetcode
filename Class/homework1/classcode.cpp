// class Solution {
//   public:
//     vector<int> firstAndLast(int x, vector<int> &arr) {
//         // Code here
//         int l=arr.size();
//         vector<int>arr2;
//         int index1=-1;
//         int index2=-1;
//          for(int i=0;i<l;i++){
//               if(arr[i]==x){
//                   index1=i;
//                   break;
//               }
              
//           }
//           if(index1==-1){
//               return {-1};
//           }
         
//           for(int i=index1;i<l;i++){
//              if(arr[i]==x){
//                   index2=i;
                 
//               }
              
//           }
//            arr2.push_back(index1);
//           arr2.push_back(index2);
//           return arr2;
//     }
    
// };
// class Solution {
//   public:
//     vector<int> firstAndLast(int x, vector<int> &arr) {
//         // Code here
//         vector<int>ans;
//         int l=arr.size();
//        int start=0;
//        int end=l-1;
//        int index1=-1;
//        int index2=-1;
//        while(start<=end){
//            int mid=start+(end-start)/2;
//            if(arr[mid]==x){
//                index1=mid;
//                end=mid-1;
//            }
//            else if(arr[mid]<x){
//                start=mid+1;
//            }
//            else{
//                end=mid-1;
//            }
           
//     }
//     if(index1==-1){
//         return {-1};
//     }
    
//     start=0;
//     end=l-1;
//     while(start<=end){
//         int mid=start+(end-start)/2;
//          if (arr[mid] == x) {
//                 index2 = mid;
//                 start = mid + 1;    
//             }
//             else if (arr[mid] < x) {
//                 start = mid + 1;
//             }
//             else {
//                 end = mid - 1;
//             }
//         }
        
//    return{index1,index2};
//     }
   
    
    
// };
// Selection Sort
#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int length;
//     cin>>length;
//     vector<int>arr;
//     int num;
//     int min_index;
//     for(int i=0;i<length;i++){
//         cin>>num;
//         arr.push_back(num);
//     }
//     for(int i=0;i<length;i++){
//         min_index=i;
//         for(int j=i+1;j<length;j++){
//             if(arr[j]<arr[i]){
//                 min_index=j;
//             }
//         }
//         swap(arr[i],arr[min_index]);
//     }
//     for(int i=0;i<length;i++){
//         cout<<arr[i];
//     }


// }
// Insertion sort
int main(){
    int length;
    cin>>length;
    vector<int>arr(length);
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    
    // Insertion Sort
    for(int i=1;i<length;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    
    for(int i=0;i<length;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}                        
