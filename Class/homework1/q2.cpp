#include <bits/stdc++.h>
using namespace std;
// Check if the array is sorted

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int length=arr.size();
        int count=0;
        for(int i=0;i<length-1;i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
        
        
    }
};
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Solution ob;
    bool result = ob.isSorted(arr);
    if (result) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}