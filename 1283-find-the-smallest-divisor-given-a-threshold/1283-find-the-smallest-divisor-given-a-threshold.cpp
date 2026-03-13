class Solution {
public:
    bool func(vector<int>&arr,int val,int threshold){
        int sum=0;
        for(int i=0;i<arr.size();i++){
           sum=sum+((arr[i]+val-1)/val); 
        }
        if(sum>threshold) return false;
        return true;
        
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left=1;
        int right=*max_element(nums.begin(),nums.end());
        while(left<=right){
            int mid=left+(right-left)/2;
            if(func(nums,mid,threshold)){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
            
        }
        return left;
    }
};