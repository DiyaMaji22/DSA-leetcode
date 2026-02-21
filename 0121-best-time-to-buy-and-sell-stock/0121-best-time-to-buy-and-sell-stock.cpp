class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int length=prices.size();
        int maxDiff=0;
        int minPrice=prices[0];
        for(int i=0;i<length;i++){
            if(prices[i]<minPrice){
                minPrice=prices[i];
            }
            int currentDiff=prices[i]-minPrice;
            maxDiff=max(currentDiff,maxDiff);

        }
        return maxDiff;
    }
};