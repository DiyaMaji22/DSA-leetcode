#include <bits/stdc++.h>
using namespace std;                  

int main(){
    cout<<"Enter the number of rows: ";
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<endl;
        for(int j=0;j<num-i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i-1;k++){
            cout<<"*";
        }
    }
}