class Solution {
    void solve(int open,int close,List<String>ans,int n,String str){
        if(str.length()==2*n){
            ans.add(str);
            return;
        }
        if(open<n){
            solve(open+1,close,ans,n,str+'(');
        }
        if(close<open){
            solve(open,close+1,ans,n,str+')');
        }
        
    }
    public List<String> generateParenthesis(int n) {
        List<String>ans=new ArrayList<>();
        String str="";
        solve(0,0,ans,n,"");
        return ans;

    }
}