#include <bits/stdc++.h>
using namespace std;


int main(){
    cout<<"Enter the number of rows:";
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<endl;
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=num-i;k>0;k--){
            cout<<"*";
        }
        

        
    }
}