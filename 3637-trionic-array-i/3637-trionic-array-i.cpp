class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        if(nums.size()<4){
            return false;
        }
        int p=-1;int q=-1;
        for(int i=0;i+1<nums.size();i++){
            if(nums[i+1]>nums[i]){
                p=i+1;
            }
            else{
                break;
            }
        }
        if(p<=0){
            return false;
        }
        for(int i=p;i+1<nums.size();i++){
            if(nums[i+1]<nums[i]){
                q=i+1;
            }
            else{
                break;
            }
        }
        if(q<=p){
            return false;
        }
        bool increased=false;
        for(int i=q;i+1<nums.size();i++){
            if(nums[i+1]<=nums[i]){
                return false;
                
            }
            increased=true;
        }
        return increased;
        
    }
};