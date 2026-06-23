class Solution {
  public:

    string removeVowels(string& s) {
        // Your code goes here
        string ans="";
        for(char c:s){
            if(c=='a' || c=='i' || c=='o' || c=='e' || c=='u'){
                continue;
            }
            else{
                ans.push_back(c);
            }
        }
        return ans;
    }
};