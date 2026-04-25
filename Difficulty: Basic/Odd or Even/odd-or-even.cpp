class Solution {
  public:
    string binary(int n){
        string res="";
        while(n>0){
            if(n%2==1) res +="1";
            else res +="0";
            n=n/2;
        }
        reverse(res.begin(),res.end());
        return res;
    }
    bool isEven(int n) {
        // code here
        string res=binary(n);
        int length=res.size();
        if(res[length-1]=='1')
        return false;
        
        
    return true;
        
    }
};