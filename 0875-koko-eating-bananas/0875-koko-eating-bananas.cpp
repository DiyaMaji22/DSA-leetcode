class Solution {
public:
    long long func(vector<int>piles,int val){
        long long result=0;
        for(int i=0;i<piles.size();i++){
            result=result+(ceil(piles[i]+val-1)/val);
        }
        return result;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int length=piles.size();
        int left=1;
        int right=*max_element(piles.begin(),piles.end());
        while(left<=right){
            int mid=left+(right-left)/2;
            long long val=func(piles,mid);

            if(val>h){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
     return left;   
    }
};