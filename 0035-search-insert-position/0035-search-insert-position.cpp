class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int length=nums.size();
        int count=0;
        for(int i=0;i<length;i++){
            if(nums[i]==target){
                return i;
                count++;
            }
        
        }
        if(count==0){
            for(int i=0;i<length;i++){
                if(nums[i]>target){
                    return i;
                    break;
                }
               
            }
        }
       return length; 
    }
};