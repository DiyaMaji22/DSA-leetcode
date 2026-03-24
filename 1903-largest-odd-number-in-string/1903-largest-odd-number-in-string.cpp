class Solution {
public:
    string largestOddNumber(string num) {
        int length=num.size();
        int max=0;
        while(length>0){
            int temp=num[length-1]-'0';
            if(temp%2!=0){
               return num.substr(0,length);
            }
          length--;  
        }
    return "";   
    }
};