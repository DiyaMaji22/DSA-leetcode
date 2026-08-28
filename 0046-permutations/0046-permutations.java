class Solution {
    void solve(List<List<Integer>>ans,List<Integer>output, boolean[] freq,int[] nums){
        if(output.size() == nums.length){
            ans.add(new ArrayList<>(output));
            return;
        }
        for(int i=0;i<nums.length;i++){
            if(!freq[i]){
                freq[i]=true;
                output.add(nums[i]);

            solve(ans,output,freq,nums);
            freq[i]=false;
            output.remove(output.size()-1);
            }
        }

    }
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>>ans=new ArrayList<>();
        List<Integer>output=new ArrayList<>();
        boolean[] freq=new boolean[nums.length];
        solve(ans,output,freq,nums);
        return ans;
    }
}