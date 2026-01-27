// reverse an array
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        vector<int>arr2;
        int length=arr.size();
        for(int i=length-1;i>=0;i--){
            arr2.push_back(arr[i]);
            
        }
        arr=arr2;
        
        
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
    ob.reverseArray(arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
// swapping mechanism 
// class Solution {
//   public:
//     void reverseArray(vector<int> &arr) {
//         // code here
//         vector<int>arr2;
//         int length=arr.size();
//         for(int i=0;i<length/2;i++){
//             swap(arr[i],arr[length-i-1]);
//         }
        
        
        
//     }
// };