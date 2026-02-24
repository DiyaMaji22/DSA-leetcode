class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int num:nums){
            freq[num]++;
        }
        int length=nums.size();
        for(auto &pair:freq){
            if(pair.second>length/3){
                ans.push_back(pair.first);
            }
            
        }
     return ans;  
    }
};