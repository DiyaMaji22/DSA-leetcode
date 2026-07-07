class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
    vector<int> result;
    int n = num.size();
    int carry = k;
    
    // Start from the rightmost digit
    for (int i = n - 1; i >= 0 && carry > 0; i--) {
        int sum = num[i] + carry;
        result.push_back(sum % 10);
        carry = sum / 10;
    }
    
    // Add remaining digits from num
    for (int i = n - 1 - result.size(); i >= 0; i--) {
        result.push_back(num[i]);
    }
    
    // Add remaining carry
    while (carry > 0) {
        result.push_back(carry % 10);
        carry /= 10;
    }
    
    // Reverse to get correct order
    reverse(result.begin(), result.end());
    return result;
    }
};