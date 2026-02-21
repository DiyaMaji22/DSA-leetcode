class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int length=nums.size();
        int currentsum=0;
        int maxSum=nums[0];
        if(length==1){
            return nums[length-1];
        }
        
        for(int i=0;i<length;i++){
            currentsum=max(nums[i],currentsum+nums[i]);
            maxSum=max(currentsum,maxSum);


        }
      return maxSum;  
    }
};