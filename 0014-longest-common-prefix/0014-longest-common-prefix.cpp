class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int length=strs.size();
        string ans="";
        string first=strs[0];
        string last=strs[length-1];
        int n=min(first.size(),last.size());
        for(int i=0;i<n;i++){
            if(first[i]==last[i]){
                ans.push_back(first[i]);
            }
            else{
                break;
            }
        }
     return ans;  
    }
};