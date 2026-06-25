class Solution {
public:
    bool numberOfDigits(int num){
            int count=0;
            while(num!=0){
                count++;
                num=num/10;
            }
            if(count%2==0){
                return true;
            }
            return false;
        }
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(numberOfDigits(nums[i])){
                count++;
            }
        }
        return count;
    }
};