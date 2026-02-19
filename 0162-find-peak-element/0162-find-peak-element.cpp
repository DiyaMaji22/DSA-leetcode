class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int length=nums.size();
        int start=0;
        int end=length-1;
        int max=0;
        if(length==1){
            return length-1;
        }
        if(length==2){
           
            return (nums[0]>nums[1])?0:1;
        }
        
        while(start<end){
           int mid=start+(end-start)/2; 
           if(nums[mid]>nums[mid+1]){
            end=mid;
           }
           else{
            start=mid+1;
           }
        }
      return start;  
    }
};