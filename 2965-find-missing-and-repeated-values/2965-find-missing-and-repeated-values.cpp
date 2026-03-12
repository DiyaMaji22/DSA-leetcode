class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>temp;
        vector<int>result;
        unordered_map<int,int>freq;
        int rows=grid.size();
        int cols=grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                temp.push_back(grid[i][j]);
            }
        }
        sort(temp.begin(),temp.end());
        int length=temp.size();
        for(int i=0;i<length;i++){
            freq[temp[i]]++;
        }
        int repeating=-1,missing=-1;
        for(int i=1;i<=rows*cols;i++){
            if(freq[i]==2){
                repeating=i;
            }
            else if(freq[i]==0){
                missing=i;
            }
        
        }
        result.push_back(repeating);
        result.push_back(missing);
        return result;
    }
};