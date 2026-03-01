class Solution {
public:
    vector<int>generateRow(int rowNumber){
        vector<int>ans;
        long long result=1;
        ans.push_back(1);
        for(int col=1;col<rowNumber;col++){
            result=result*(rowNumber-col);
            result=result/col;
            ans.push_back(result);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            vector<int>temp=generateRow(i);
            ans.push_back(temp);
        }
     return ans;   
    }
};