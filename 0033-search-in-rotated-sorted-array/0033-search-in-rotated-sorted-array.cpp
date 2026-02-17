class Solution {
public:
    int search(vector<int>& nums, int target) {
        int length=nums.size();
        int start=0;
        int end=length-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[start]>nums[mid]){
                if(target>nums[mid] && target<=nums[end]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
            else if(nums[start]<=nums[mid]){
                if(target>=nums[start] && target<nums[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
        }
      return -1;  
    }
};