class Solution {
  public:
    int power(int base,int n){
        int result=1;
        for(int i=0;i<n;i++){
             result=result*base;
        }
        return result;
        
    }
    int nthRoot(int n, int m) {
        // Code here
        int left=1;
        int right=m;
        if(m==0){
            return 0;
        }
        while(left<=right){
           int mid=left+(right-left)/2;
           int val=power(mid,n);
           
           if(val==m){
               return mid;
           }
           else if(val<m){
               
               left=mid+1;
           }
           else{
               right=mid-1;
           }    
        }
    return -1;
    }
};