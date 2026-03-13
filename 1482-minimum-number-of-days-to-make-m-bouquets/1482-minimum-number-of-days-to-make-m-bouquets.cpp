class Solution {
public:
    bool func(vector<int>&arr,int days,int m,int k){
        int count=0;
        int bouquet=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<=days){
                count++;
            }
            else{
                bouquet=bouquet+count/k;
                count=0;
            }
        }
        bouquet=bouquet+count/k;
        if(bouquet>=m) return true;
        return false;
        
    };
    int minDays(vector<int>& bloomDay, int m, int k) {
       if((long long)m*k>bloomDay.size()) return -1;
       int left=*min_element(bloomDay.begin(),bloomDay.end());
       int right=*max_element(bloomDay.begin(),bloomDay.end());
       int ans=-1;
       
       while(left<=right){
            int mid=left+(right-left)/2;

            if(func(bloomDay,mid,m,k)){
                ans=mid;
                right=mid-1;
            }
            else{
                left=mid+1;
            }
       } 
       return ans;
    }
};