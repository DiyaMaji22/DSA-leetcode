class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>arr;
        int leftsum=0;
        for(int i=0;i<nums.size();i++){
            leftsum=leftsum+nums[i];
            arr.push_back(leftsum);

        }
        return arr;
    }
};