class Solution {
  public:
    bool minPages(vector<int>&arr,int mid,int students){
        int count=1;
        int pagecount=0;
        for(int i=0;i<arr.size();i++){
            if(pagecount+arr[i]>mid){
                count++;
                pagecount=arr[i];
                
            }else{
                pagecount+=arr[i];
            }
            
        }
        if(count<=students){
            return true;
        }
        return false;
    }
    int findPages(vector<int> &arr, int k) {
        // code here
        int length=arr.size();
        if (k > arr.size()) return -1;
        int left=*max_element(arr.begin(),arr.end());
        int right=accumulate(arr.begin(),arr.end(),0);
        while(left<=right){
            int mid=left+(right-left)/2;
            if(minPages(arr,mid,k)){
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        
     return left;   
    }
};