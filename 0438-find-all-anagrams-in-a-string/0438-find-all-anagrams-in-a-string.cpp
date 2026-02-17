class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>phash(26,0);
        vector<int>shash(26,0);
        vector<int>ans;
        for(int i=0;i<p.size();i++){
            phash[p[i]-'a']++;
        }
        for(int i=0;i<s.size();i++){
            shash[s[i]-'a']++;

            if(i>=p.size()){
                shash[s[i-p.size()]-'a']--;
            }
        if(phash==shash){
            ans.push_back(i-p.size()+1);
        }
            
        }

       return ans; 
        
    }
};