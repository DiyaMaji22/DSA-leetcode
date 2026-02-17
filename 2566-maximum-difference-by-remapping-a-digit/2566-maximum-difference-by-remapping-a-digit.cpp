class Solution {
public:
    int minMaxDifference(int num) {
        string str=to_string(num);
        string maxstr="";
        char maxdigit=str[0];
        for(char c:str)
        {
            if(c!='9')
            {
                maxdigit=c;
                break;
            }
        }
        for(char c:str)
        {
            if(c==maxdigit)
            {
                maxstr.push_back('9');
            }
            else
            {
                maxstr.push_back(c);
            }
        }
        string minstr="";
        char mindigit=str[0];
        for (char c : str) {
            if (c == mindigit) {
                minstr.push_back('0');
            } else {
                minstr.push_back(c);
            }
        }
        int maxnum=stoi(maxstr);
        int minnum=stoi(minstr);
        return maxnum-minnum;
        
    }
};