class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int length=nums.size();
        unordered_map<int,int>freq;
        int maxCount=0;
        int ans=0;
        for(int num:nums){
            freq[num]++;
        }
        for(auto&pair:freq){
            if(pair.second>maxCount){
                maxCount=pair.second;
                ans=pair.first;
            }
        }
        return ans;

        
    }
};