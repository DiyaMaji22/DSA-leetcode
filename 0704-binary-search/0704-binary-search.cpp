class Solution {
public:
    int search(vector<int>& nums, int target) {
                int length=nums.size();
                int start=0;
                int end=length-1;
                if(length==1){
                   return nums[0]==target?0:-1;
                }
                while(start<=end){
                    int mid=start+(end-start)/2;
                    if(nums[mid]==target){
                        return mid;
                    }
                    if(nums[mid]<target){
                         start=mid+1;
                    }
                    else{
                        end=mid-1;
                    }
                }
    return -1;
        
    }
};