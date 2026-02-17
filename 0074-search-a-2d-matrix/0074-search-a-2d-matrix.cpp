class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int columns=matrix[0].size();
        int start=0;
        int end=(rows*columns)-1;
        
        while(end>=start)
        {
            int mid=start+(end-start)/2;
            if(matrix[mid/columns][mid%columns]==target)
            {
                return true;
            }
            if(matrix[mid/columns][mid%columns]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            
        }
        return false;

    }
};