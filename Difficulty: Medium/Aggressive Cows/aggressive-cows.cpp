class Solution {
  public:
    bool minDistance(vector<int>&arr,int val,int k){
        
        int length=arr.size();
        int cowsplaced=1;
        int lastplaced=arr[0];
        for(int i=1;i<length;i++){
          if(arr[i]-lastplaced>=val){
              cowsplaced++;
              lastplaced=arr[i];
          }
        
        }
         if(cowsplaced>=k){
             return true;
         }
        return false;
    }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
        sort(stalls.begin(),stalls.end());
        int length=stalls.size();
        int start=1;
        int end=stalls.back()-stalls.front();
        while(start<=end){
            int mid=start+(end-start)/2;
            if(minDistance(stalls,mid,k)){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return end;
        
        
    }
};