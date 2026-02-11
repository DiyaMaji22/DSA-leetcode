class Solution {
public:
    int firstoccurence(vector<int>&arr,int target){
        int length=arr.size();
        int start=0;
        int end=length-1;
        int first=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==target){
                first=mid;
                end=mid-1;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return first;

    }
    int lastocurrrence(vector<int>&arr,int target){
        int length=arr.size();
        int start=0;
        int end=length-1;
        int last=-1;
         while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==target){
                last=mid;
                start=mid+1;
            }
            else if(arr[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return last;

        

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=firstoccurence(nums,target);
        int last=lastocurrrence(nums,target);
        return {first,last};
        
        
    }
};