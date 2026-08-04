class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size=nums.size();
        unordered_map<int,int>freq;
        for(int c:nums){
                freq[c]++;
        }
        for(auto &pair:freq){
            if(pair.second>1){
                return true;
            }
        }
        return false;
    }    

};