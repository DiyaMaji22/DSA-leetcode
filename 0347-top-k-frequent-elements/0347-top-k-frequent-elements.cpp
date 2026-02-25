class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int length=nums.size();
       priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;
        unordered_map<int,int>freq;
        for(int num:nums){
            freq[num]++;
        }
        for(auto pair:freq){
            pq.push({pair.second,pair.first});
            if(pq.size()>k){
                pq.pop();
            }

        }
        vector<int>ans;
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }
      return ans;  
    }
};