class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int length=nums.size();
        int pos=0;
        int negative=1;
        vector<int>ans(length,0);
        for(int i=0;i<length;i++){
            if(nums[i]>0){
                ans[pos]=nums[i];
                pos=pos+2;
            }
            else{
                ans[negative]=nums[i];
                negative=negative+2;
            }
        }
      return ans;  
    }
};