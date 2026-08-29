class Solution {
    void solve(int[] nums, List<List<Integer>>ans,int index){
        if(index==nums.length){
            List<Integer>output=new ArrayList<>();
            for(int i=0;i<nums.length;i++){
                output.add(nums[i]);

            }
            ans.add(output);
            return;
        }
        for(int i=index;i<nums.length;i++){
            swap(i,index,nums);
            solve(nums,ans,index+1);
            swap(i,index,nums);
        }
    }
    void swap(int i,int j,int[] nums){
        int t=nums[i];
        nums[i]=nums[j];
        nums[j]=t;
    }
    public List<List<Integer>> permute(int[] nums) {
       List<List<Integer>>ans=new ArrayList<>();
       solve(nums,ans,0); 
       return ans;
    }
}