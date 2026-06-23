class Solution {
  public:
    string removeChars(string &s) {
        // code here
        int j=0;
        for(int i=0;i<s.size();i++){
            if((s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z')  ){
                s[j++]=s[i];   
            }
        
        }
        s.resize(j);
        return s;
        
    }
};