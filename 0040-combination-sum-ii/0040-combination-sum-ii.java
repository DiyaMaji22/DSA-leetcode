class Solution {
    void solve( List<List<Integer>>ans, List<Integer>output,int[] candidates,int index,int target){
        if(target==0){
                ans.add(new ArrayList<>(output));
                return;
            }
            
    
        for(int i=index;i<candidates.length;i++){
            if(i>index && candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>target){
                break;
            }
        output.add(candidates[i]);
        
        solve(ans,output,candidates,i+1,target-candidates[i]);

        output.remove(output.size()-1);
       

        
        }

        
    }
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        Arrays.sort(candidates);
        List<List<Integer>>ans=new ArrayList<>();
        List<Integer>output=new ArrayList<>();
        solve(ans,output,candidates,0,target);
        return new ArrayList<>(ans);
    }
}