class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int length=nums.size();
        int start=0;
        int end=1;
        int index=0;
        while(end<length){
            if(nums[start]==nums[end]){
                start=start+2;
                end=end+2;
            }
            else{
               return nums[start];
            }
        }
      return nums[length-1];  
    }
};