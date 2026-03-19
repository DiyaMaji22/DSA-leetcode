class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int n1=nums1.size();
       int n2=nums2.size();
       int n=n1+n2;
       int index1=n/2;
       int index2=n/2-1;
       int i=0;
       int j=0;
       int count=0;
       int indel1=-1,indel2=-1;
       while(i<n1 && j<n2){
            if(nums1[i]<nums2[j]){
                if(count==index1) indel1=nums1[i];
                if(n%2==0 && count==index2) indel2=nums1[i];
                count++;
                i++;
            }
            else{
                if(count==index1) indel1=nums2[j];
                if(n%2==0 && count==index2) indel2=nums2[j];
                count++;
                j++;
            }
       }
       while(i<n1){
         if(count==index1) indel1=nums1[i];
         if(n%2==0 && count==index2) indel2=nums1[i];
         count++;
         i++;
       } 
       while(j<n2){
        if(count==index1) indel1=nums2[j];
        if(n%2==0 && count==index2) indel2=nums2[j];
        count++;
        j++;
       }
       if(n%2==1){
        return indel1;
       }
       return (double)((double)(indel1+indel2))/2.0;
    }
};