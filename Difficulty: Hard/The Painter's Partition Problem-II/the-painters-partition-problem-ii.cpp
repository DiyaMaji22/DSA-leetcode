class Solution {
  public:
    bool mindays(vector<int>&arr,int val,int boards){
        int boardcount=1;
        int units=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]+units>val){
                boardcount++;
                units=arr[i];
            }
            else{
                units=units+arr[i];
            }
        }
        if(boardcount<=boards){
            return true;
        }
        return false;
    }
    int minTime(vector<int>& arr, int k) {
        // code here
        int length=arr.size();
        int left=*max_element(arr.begin(),arr.end());
        int right=accumulate(arr.begin(),arr.end(),0);
        while(left<=right){
            int mid=left+(right-left)/2;
            
            if(mindays(arr,mid,k)){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return left;
        
    }
};