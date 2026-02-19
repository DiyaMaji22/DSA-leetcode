class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int length=nums.size();
        
        for(int i=0;i<length;i++){
            int start=i+1;
            while(start<length){
            int sum=nums[i]+nums[start];
            if(sum==target){
                return {i,start};
            }
            else{
                start++;
            }
            }
            
            
        }
        
       return {}; 
    }
};