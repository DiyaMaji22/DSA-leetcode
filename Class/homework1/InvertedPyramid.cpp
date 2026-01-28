#include <bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Enter the number of rows: ";
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<endl;
        for(int j=num-i;j>0;j--){
            cout<<" ";
        }
        for(int k=2*i-1;k>0;k--){
            cout<<"*";
        }
    }
}