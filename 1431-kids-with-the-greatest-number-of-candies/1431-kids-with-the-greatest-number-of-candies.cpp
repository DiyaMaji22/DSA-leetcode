class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
       vector<bool>req;
       for(int i=0;i<candies.size();i++){
        if(candies[i]+extraCandies>=*max_element(candies.begin(),candies.end())){
            req.push_back(true);
        }
        else{
            req.push_back(false);
        }
       }
       return req; 
    }
};