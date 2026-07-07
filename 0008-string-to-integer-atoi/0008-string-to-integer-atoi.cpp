class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int sign=1;
        long long int num=0;
        int length=s.size();
        while(i<length && s[i]==' '){
            i++;
        }
        if(i<length && (s[i]=='-' || s[i]=='+')){
           if(s[i]=='-'){
            sign= -1;
           }
           i++;
        }
        
        while(i<length && isdigit(s[i])){
            num=num*10+(s[i]-'0');
            if(num*sign>INT_MAX)return INT_MAX;
            if(num*sign<INT_MIN)return INT_MIN;
            i++;
        }
        return num*sign;
    }
};