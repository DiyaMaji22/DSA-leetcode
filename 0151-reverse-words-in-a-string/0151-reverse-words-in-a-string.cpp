class Solution {
public:
    string reverseWords(string s) {
      vector<string>ans;
      string temp="";
      for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            temp=temp+s[i];
        }
        else{
            if(temp!=""){
            ans.push_back(temp);
            temp="";
            }
        }
      }
      if(temp!="")ans.push_back(temp);
      int length=ans.size();
      int left=0;
      int right=length-1;
      while(left<right){
            swap(ans[left],ans[right]);
            left++;
            right--;
      }
      string result="";
      for(int i=0;i<length;i++){
        result+=ans[i];
        if(i != length - 1) result += " ";

      }
    return result;
    }

};