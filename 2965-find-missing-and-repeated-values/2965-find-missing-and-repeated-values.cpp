class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>freq(n*n+1,0);
        vector<int>result;
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[0].size();j++){
                freq[grid[i][j]]++;
            }
        }
        int repeating=-1;
        int missing=-1;
        int length=freq.size();
        for(int i=1;i<length;i++){
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