class Solution {
    public void solve (int[] candidates,List<List<Integer>>ans,List<Integer>output,int sum,int index,int target){
        if(index >= candidates.length || sum > target){
            if(target==sum){
                ans.add(new ArrayList<>(output));
            }
            return;
        }
        // if (index >= candidates.length || sum > target) {
        //     return;
        // }

        output.add(candidates[index]);
        sum=sum+candidates[index];
        solve(candidates,ans,output,sum,index,target);

        output.remove(output.size()-1);
        sum=sum-candidates[index];

       solve(candidates,ans,output,sum,index+1,target);
        

        

    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>>ans=new ArrayList<>();
        List<Integer>output=new ArrayList<>();
        solve(candidates,ans,output,0,0,target);
        return ans;
    }
}