#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter number of rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];

    cout << "Enter array elements:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "Array elements are:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    
    }
    cout<<"Enter a target that you want to find: ";
    int target;
    cin>>target;
    if(isPresent(arr,target,3,4))

    
}