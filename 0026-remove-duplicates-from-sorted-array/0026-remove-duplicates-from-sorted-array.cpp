class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int length=nums.size();
       
       int position=1;
       for(int i=1;i<length;i++){
            if(nums[i]!=nums[i-1]){
                nums[position]=nums[i];
                position++;
            }
       }
    return position;

        
    }
};