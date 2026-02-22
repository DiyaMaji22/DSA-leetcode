class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        for(int i=0;i<rows;i++)
        {
            for(int j=i+1;j<columns;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<rows;i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
        // for(int i=0;i<rows;i++)
        // {
        //     for(int j=0;j<columns;j++)
        //     {
        //         cout<<matrix[i][j]<<" ";
        //     }
        // }
        
        
    }
};