class Solution {
public:
    bool isIsomorphic(string s, string t) {
    if(s.size()!=t.size()){
        return false;
    }
       unordered_map<char,char>mapping;
       int length=s.size();
       for(int i=0;i<length;i++){
         char original=s[i];
         char replacement=t[i];
         if(mapping.count(original)){
            if(mapping[original]!=replacement){
                return false;
            }
         }
         else{
            for(auto it:mapping){
                if(it.second==replacement){
                    return false;
                }
            }
            mapping[original]=replacement;
         }
       }
       return true; 
    }
};