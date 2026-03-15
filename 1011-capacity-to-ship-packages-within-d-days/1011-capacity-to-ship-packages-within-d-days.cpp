class Solution {
public:
    bool mindays(vector<int>&arr,int wt,int days)
    {
        int day=1;
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum=sum+arr[i];
            if(sum>wt){
                day=day+1;
                sum=arr[i];
            }
        }
        if(day>days){
            return false;
        }
        return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int length=weights.size();
        int left=*max_element(weights.begin(),weights.end());
        int right=accumulate(weights.begin(),weights.end(),0);
        while(left<=right){
            int mid=left+(right-left)/2;
            
            if(mindays(weights,mid,days)){
               right=mid-1;
            }
            else{
                left=mid+1;
            }

            
        }
        return left;
    }
};