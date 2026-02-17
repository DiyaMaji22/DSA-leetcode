class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>>arr(m,vector<int>(n));
        int length=original.size();
        int count=0;
        if(length!=m*n)
        {
            return {};
        }
        for(int i=0;i<m && count<length;i++)
        {
            
            for(int j=0;j<n && count<length;j++)
            {
                arr[i][j]=original[count++];
            }
            
        }
        return arr;
    }
};