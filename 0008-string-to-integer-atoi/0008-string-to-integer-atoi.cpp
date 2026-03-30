class Solution {
public:
    int myAtoi(string s) {
        int length=s.size();
        int i=0;
        int sign=1;
        long long sum=0;
        while(i<length && s[i]==' '){
            i++;
        }
        if(i<length && (s[i]=='-' || s[i]=='+')){
          if (s[i]=='-') sign=-1;
          i++; 
        }
        while(i<length && isdigit(s[i])){
            sum=sum*10+(s[i]-'0');
            

            if(sign*sum>INT_MAX) return INT_MAX;
            if(sign*sum <INT_MIN) return INT_MIN;
            i++;
        }
        return sum*sign;
        
    }
};