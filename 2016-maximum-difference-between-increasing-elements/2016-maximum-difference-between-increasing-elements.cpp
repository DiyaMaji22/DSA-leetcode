class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int length=nums.size();
        int max=0;
        for(int i=0;i<=length;i++)
        {
            int j=i+1;
            while(j<length)
            {
               if(nums[j]-nums[i]>max)
               {
                max=nums[j]-nums[i];
               }
               j++;
            }
        }
        if(max==0)
        {
            return -1;

        }
        return max;
        
    }
};