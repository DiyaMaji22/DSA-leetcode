class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int length=nums.size();
        int total=0;
        for(int i=0;i<length;i++){
            if(nums[i]==1){
                total++;
            }
        }
        // WE ARE TALKING ABOUT THE PARTICULAR WINDOW
        if(total<=1) return 0;
        int maxOnes=0;
        int totalsum=0;
        for(int i=0;i<2*length;i++){
            totalsum=totalsum+nums[i%length]; //counting the number of ones in the current window
            if(i>=total){
                totalsum=totalsum-nums[(i-total)%length];
            }
            maxOnes=max(totalsum,maxOnes);


            
        }
        return total-maxOnes;


        
    }
};