class Solution {
public:
    int beautySum(string s) {
        int length=s.size();
        int sum=0;
        for(int i=0;i<length;i++){
            int j=i;
            unordered_map<char,int>freq;
            while(j<length){
                freq[s[j]]++;

                int mini=INT_MAX;;
                int maxi=0;
                for(auto&c:freq){
                    maxi=max(c.second,maxi);
                    mini=min(c.second,mini);
                }
                sum=sum+(maxi-mini);
                j++;
            }

        }
     return sum;   
    }
};