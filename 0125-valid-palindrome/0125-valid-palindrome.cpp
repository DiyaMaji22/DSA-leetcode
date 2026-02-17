class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>arr;
        int length=s.size();
        int start=0;
        int end=length-1;
        
        while(start<=end)
            {
                if(isalnum(s[start])){
                    arr.push_back(tolower(s[start]));
                }
                start++;
            }
        start=0;
        end=arr.size()-1;
        
        while(start<=end){
            if(arr[start]!=arr[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
            
            
        
        
    }
};