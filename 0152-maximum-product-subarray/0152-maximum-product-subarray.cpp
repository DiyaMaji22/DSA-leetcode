class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int length=nums.size();
        int maxproduct=nums[0];
        int currentproduct=nums[0];
        int currentmin=nums[0];
        for(int i=1;i<length;i++){
            
            if(nums[i]<0){
                swap(currentproduct,currentmin);
            }
            currentproduct=max(nums[i],currentproduct*nums[i]);
            currentmin=min(nums[i],currentmin*nums[i]);
            maxproduct=max(currentproduct,maxproduct);
        }
     return maxproduct;   
    }
};