class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        int i=1<<k;
        int set=n&i;
        if(set!=0){
            return true;
        }
        return false;
    }
};