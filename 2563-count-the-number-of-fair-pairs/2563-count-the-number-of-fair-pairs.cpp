class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        int size=nums.size();
        int start=0;
        int end=size-1;
        long long countUpper=0;
        long long countLower=0;
        sort(nums.begin(),nums.end());
        while(start<end){
            if(nums[start]+nums[end]<=upper){
                countUpper=countUpper+(end-start);
                start++;
            }
            else{
                end--;
            }
        }
        start=0;
        end=size-1;
        while(start<end){
            if(nums[start]+nums[end]<lower){
                countLower=countLower+(end-start);
                start++;

            }
            else{
                end--;
            }
        }
       return countUpper-countLower; 
    }
};