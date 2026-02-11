#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
          int i=num1.size()-1;
          int j=num2.size()-1;
          string ans="";
         
          int carry=0;
          while(i>=0 || j>=0 || carry){
             int sum=carry;
             if(i>=0){
                sum=sum+num1[i]-'0';
                i--;
             }
             if(j>=0){
                sum=sum+num2[j]-'0';
                j--;
             }
             ans.push_back((sum%10)+'0');
             carry=sum/10;
             
          }
          reverse (ans.begin(),ans.end());
          return ans;
       
    }
};

int main() {
    Solution solution;
    
    // Test case 1
    string num1 = "123";
    string num2 = "456";
    cout << num1 << " + " << num2 << " = " << solution.addStrings(num1, num2) << endl;
    
    // Test case 2
    num1 = "999";
    num2 = "1";
    cout << num1 << " + " << num2 << " = " << solution.addStrings(num1, num2) << endl;
    
    // Test case 3
    num1 = "0";
    num2 = "0";
    cout << num1 << " + " << num2 << " = " << solution.addStrings(num1, num2) << endl;
    
    return 0;
}