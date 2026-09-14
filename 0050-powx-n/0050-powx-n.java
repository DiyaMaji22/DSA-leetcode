class Solution {
    double solve(double num,int power){
        if(power==0)return 1;
        if(power==1)return num;
        double value=solve(num,power/2);
        if(power%2==0) return value*value;
        else return value*value*num;


    }

    public double myPow(double x, int n) {
       if(n>=0)return solve(x,n);
       else return 1.0/solve(x,n);
       
       
    }
}