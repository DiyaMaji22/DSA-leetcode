class Solution {
  public:
    string binary(int n ){
        string res="";
        while(n>0){
           if(n%2==1) res+="1";
           else res+="0";
           n=n/2;
           
        }
        reverse(res.begin(), res.end());
        return res;
    }
    int setBits(int n) {
        // Write Your Code here
        int count=0;
        string res=binary(n);
        for(char c:res){
            if(c=='1'){
                count++;
            }
        }
        return count;
        
    }
};