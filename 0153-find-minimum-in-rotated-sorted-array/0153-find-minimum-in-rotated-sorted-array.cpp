class Solution {
public:
    int findMin(vector<int>& nums) {
        int length=nums.size();
        int start=0;
        int end=length-1;
        int mini=INT_MAX;
        if(length==1){
            return nums[length-1];
        }
        while(start<=end){
            int mid=start+(end-start)/2;
            mini=min(nums[mid],mini);
            if(nums[start]<=nums[mid]){
                mini=min(nums[start],mini);
                start=mid+1;
            }
            else{
                mini=min(nums[end],mini);
                end=mid-1;
            }
        }
return mini;
    }
    
    

};