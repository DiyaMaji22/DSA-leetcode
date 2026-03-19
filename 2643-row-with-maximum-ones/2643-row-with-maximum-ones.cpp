class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int rows=mat.size();
        int column=mat[0].size();
        int maxcount=0;
        int index=0;
        vector<int>ans;
        for(int i=0;i<rows;i++){
            int count=0;
            for(int j=0;j<column;j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>maxcount){
                maxcount=count;
                index=i;
            }
        }
        ans.push_back(index);
        ans.push_back(maxcount);
        return ans;

        
    }
    
};