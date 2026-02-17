class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        
        for(int i=0;i<size;i++){
           int position=i+1;
            while(position<size){
                if(nums[i]+nums[position]==target){
                    return{i,position};
                }
                else{
                    position++;
                }
            }
        }
        return {};
        
    }
};