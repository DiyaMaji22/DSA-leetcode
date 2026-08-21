class Solution {
    void solve(List<List<Integer>>ans, List<Integer>output,int[] nums,int index){
        ans.add(new ArrayList<>(output));
        
        for(int i=index;i<nums.length;i++){
            if(index < i && nums[i]==nums[i-1]){
                continue;
            }
            output.add(nums[i]);
            solve(ans,output,nums,i+1);

            output.remove(output.size()-1);
            
        }


    }
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>>ans=new ArrayList<>();
        List<Integer>output=new ArrayList<>();
        solve(ans,output,nums,0);
        
        return ans;
        
    }
}