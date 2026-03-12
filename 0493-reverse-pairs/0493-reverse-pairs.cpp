class Solution {
public:
    int count=0;
    void merge(vector<int> &arr,int low,int mid,int high){
        vector<int>temp;
        int i=low;
        int j=mid+1;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=high){
            temp.push_back(arr[j]);
            j++;
        }
        for(int i=low;i<=high;i++){
            arr[i]=temp[i-low];

        }
    }
    void countPairs(vector<int> &arr,int low,int mid,int high){
        int j=mid+1;
        int right=mid+1;
        
        for(int i=low;i<=mid;i++){
            while(right<=high && arr[i]>2LL*arr[right]){
                 right++;
                
            }
            count=count+(right-(mid+1));
        }
      
    }
    void mergesort(vector<int> &arr,int low,int high){
        if(low>=high){
            return;
        }
        int mid=(low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        countPairs(arr,low,mid,high);
        merge(arr,low,mid,high);
    }
    int reversePairs(vector<int>& nums) {
        int length=nums.size();
       mergesort(nums,0,length-1);
        return count;
        
    }
};