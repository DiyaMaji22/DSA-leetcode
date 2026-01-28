#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="diya";
    m[13]="maji";
    m[5]="miku";
    m.insert({5,"sovereign"});
    cout<<"before change: ";
    for(auto i:m)
    {
        cout<<i.first<<i.second<<endl;
    }
    m.erase(13);
    cout<<"after erase: ";
    for(auto i:m)
    {
        cout<<i.first<<i.second<<endl;
    }
    
   
}