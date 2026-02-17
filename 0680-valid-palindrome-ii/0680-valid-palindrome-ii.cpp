class Solution {
public:
    bool isPalin(string s,int l,int r){
        while(l<r){
            if(s[l]!=s[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
      
      int start=0;
      int end=s.size()-1;
      int count=0;
      while(start<end){
        if(s[start]==s[end]){
            start++;
            end--;
        }
        else{
            if(isPalin(s,start+1,end) || isPalin(s,start,end-1))
            {
            return true;
            }
            else {
                return false;
            }
        }
        
      }
      return true;
    }
    
};