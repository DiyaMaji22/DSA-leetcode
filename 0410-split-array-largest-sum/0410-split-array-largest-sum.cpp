class Solution {
public:
    bool countSubarrays(vector<int>&arr,int val,int k){
        int subcount=1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            if(sum+arr[i]>val){
                subcount++;
                sum=arr[i];
            }
            else{
                sum+=arr[i];
            }
        }
        if(subcount<=k){
            return true;
        }
    return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int length=nums.size();
        int left=*max_element(nums.begin(),nums.end());
        int right=accumulate(nums.begin(),nums.end(),0);
        while(left<=right){
            int mid=left+(right-left)/2;
            if(countSubarrays(nums,mid,k)){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return left;
        
    }
};