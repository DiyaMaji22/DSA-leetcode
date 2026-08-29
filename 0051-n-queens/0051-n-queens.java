class Solution {
    boolean issafe(int row,int col,List<List<String>>ans,char[][]output,int n){
        int duprow=row;
        int dupcol=col;
        while(row>=0 && col>=0){
            if(output[row][col]=='Q'){
                return false;
            }
            row--;
            col--;
        }
        row=duprow;
        col=dupcol;
        while(col>=0){
            if(output[row][col]=='Q'){
                return false;
            }
            col--;
        }
        row=duprow;
        col=dupcol;
        while(row<n && col>=0){
            if(output[row][col]=='Q'){
                return false;
            }
            row++;
            col--;
        }
        return true;
    }
    void solve(int col,List<List<String>>ans,char[][]output,int n){
        if(col==n){
            List<String>temp=new ArrayList<>();
            for(int i=0;i<n;i++){
                temp.add(new String(output[i]));
            }
            ans.add(temp);
            return;
        }
        for(int row=0;row<n;row++){
            if(issafe(row,col,ans,output,n)){
                output[row][col]='Q';
                solve(col+1,ans,output,n);
                output[row][col]='.';
            }
        }

    }
    public List<List<String>> solveNQueens(int n) {
        List<List<String>>ans=new ArrayList<>();
        char [][] output=new char[n][n];
       for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                    output[i][j] = '.';
             }
        }
        
        solve(0,ans,output,n);
        return ans;
    }
}