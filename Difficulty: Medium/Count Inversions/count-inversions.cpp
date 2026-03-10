
class Solution {
  public:
    int merge(vector<int>&arr,int left,int mid,int right){
        vector<int>temp;
        int i=left;
        int j=mid+1;
        long long count=0;
        while(i<=mid && j<=right){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                count+=(mid-i+1);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=right){
            temp.push_back(arr[j]);
            j++;
        }
        for(int k=left;k<=right;k++){
            arr[k]=temp[k-left];
        }
      return count;  
    }
    long long mergesort(vector<int>&arr,int left,int right){
        long long count=0;
        if(left<right){
            int mid=(left+right)/2;
            
            count+=mergesort(arr,left,mid);
            count+=mergesort(arr,mid+1,right);
            count+=merge(arr,left,mid,right);
        }
        return count;
    }
    int inversionCount(vector<int> &arr) {
        // Code Here
        return mergesort(arr, 0, arr.size() - 1);
        
    }
};