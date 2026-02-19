class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int length=nums.size();
        int maxcount=0;
        int count=0;   
        for(int i=0;i<length;i++){
            if(nums[i]==1){
                count++;
            }
            if(nums[i]==0){
                maxcount=max(count,maxcount);
                count=0;
            }
        maxcount=max(count,maxcount);  
        }
     return maxcount;   
    }
};