#include <bits/stdc++.h>
using namespace std;

int main(){
    int num1,num2;
    string op;
    cout<<"Enter both the numbers";
    cin>>num1>>num2;
    cout<<"Enter the operator";
    cin>>op;
    if(op=="+"){
        cout<<num1+num2;
    }
    else if(op=="-"){
        cout<<num1-num2;
    }
    else if(op=="*"){
        cout<<num1*num2;
    }
    else if(op=="/"){
        if(num2!=0){
            cout<<num1/num2;
        }
        else{
            cout<<"Error: Division by zero";
        }
    }
    else{
        cout<<"Invalid operator";
    }
    
   
} 