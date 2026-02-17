class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& nums) {
        int i=0;
        int j=0;
        int count=0;
        int size=nums.size();
        sort(nums.begin(),nums.end());
        while(i<size/2 && j<size){
            if(2*nums[i]<=nums[j]){
                count=count+2;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
     return count;   
    }
};