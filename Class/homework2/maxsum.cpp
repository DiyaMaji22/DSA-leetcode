class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int length=nums.size();
        unordered_map<int,int>freq;
        
        long long int currentSum=0;
        long long int maxSum=0;
        for(int i=0;i<length;i++){
            currentSum=currentSum+nums[i];
            freq[nums[i]]++;
            if(i>=k){
                currentSum=currentSum-nums[i-k];
                freq[nums[i-k]]--;
                if(freq[nums[i-k]]==0){
                    freq.erase(nums[i-k]);
                }
                
            }
            if(i>=k-1 && freq.size()==k){
                    maxSum=max(currentSum,maxSum);
                }
           
            

        }
        return maxSum;
    }
};